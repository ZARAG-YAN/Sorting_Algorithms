#include <iostream>
#include <sstream>
#include "swap.hpp"
#include "print_array.hpp"
#include "asc.hpp"
#include "desc.hpp"
#include "get_num.hpp"

int main ()
{
	std::cout <<"Enter please array size >>> ";
	int size = get_num();
	int arr[size];
	int button = 0;
	std::cout << "Please input array \n";
	
	for (int i = 0; i <= size; ++i) {
		arr[i] = get_num ();
	}
	std::cout <<"Determine sort order:\n";
	std::cout <<"Press 1 if you want to sort it in ascending ordered.";
	std::cout <<"\nOtherwise it will be sorted by descending order. ";
	button = get_num ();
	if (button == 1) {
	    asc_order( arr, size);
	} else desc_order (arr, size);
	print_array (arr, size);

    return 0;
}
