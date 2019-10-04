// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Oct 2019
// This is program number guesser

#include <iostream>


int main() {
    // This will add numbers

    // variables
    float number;

    // Welcome statement
    std::cout << "Welcome, this is the NUMBER thing with + and -"
    "and 0." << std::endl;

    // input
    std::cout << "\nWhat is your number: " << std::endl;
    std::cin >> number;

    // process
    if (number > 0) {
        // output
        std::cout << "+" << std::endl;
    } else if (number < 0) {
        std::cout << "-" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }
}
