#include <iostream>
#include <cmath>

int main() {
    int size; std::cin >> size; // The grid is 5x5
    int center = size / 2; // The middle index is 2

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Logic: The sum of the absolute distances from the center 
            // must equal the radius (2) to form this diamond outline.
            if (std::abs(i - center) + std::abs(j - center) == center) {
                std::cout << "* ";
            } else {
                std::cout << "  "; // Two spaces to keep the grid square
            }
        }
        std::cout << std::endl;
    }

    return 0;
}


//i didint solve this problem an again i am gonna look thatdd