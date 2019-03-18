#include <iostream>
#include "asc_desc.hpp"
#include "get_int.hpp"
#include "print_array.hpp"

int main()
{   std::cout << "\n\t**** Insertion sorting algorithm ****\n\n";
    std::cout << "Please input array size in range of [1, 100]\n";
    int size = get_size();
    while (size > 100) {
        std::cout <<"Your input is out of range.\n";
        size = get_size();
    }
    int arr[size] ;
    std::cout << "Please input array.\n";
    for (int i = 0; i < size; ++i) {
        arr[i] = get_num();
    }
    print_array(arr, size);
    std::cout << "\nIf you want to sort array to Ascending order press 1.\n";
    std::cout << "Otherwise it will be sorted Descending order.\n";
    int button = get_num();
    asc_desc(arr, size, button);
    print_array(arr, size);
    return 0;
}
