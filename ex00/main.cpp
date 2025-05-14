#include "whatever.h"
#include <iostream>
#include <cstdlib>

template <typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T &min(T &a, T &b) {
    if (a < b)
        return a;
    return b;
}

template <typename T>
T &max(T &a, T &b) {
    if (a > b)
        return a;
    return b;
}

int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}

/*
int main(int argc, char **argv)
{
    if (argc != 3) {
        std::cerr << "usage: " << argv[0] << " <number> <number>" << std::endl;
        return 1;
    }
    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);
    std::cout << "min: " << min(a, b) << std::endl;
    std::cout << "max: " << max(a, b) << std::endl;
    swap(a, b);
    std::cout << "after swap: ";
    std::cout << "a: " << a;
    std::cout << ", b: " << b;
    std::cout << std::endl;
	return 0;
}
*/
