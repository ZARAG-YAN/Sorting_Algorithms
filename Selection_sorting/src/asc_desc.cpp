#include <iostream>
#include "asc_desc.hpp"
#include <cassert>

void swap(int* a, int* b)
{
        int tmp = *a;
        *a = *b;
        *b = tmp;
}
void asc_desc(int arr[], const int& size, const int& button)
{
    for (int i = 0; i < size - 1; ++i) {
        int min_max_index = i;
        for (int j = i + 1; j < size; ++j) {
            if (button == 1) {
               if (arr[j] < arr[min_max_index]) {
                   min_max_index = j;
               }
            } else if (arr[j] > arr[min_max_index]) {
                min_max_index = j;
            }
        }
        assert(arr[i]);
        assert(arr[min_max_index]);
        swap(&arr[i], &arr[min_max_index]);
    }
    std::cout << "\nSort array in Ascending Order \n";
}
