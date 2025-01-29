#include <iostream>

int main() {
    int iterations;
    std::cout << "Enter the number of iterations: ";
    std::cin >> iterations;

    for (int i = 1; i <= iterations; ++i) {
        int day;
        std::cout << "Choose a number (1-7) to represent a day (1=Monday, 7=Sunday): ";
        std::cin >> day;

        switch (day) {
            case 1:
                std::cout << "Day " << i << ": Monday" << std::endl;
                break;
            case 2:
                std::cout << "Day " << i << ": Tuesday" << std::endl;
                break;
            case 3:
                std::cout << "Day " << i << ": Wednesday" << std::endl;
                break;
            case 4:
                std::cout << "Day " << i << ": Thursday" << std::endl;
                break;
            case 5:
                std::cout << "Day " << i << ": Friday" << std::endl;
                break;
            case 6:
            case 7:
                std::cout << "Day " << i << ": Weekend!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice! Please choose a number between 1 and 7." << std::endl;
        }
    }

    return 0;
}
