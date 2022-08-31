#include <iostream>

int ask_for_input() {
    int user_input;
    std::cin >> user_input;

    return user_input;
}

bool is_prime(int user_input) {
    if (user_input == 2 | user_input == 3 | user_input == 5 | user_input == 7) {
        return true;
    } else {
        return false;
    }
}

int main () {
    
    int result = ask_for_input();
    std::cout << std::boolalpha << "Is user input prime? "<< is_prime(result) << '\n';

    return 0;
}
