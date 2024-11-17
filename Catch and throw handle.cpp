#include <iostream>

using namespace std;

// Function that performs division and throws an exception for division

by zero

double divide(int numerator, int denominator) {

if (denominator == 0) {

throw "Division by zero error!";

}

return static_cast<double>(numerator) / denominator;

}

int main() {

int num, denom;

cout << "Enter numerator: ";

cin >> num;

cout << "Enter denominator: ";

cin >> denom;

try {

// Attempt to divide, which may throw an exception

double result = divide(num, denom);

cout << "Result: " << result << endl;

}

catch (const char* e) {

// Catch and handle the division by zero exception

cout << "Exception caught: " << e << endl;

}

return 0;

}
