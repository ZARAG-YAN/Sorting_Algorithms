#include <iostream>
#include "asc_desc.hpp"

void swap ( int& a, int& b)
{
        int tmp = 0;
        tmp = a;
        a = b;
        b = tmp;
}

void asc_order (int arr[], int size)//achman
{
    for (int i = 0; i < size - 1; ++i){
        for (int j = 0; j < size; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap (arr[j], arr[j+1]);
            }
        }
    }   
    std::cout << "\nSort array in Ascending Order \n";
}

void desc_order (int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i){    
        for (int j = 0; j < size; ++j) {
            if (arr[j] < arr[j+1]) {
                swap (arr[j], arr[j+1]);
	    }
	}
    }  
    std::cout << "\nSort array in Descending Order \n";
}
