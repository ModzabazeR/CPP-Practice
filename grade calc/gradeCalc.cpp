#include <iostream>

const char* gradeCalculator(int score) {
    if (score >= 80 && score <= 100) {
        return "A";
    }
    else if (score >= 70 && score < 80) {
        return "B";
    }
    else if (score >= 60 && score < 70) {
        return "C";
    }
    else if (score >= 50 && score < 60) {
        return "E";
    }
    else {
        return "F";
    }
}

int main() {
    int score;
    std::cout << "Enter your score: ";
    std::cin >> score;
    std::cout << "Your grade is " << gradeCalculator(score);
    return 0;
}