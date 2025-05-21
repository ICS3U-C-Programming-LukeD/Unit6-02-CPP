// Copyright (c) 2025 Luke Di Bert All rights reserved.
//
// Created by: Luke Di Bert
// Date: May , 2025
//

#include <cstdlib>
// For rand() and srand()

#include <ctime>
// For time()

// adds iostream library
#include <iostream>

// adds string library
#include <string>

#include <array>

int maxVal(std::array<int, 10> array) {
    int maxValue = 0;
    for (int counter = 0; counter < 10; counter++) {
        if (array[counter] > maxValue) {
            maxValue = array[counter];
        }
    }
    return maxValue;
}

int main() {
    std::array<int, 10> randNumArray;
    // Makes seed random by setting it to time
    srand(time(0));
    // Variables for random number and user number
    for (int counter = 0; counter < 10; counter++) {
        randNumArray[counter] = rand() % 101;
        std::cout << randNumArray[counter] << " added to array" << std::endl;
    }
    int MaximumValue = maxVal(randNumArray);
    std::cout << "The max value is " << MaximumValue << std::endl;
}
