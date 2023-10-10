// Created by: Finn Kitor
// Created on: October 10th, 2023
// This program asks the user for the subtotal and the tax
// percentage.It then calculates and displays the HST
// and the total.
#include <iomanip>
#include <iostream>

const double TAX_RATE_ONTARIO = 13.0;

int main() {
    double subtotal;
// user inputs subtotal
    std::cout << "Enter subtotal: $";
    std::cin >> subtotal;
// terminal calculates tax
    double tax = subtotal * TAX_RATE_ONTARIO / 100;
    double total = subtotal + tax;
// user gets total cost
    std::cout << std::endl;
    std::cout << "You entered a subtotal of $" << std::fixed << std::setprecision(2) << subtotal << std::endl;
    std::cout << "The HST is $" << std::fixed << std::setprecision(2) << tax << " and the total is $" << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}