#include <iostream>
#include "print_array.hpp"
#include "asc_desc.hpp"
#include "get_int.hpp"

int main ()
{       std::cout <<"\n\t**** Bubble sorting algorithm ****\n\n";
	std::cout <<"Enter please array size in range [1, 100] >>> ";
	int size = get_size();
        while (size > 100) {
            std::cout <<"Your input is out of range.\n";
	    size = get_size();
        }
	int arr[size];
	std::cout << "Please input array \n";

	for (int i = 0; i < size; ++i) {
		arr[i] = get_num();
	}
	std::cout <<"Determine sort order:\n";
	std::cout <<"Press 1 if you want to sort it in ascending ordered.";
	std::cout <<"\nOtherwise it will be sorted by descending order. ";
	int button = get_num();
	asc_desc(arr, size, button);
	print_array(arr, size);

    return 0;
}
