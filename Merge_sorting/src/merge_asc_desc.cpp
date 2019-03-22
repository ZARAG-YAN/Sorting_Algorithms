#include "merge_asc_desc.hpp"

void merge_asc_desc(int arr[], const int& l, int m, const int& r, const int& button)
{
    int i, j, k;
    int len1 = m - l + 1;
    int len2 =  r - m;
    // create Left (range of [l,m]) and Right (range of [m+1, r]) temporary subarrays of arr[].
    int L[len1], R[len2];

    for (i = 0; i < len1; i++) {
        L[i] = arr[l + i];
    }
    for (j = 0; j < len2; j++) {
        R[j] = arr[m + 1+ j];
    }
    i = 0;
    j = 0;
    k = l;
    //Sorting order.If button = 1 sorted in ascending.
    //Otherwise descending order.
    while (i < len1 && j < len2) {
      if (button == 1) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            ++i;
        } else {
            arr[k] = R[j];
            ++j;
        }

      } else if (L[i] >= R[j]) {
            arr[k] = L[i];
            ++i;
        } else {
            arr[k] = R[j];
            ++j;
        }
        ++k;
    }
    support_1(arr, L, len1, i, k);
    support_1(arr, R, len2, j, k);
}
/*void support_2(int arr[], int sub_array1[], int sub_array2[], int i, int j, int k)
{
    if (sub_array1[i] <= sub_array2[j]) {
        arr[k] = sub_array1[i];
        ++i;
    } else {
        arr[k] = sub_array2[j];
        ++j;
    }
}*/

void support_1(int arr[], int sub_arr[], int lenght, int index, int k)
{
    while (index < lenght) {
        arr[k] = sub_arr[index];
        ++index;
        ++k;
    }
}

void merge_sort(int arr[], const int& l, const int& r, const int& button)
{
    if (l < r) {
        int m = l + (r - l) / 2; //for middle point.
        merge_sort(arr, l, m, button); // call for first L subarray.
        merge_sort(arr, m + 1, r, button); //call for second R subarray.
	    merge_asc_desc(arr, l, m, r, button);//merge two subarrays.
    }
}
