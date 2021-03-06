#include <iostream>
#include "print_array.hpp"
#include "quickSort.hpp"
#include "get_int.hpp"

int main()
{   std::cout <<"\n\t**** Quick_sort algorithm ****\n\n";
    std::cout << "Please enter array size in range of [1, 100].\n";
    int arr_size = get_size();
    while (arr_size > 100) {
        std::cout <<"Your input is out of range.\n";
        arr_size = get_size();
    }
    std::cout << "Eneter array elements.\n";
    int arr[arr_size];
    for (int i = 0; i < arr_size; ++i) {
        arr[i] = get_num();
    }
    std::cout << "If you want to sort array ascending order press 1.\n";
    std::cout << "Otherwise it will be sorted descending order.\n";
    int button = get_num();
    quickSort(arr, 0, arr_size - 1, button);
    std::cout <<"\nSorted array is.\n";
    print_array(arr, arr_size);
    return 0;
}

