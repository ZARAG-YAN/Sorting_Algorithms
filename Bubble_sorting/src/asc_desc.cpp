#include <iostream>
#include "asc_desc.hpp"
#include <cassert>

void swap(int* a, int* b)
{
        int tmp = *a;
        *a = *b;
        *b = tmp;
}
//for ascending or descending orders. User must input for sorting order.
//If button = 1 sortied by ascending order. Otherwise descending order.
void asc_desc(int arr[], const int& size, const int& button)
{
    for (int i = 0; i < size ; ++i) {
        for (int j = 0; j < size - 1; ++j) {
	    if (button == 1) {
               if (arr[j] > arr[j + 1]) {
                   assert(arr[j]);
                   assert(arr[j+1]);
                   swap(&arr[j], &arr[j+1]);
               }
	    } else if (arr[j] < arr[j + 1]) {
                   assert(arr[j]);
                   assert(arr[j+1]);
                   swap(&arr[j], &arr[j + 1]);
	      }
        }
    }
    std::cout << "\nSort array in Ascending Order \n";
}
