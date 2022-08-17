#include "question_1_io.h"
#include <iostream>

int read_number() {
    std::cout << "Please enter a number: ";
    int a; // to store number
    std::cin >> a; 
    return a;
}


void write_answer(int a) {
    std::cout << "The result is: " << a << '\n';
}
