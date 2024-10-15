#include <iostream>
#include <string>

int main(){
    std::string myName;  // Use std::string instead of char for the name
    int age;

    std::cout << "Write your name here: " << std::endl;
    std::getline(std::cin, myName);  // Use std::getline to read the full name

    std::cout << "Write your age here: " << std::endl;
    std::cin >> age;

    std::cout << "Your age is: " << age << std::endl;
    std::cout << "Your name is: " << myName << std::endl;

    return 0;
}
