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

// Function 2: Convert Binary to Decimal
// Here, I go through each digit in the string, from left to right
// Each digit is multiplied by the correct power of 2 based on its position
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 1;  // This will be 2^0, 2^1, 2^2, etc.
    // Start from the last character (least significant bit)
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += power;  // Add the value if the bit is 1
        }
        power *= 2;  // Double the power for the next digit (2^1, 2^2, etc.)
    }
    return decimal;
}
// Function 3: Convert Decimal to Hexadecimal
// Same idea as binary, but now we divide by 16
// Numbers 10-15 become A-F, so I used a lookup string to make it simple
string decimalToHexadecimal(int decimal) {
    if (decimal == 0) return "0";
    string hex = "";
    string hexDigits = "0123456789ABCDEF";  // Easy way to map 10-15 to A-F
    while (decimal > 0) {
        hex = hexDigits[decimal % 16] + hex;  // Get the right hex digit
        decimal /= 16;
    }
    return hex;
}
