#include <iostream>

int main() {
    char start = 'A';
    char end = 'Z';

    // Display characters from 'A' to 'Z' using a loop
    std::cout << "Characters from 'A' to 'Z':" << std::endl;

    for (char ch = start; ch <= end; ++ch) {
        std::cout << ch << " ";
    }

    std::cout << std::endl;

    return 0;
}
