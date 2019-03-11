#include <iostream>
#include <sstream>
#include "print_array.hpp"
#include "asc_desc.hpp"
#include "get_int.hpp"

int main ()
{       std::cout <<"\n\t**** Selection sorting algorithm ****\n\n";
	std::cout <<"Enter please array size >>> ";
	int size = get_size();
	int arr[size];
	int button = 0;
	std::cout << "Please input array \n";
	for (int i = 0; i < size; ++i) {
		arr[i] = get_num();
	}
	std::cout <<"Press 1 if you want to sort array in ascending ordered.";
	std::cout <<"\nOtherwise it will be sorted by descending order. ";
	button = get_num();
	if (button == 1) {
	    asc_order(arr, size);
	} else desc_order(arr, size);
	print_array(arr, size);
  
    return 0;
}
