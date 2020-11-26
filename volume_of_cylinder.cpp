// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on November 2020
// This program calculates the volume of a cylinder
//     with user inputted radius and height

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the volume of the cylinder

    // Variable declarations
    int radius;
    int height;
    double volume;

    // input
    std::cout << "Hello! Today we will be calculating" <<
                 " the volume for a cylinder."
              << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the radius of the cylinder (mm): ";
    std::cin >> radius;
    std::cout << "Enter the height of the cylinder (mm): ";
    std::cin >> height;

    // process
    volume = M_PI * (radius * radius) * height;

    // output
    std::cout << "" << std::endl;
    std::cout << "The volume for this cylinder is " << volume << " mm²"
              << std::endl;
}
