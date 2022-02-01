#include <iostream>

int main() {
    int n, sum = 0;

    std::cout << "How many number: ";
    std::cin >> n;

    for (int i=0; i<n; i++) {
        int number = 0;
        std::cout << "(" << i+1 << ") " << "Enter a number: ";
        std::cin >> number;
        sum += number;
    }

    std::cout << "The sum is " << sum << std::endl;

    return 0;
}