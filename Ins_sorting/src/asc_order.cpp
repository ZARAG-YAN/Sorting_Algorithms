#include <iostream>
#include "swap.hpp"
#include "asc_order.hpp"

void asc_order (int arr[], int size)
{   for (int i = 0; i <= size; ++i){
        for (int j = 1; j <= size; ++j) {
            if (arr[j] < arr[j-1]) {
                swap (arr[j], arr[j-1]);
            }   
        }   
    }
}
