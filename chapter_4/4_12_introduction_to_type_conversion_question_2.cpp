#include <iostream>

char ask_input () {
    std::cout << "Enter a single character: ";
    char user_input;
    std::cin >> user_input;
    return user_input;
}


int main () {
    char user_input = ask_input();
    std::cout << "You entered '" << user_input << "', which has ASCII code " << (int) user_input << '\n';

    return 0;
}

