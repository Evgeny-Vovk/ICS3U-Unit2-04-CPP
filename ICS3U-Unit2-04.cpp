// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : September 2022
// ICS3U-Unit2-04.cpp File, learning input processing and output in C++.

#include <cmath>
#include <iostream>

int main() {
    // creating variables
    const float RENT = 1;
    const float LABOR = 0.75;
    const float COST_PER_INCH = 0.5;
    const float HST = 1.13;
    float diameter;
    float pizzaCost;
    float total;

    // input
    std::cout << "Input the diameter of the pizza in inches: ";
    std::cin >> diameter;

    // process
    pizzaCost = LABOR + RENT + (COST_PER_INCH * diameter);
    total = pizzaCost * HST;

    //output
    std::cout << "The cost for " << diameter << " inches pizza is $" << total;

    std::cout << "\n\nDone.\n";
}
