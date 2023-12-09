// main.cpp
#include <iostream>
#include "rectangle.h"

int main() {
    double length, width;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    double area = calculateRectangleArea(length, width);

    std::cout << "The area of the rectangle is: " << area << std::endl;

    return 0;
}
