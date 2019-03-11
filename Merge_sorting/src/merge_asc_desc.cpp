#include "merge_asc_desc.hpp"

void merge_asc(int arr[], int l, int m, int r)  
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
    k = l; // index of merged subarray 
    while (i < len1 && j < len2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            ++i; 
        } else { 
            arr[k] = R[j]; 
            ++j; 
        }   
        ++k; 
    }
    while (i < len1) { 
        arr[k] = L[i];
        ++i;
        ++k;
    }
    while (j < len2) {
        arr[k] = R[j];
        ++j;
        ++k;
    }
}

void merge_desc(int arr[], int l, int m, int r)
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
    k = l; // index of merged subarray
    while (i < len1 && j < len2) {
        if (L[i] >= R[j]) {
            arr[k] = L[i];
            ++i;
        } else {
            arr[k] = R[j];
            ++j;
        }
        ++k;
    }
    while (i < len1) {
        arr[k] = L[i];
        ++i;
        ++k;
    }
    while (j < len2) {
        arr[k] = R[j];
        ++j;
        ++k;
    }
}

void merge_sort(int arr[], int l, int r, int button)
{
    if (l < r) {
        int m = l+(r-l)/2;
        merge_sort(arr, l, m, button);
        merge_sort(arr, m+1, r, button);
    if (button == 1) {
        merge_asc (arr, l, m, r);
        } else {
             merge_desc (arr, l, m, r);
        }
    }
}

