#include <iostream>

int main () 
{
    int int_input;

    std::cout << "Enter an Integer: ";
    
    std::cin >> int_input;

    std::cout << "Double " << int_input << " is: " << int_input * 2 << '\n';
    std::cout << "Triple " << int_input << " is: " << int_input * 3 << '\n';

    return 0;
}
