#include <iostream>
#include <string>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time() to seed random number
using namespace std;

// Function 1: Convert Decimal to Binary
// I made this function return a string because binary numbers are easier to build as text
// The logic keeps dividing by 2 and saving the remainder until the number becomes 0
string decimalToBinary(int decimal) {
    if (decimal == 0) return "0";  // Special case: 0 in binary is still 0
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;  // Add remainder to the front
        decimal /= 2;  // Divide by 2 for next step
    }
    return binary;
}

