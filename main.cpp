#include <iostream>
#include <locale>
#include <io.h>
#include <fcntl.h>

int main(){
    int cuccut {10};
    long long dicho {123};
    std::cout << cuccut << " and 0 " << dicho << std::endl;
    std::cout << sizeof(dicho) << " is the size of 'dicho' " << dicho << std::endl;
}