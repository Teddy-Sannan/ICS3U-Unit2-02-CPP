// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: September 16
// This program calculates the area and perimeter of a rectangle

#include <iostream>

int main() {
    // variable declaration
    int length;
    int width;
    int area;
    int perimeter;
    // input
    std::cout << "Perimeter and area of a rectangle" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the length (mm): ";
    std::cin >> length;
    std::cout << "Enter the width (mm): ";
    std::cin >> width;
    // process
    perimeter = 2 * (length + width);
    area = length * width;
    // output
    std::cout << "Perimeter is " << (perimeter) << "mm" << std::endl;
    std::cout << "Area is " << (area) << "mm^2" << std::endl;
}
