import pygame
import heapq

# Rənglər
WHITE = (255, 255, 255)
GREEN = (0, 255, 0)      # Boş sahə
BLUE = (0, 0, 255)       # Ən qısa yol
BLACK = (50, 50, 50)     # Maneə (Divar)
RED = (255, 0, 0)        # Axtarılan sahə
START_COLOR = (0, 200, 200) # Başlanğıc
END_COLOR = (255, 255, 0)   # Son (Hədəf)

# Parametrlər
WIDTH = 400
ROWS = 20
GAP = WIDTH // ROWS

class Node:
    def __init__(self, row, col):
        self.row, self.col = row, col
        self.x, self.y = row * GAP, col * GAP
        self.color = GREEN
        self.neighbors = []

    def draw(self, win):
        pygame.draw.rect(win, self.color, (self.x, self.y, GAP - 1, GAP - 1))

    def update_neighbors(self, grid):
        self.neighbors = []
        # Yuxarı, Aşağı, Sağ, Sol yoxlanışı
        if self.row < ROWS - 1 and grid[self.row + 1][self.col].color != BLACK:
            self.neighbors.append(grid[self.row + 1][self.col])
        if self.row > 0 and grid[self.row - 1][self.col].color != BLACK:
            self.neighbors.append(grid[self.row - 1][self.col])
        if self.col < ROWS - 1 and grid[self.row][self.col + 1].color != BLACK:
            self.neighbors.append(grid[self.row][self.col + 1])
        if self.col > 0 and grid[self.row][self.col - 1].color != BLACK:
            self.neighbors.append(grid[self.row][self.col - 1])

def dijkstra(draw, grid, start, end):
    count = 0
    open_set = []
    heapq.heappush(open_set, (0, count, start))
    came_from = {}
    distance = {node: float("inf") for row in grid for node in row}
    distance[start] = 0

    while open_set:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()

        current = heapq.heappop(open_set)[2]

        if current == end:
            # Yolu geri çəkmək
            while current in came_from:
                current = came_from[current]
                if current != start:
                    current.color = BLUE
                draw()
            end.color = END_COLOR
            return True

        for neighbor in current.neighbors:
            temp_dist = distance[current] + 1
            if temp_dist < distance[neighbor]:
                came_from[neighbor] = current
                distance[neighbor] = temp_dist
                count += 1
                heapq.heappush(open_set, (distance[neighbor], count, neighbor))
                if neighbor != end:
                    neighbor.color = RED
        
        draw()
        if current != start:
            current.color = BLACK # Gəzilmiş yerləri tündləşdirir

    return False

def main():
    grid = [[Node(i, j) for j in range(ROWS)] for i in range(ROWS)]
    start = end = None
    run = True

    win = pygame.display.set_mode((WIDTH, WIDTH))
    pygame.display.set_caption("Dijkstra Alqoritması")

    while run:
        win.fill(WHITE)
        for row in grid:
            for node in row:
                node.draw(win)
        pygame.display.update()

        for event in pygame.event.get():
            if event.type == pygame.QUIT: run = False

            if pygame.mouse.get_pressed()[0]: # Sol klik
                pos = pygame.mouse.get_pos()
                row, col = pos[0] // GAP, pos[1] // GAP
                node = grid[row][col]
                if not start:
                    start = node
                    start.color = START_COLOR
                elif not end and node != start:
                    end = node
                    end.color = END_COLOR
                elif node != start and node != end:
                    node.color = BLACK

            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_SPACE and start and end:
                    for row in grid:
                        for node in row:
                            node.update_neighbors(grid)
                    dijkstra(lambda: [n.draw(win) for r in grid for n in r] or pygame.display.update(), grid, start, end)

    pygame.quit()

main()