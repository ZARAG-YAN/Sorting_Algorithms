#include <iostream>
#include "swap.hpp"
#include "asc_order.hpp"

void asc_order (int arr[], int size)//achman
{
    for (int i = 0; i <= size - 1; ++i){
      int min_index = i; 
        for (int j = i + 1; j <= size; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap (arr[i], arr[min_index]);
    }
    std::cout << "\nSort array in Ascending Order \n";
}
