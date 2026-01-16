import random
with open ("words.txt", 'r') as file:
        lines =  file.read().replace(' ', "\n")
        words = lines.split()
        random_word = random.choice(words)
number_of_gueses = 5
achhive_player = '*'.join(len(random_word) * '_')
print(achhive_player)
while number_of_gueses > 0:
    player_gues = input()
    if player_gues is random_word:
        achhive_player[random_word.index(player_gues)] = player_gues
        print(achhive_player)
    else:
        print(f'You lost one try  unfortunatly,{player_gues} is not located in our words ;) ')
        number_of_gueses -= 1
