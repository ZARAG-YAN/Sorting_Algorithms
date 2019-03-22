#include "quickSort.hpp"
#include <cassert>
void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
//Quick sorting is done against the last element of array.
//The last elemet of the array is stored in the variable pivot.
//Places all smaller than pivot elemets to left of pivot and
//all greater elements to right of pivot.
int partition(int arr[], const int& start, const int& end, const int& button)
{
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j <= end - 1; ++j) {
     if (button == 1) {
        if ( arr[j] <= pivot) {
            ++i;
            assert(arr[j]);
            assert(arr[j]);
            swap(&arr[i], &arr[j]);
        }
     } else if ( arr[j] >= pivot) {
            ++i;
            assert(arr[j]);
            assert(arr[j]);
            swap(&arr[i], &arr[j]);
     }
    }
    assert(arr[i + 1]);
    assert(arr[end]);
    swap(&arr[i + 1], &arr[end]);
    return i + 1;
}
void quickSort(int arr[], const int& start, const int& end, const int& button)
{
    if (start < end) {
    int index = partition(arr, start, end, button);
    quickSort(arr, start, index - 1, button);
    quickSort(arr, index + 1, end, button);
    }
}
