#include <iostream>
#include "asc_desc.hpp"
#include "print_array.hpp"
#include "get_int.hpp"
int main()
{   std::cout <<"\n\t**** Insertion sorting algorithm ****\n\n";
    std::cout <<"Please input array size.\n"; 
    int size = get_size();
    int arr[size];
    std::cout << "Please input array.\n";
    for (int i = 0; i < size; ++i) {
        arr[i] = get_num();
    }
    print_array (arr, size);
    std::cout << "\nIf you want to sort array to Ascending order press 1.\n";
    std::cout << "Otherwise it will be sorted Descending order.\n";
    int button = get_num();
    sort_order (arr, size, button);
    print_array (arr, size);
    return 0;
}

