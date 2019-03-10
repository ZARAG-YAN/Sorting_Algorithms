#include <iostream>
#include "asc_order.hpp"
#include "swap.hpp"
#include "print_array.hpp"
#include "gen_array.hpp"
#include "get_num.hpp"
#include "sort_order.hpp"
int main()
{
    std::cout <<"Please input array size.\n"; 
    int size = get_num();
    int arr[size];
    gen_array (arr, size);
    print_array (arr, size);
    std::cout << "\nIf you want to sort array to Ascending order press 1.\n";
    std::cout << "Otherwise it will be sorted Descending order.\n";
    int button = get_num();
    sort_order (arr, size, button);
    print_array (arr, size);
    return 0;
}


