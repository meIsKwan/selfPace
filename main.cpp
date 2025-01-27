#include <iostream>
#include <iomanip>

int main(){
    double double_number_01 {155649897};
    double double_number_02 {1.55649897e3};
    double double_number_03 {1.556e7};

    double double_number_04 {1.00000000000345};
    double double_number_05 {1.00000000000345e-11};

    float number1{1.12345678901234567890f};
    double number2{1.12345678901234567890};
    long double number3{1.12345678901234567890L};

    std::cout << std::setprecision(7);
    std::cout << "Number#1 is: " << number1 << std::endl;
    std::cout << std::setprecision(15);

    std::cout << "\n" << std::endl;
    std::cout << "Number#2 is: " << number2 << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << std::setprecision(20);

    std::cout << "Number#3 is: " << number3 << std::endl;

    return 0;
}