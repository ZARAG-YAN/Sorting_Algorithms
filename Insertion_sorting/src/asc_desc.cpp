#include <iostream>
#include "asc_desc.hpp"

void swap ( int* a, int* b)
{
        int tmp = *a;
        *a = *b;
        *b = tmp;
}
void asc_order (int arr[], int size)
{   for (int i = 0; i < size; ++i){
        for (int j = 1; j < size; ++j) {
            if (arr[j] < arr[j-1]) {
                swap (&arr[j], &arr[j-1]);
            }   
        }   
    }
}
void desc_order (int arr[], int size)
{   for (int i = 0; i < size; ++i){
        for (int j = 1; j < size; ++j) {
            if (arr[j] > arr[j-1]) {
                swap (&arr[j], &arr[j-1]);
            }
        }
    }
}
void sort_order (int arr[], int size, int button)
{
    if ( button == 1) {
        asc_order (arr, size);
    }else {
        desc_order (arr, size);
    }
}
