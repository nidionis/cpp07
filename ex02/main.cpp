#include "Array.h"

int main() {
    Array<int> a = Array<int>(10);
    std::cout << a << std::endl;
    a[2] = 2;
    std::cout << a[2] << std::endl;
    //std::cout << a[22] << std::endl;

    return (0);
}
