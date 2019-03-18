#include "merge_asc_desc.hpp"

void merge_asc_desc(int arr[], const int& l, int m, const int& r, const int& button)  
{ 
    int i, j, k;
    int len1 = m - l + 1;  
    int len2 =  r - m;  
    // create Left Right temp subarrays of arr[].
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
/*void support_2(int arr[], int L[], int R[], int i, int j, int k)
{
    if (L[i] <= R[j]) {
        arr[k] = L[i];
        ++i;
    } else {
        arr[k] = R[j];
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
        int m = l + (r - l) / 2;
        merge_sort(arr, l, m, button);
        merge_sort(arr, m + 1, r, button);
	merge_asc_desc(arr, l, m, r, button);
    }
}
