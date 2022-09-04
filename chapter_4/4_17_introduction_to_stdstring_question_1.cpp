#include <iostream>
#include <string>

int main () {
    std::cout << "Please enter your full name: ";
    std::string full_name;
    std::getline(std::cin >> std::ws, full_name);

    std::cout << "Please enter your age: ";
    int age;
    std::cin >> age;

    int letter_count = static_cast<int>(full_name.size());
    std::cout << "The sum of your age and the number of letters in your name is: " << age + letter_count << '\n'; 

    return 0;
}
