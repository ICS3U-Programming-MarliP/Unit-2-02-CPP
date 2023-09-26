// Copyright(c) 2023 Marli Peters
// Created by: Marli Peters
// Date: Sep. 26, 2023
// This program calculates the area and perimeter of a rectangle with user
// input.

#include <iostream>

// declare variables
float length;
float width;
float area;
float perimeter;

int main() {
    // get user input
    std::cout << "Calculate the area and perimeter of a rectangle.\n";
    std::cout << "Enter the length (cm):\n";
    std::cin >> length;
    std::cout << "Enter the width (cm):\n";
    std::cin >> width;

    // calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // display results
    std::cout << std::endl;
    std::cout << "Area = " << area << " cm ^ 2.";
    std::cout << "Perimeter = " << perimeter << "cm.";
}
