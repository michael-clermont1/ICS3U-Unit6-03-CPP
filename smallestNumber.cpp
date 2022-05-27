// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: May 2022
// This program is to get smallest number in an array

#include <random>
#include <array>
#include <iostream>


template<size_t N>
int SmallNumber(std::array<int, N> array) {
    // this functions is to get smallest number in an array

    int smallNumber = array[1];
    int maxi = 0;

    for (int counter = 0; counter < array.size(); counter++) {
        maxi = array[counter];
        if (smallNumber > maxi) {
            smallNumber = maxi;
        }
    }

    return smallNumber;
}

main() {
    // this function uses an array

    std::array<int, 10> randomNumbers;
    int aSingleRandomNumber = 0;
    int smallestNumber = 0;


    // input
    std::cout << "The numbers are: ";
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        aSingleRandomNumber = idist(rgen);
        randomNumbers[loop_counter] = aSingleRandomNumber;
        std::cout << aSingleRandomNumber << ", ";
    }
    std::cout << " " << std::endl;

    smallestNumber = SmallNumber(randomNumbers);

    std::cout << "The smallest number generated is: "
    << smallestNumber << std::endl;
}
