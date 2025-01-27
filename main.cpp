#include <iostream>

int decimals()
{
    int amount_dog{10};

    int amount_cat{4};
    // Use '(###)' for int '{###}' will return error
    int fraction_int {17450};

    int amount_animals {amount_cat + amount_dog};

    std::cout << "Total animals is: " << amount_animals << std::endl;
    std::cout << "Total animals is: " << fraction_int << std::endl;

    std::cout << "size of int: " << sizeof(int) << std::endl;
    std::cout << "size of fraction_int: " << sizeof(fraction_int) << std::endl;

    return 0;
}

int integer()
{
    // 2 bytes
    short short_var{-32768};
    short int short_int{455};
    signed short signed_short{122};
    signed short int signed_short_int{-456};
    unsigned short int unsigned_short_int{456};

    // 4 bytes
    int int_var{56165};
    signed signed_var{874145};
    signed int signed_int{561684}; 
    unsigned int unsigned_int{1065};

    // 4 or 8 bytes
    long long_var{88};
    long int long_int{33};
    signed long signed_long{44};
    signed long int signed_long_int{-44};
    unsigned long int unsigned_long_int{44};

    // 8 bytes
    long long long_long{888};
    long long int long_long_int{999};
    signed long long signed_long_long{-444};
    signed long long int signed_long_long_int{-1234};
    unsigned long long int unsigned_long_long_int{1234};

    std::cout << "----------------------" << std::endl;
    std::cout << "Size of 'short' " << sizeof(short) << std::endl;
    std::cout << "Size of 'short int' " << sizeof(short int) << std::endl;
    std::cout << "Size of 'signed short' " << sizeof(signed short) << std::endl;
    std::cout << "Size of 'signed short int' " << sizeof(signed short int) << std::endl;
    std::cout << "Size of 'unsigned short int' " << sizeof(unsigned short int) << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "Size of 'int' " << sizeof(int) << std::endl;  
    std::cout << "Size of 'signed' " << sizeof(signed) << std::endl;
    std::cout << "Size of 'signed int' " << sizeof(signed int) << std::endl;
    std::cout << "Size of 'unsigned int' " << sizeof(unsigned int) << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "Size of 'long' " << sizeof(long) << std::endl;
    std::cout << "Size of 'long int' " << sizeof(long int) << std::endl;
    std::cout << "Size of 'signed long' " << sizeof(signed long) << std::endl;
    std::cout << "Size of 'signed long int' " << sizeof(signed long int) << std::endl;
    std::cout << "Size of 'unsigned long int' " << sizeof(unsigned long int) << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "Size of 'long long' " << sizeof(long long) << std::endl;
    std::cout << "Size of 'long long int' " << sizeof(long long int) << std::endl;
    std::cout << "Size of 'signed long long' " << sizeof(signed long long) << std::endl;
    std::cout << "Size of 'signed long long int' " << sizeof(signed long long int) << std::endl;
    std::cout << "Size of 'unsigned long long int' " << sizeof(unsigned long long int) << std::endl;
    std::cout << "----------------------" << std::endl;

    return 0;
}

int main()
{
    decimals();
    integer();

    return 0;
}
