#include "iter.h"

template <typename List_t, typename Size_t>
void iter(List_t *list, Size_t size, void (*f)(List_t))
{
    for (Size_t i = 0; i < size; ++i)
        f(list[i]);
}


template <typename type_t>
void f1(type_t x)
{
    x += 1;
    std::cout << x << std::endl;
}

#define LEN 10
int main( void ) {
    int a[LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char b[LEN] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    ::iter(a, LEN, f1);
    ::iter(b, LEN, f1);
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
