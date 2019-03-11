#include <iostream>
#include "print_array.hpp"
void print_array(int a[], int size)
{
    for (int i = 0; i < size; ++i) {
        std::cout << a[i] << " ";
    }   std::cout <<"\n\n";
}

