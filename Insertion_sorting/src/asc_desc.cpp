#include <iostream>
#include "asc_desc.hpp"

void swap(int* a, int* b)
{
        int tmp = *a;
        *a = *b;
        *b = tmp;
}
void asc_desc(int arr[], const int& size, const int& button)
{   for (int i = 0; i < size; ++i){
        for (int j = 1; j < size; ++j) {
          if (button == 1) {
            if (arr[j] < arr[j-1]) {
                swap(&arr[j], &arr[j-1]);
            }
          } else if (arr[j] > arr[j-1]) {
                swap(&arr[j], &arr[j-1]);
          }
        }   
    }
}
