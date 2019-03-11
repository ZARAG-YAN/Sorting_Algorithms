#include <iostream>
#include "asc_desc.hpp"

void swap(int& a, int& b)
{
        int tmp = 0;
        tmp = a;
        a = b;
        b = tmp;
}
void asc_order(int arr[], int size)
{
    for (int i = 0; i <= size - 1; ++i) {
        int min_index = i; 
        for (int j = i + 1; j <= size; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
    std::cout << "\nSort array in Ascending Order \n";
}
void desc_order(int arr[], int size)
{
    for (int i = 0; i <= size - 1; ++i) {
        int max_index = i;
        for (int j = i; j <= size; ++j) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        swap(arr[i], arr[max_index]);
    }
    std::cout << "\nSort array in Descending Order \n";
}
