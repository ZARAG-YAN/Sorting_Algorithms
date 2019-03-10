#include <iostream>
#include "swap.hpp"
#include "desc_order.hpp"

void desc_order (int arr[], int size)
{
    for (int i = 0; i <= size - 1; ++i){    
      int max_index = i;
        for (int j = i; j <= size; ++j) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        swap (arr[i], arr[max_index]);
    }   
    std::cout << "\nSort array in Descending Order \n";
}
