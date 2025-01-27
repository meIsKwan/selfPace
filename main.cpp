#include <iostream>

int main()
{
    int amount_dog(10);

    int amount_cat{4};
    // Use '(###)' for int '{###}' will return error
    int fraction_int (17450.2);

    int amount_animals {amount_cat + amount_dog};

    std::cout << "Total animals is: " << amount_animals << std::endl;
    std::cout << "Total animals is: " << fraction_int << std::endl;

    std::cout << "side of int: " << sizeof(int) << std::endl;
    std::cout << "side of fraction_int: " << sizeof(fraction_int) << std::endl;

    return 0;
}