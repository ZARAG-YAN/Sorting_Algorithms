#include <iostream>
#include "print_array.hpp"

void print_array(int arr[], int size)
{
        for (int i = 0; i <= size; ++i) {
                std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
}
