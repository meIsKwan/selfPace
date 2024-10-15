#include <iostream>
#include <string>

int main(){
    std::string myName;
    int age;
    std::cout << "Write your name here" << std::endl;

    // std::cin >> myName; This is wrong way to use
    std::getline(std::cin, myName); // Use "getline" to be able to get Full Name

    std::cout << "Write your age here" << std::endl;
    std::cin >> age;

    std::cout << "Your age is: " << age << std::endl;
    std::cout << "Your name is: " << myName << std::endl; 

    return 0;
}