#include "quickSort.hpp"

void swap (int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j <= end - 1; ++j) {
        if ( arr[j] <= pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    } swap(arr[i + 1], arr[end]);
    return i + 1;
}
void quickSort(int arr[], int start, int end)
{
    if (start < end) {
    int index = partition(arr, start, end);
    quickSort(arr, start, index - 1);
    quickSort(arr, index + 1, end);
    }
}
