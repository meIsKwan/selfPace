#include <iostream>
#include <string>

int main(){
    char myName;
    int age;
    std::cout << "Write your name here" << std::endl;
    std::cin >> myName;

    std::cout << "Write your age here" << std::endl;
    std::cin >> age;

    std::cout << "Your age is: " << age << std::endl;
    std::cout << "Your name is: " << myName << std::endl; 

    return 0;
}