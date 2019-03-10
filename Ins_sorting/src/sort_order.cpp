#include "sort_order.hpp"
#include "asc_order.hpp"
#include "desc_order.hpp"
#include <iostream>
void sort_order (int arr[], int size, int button)
{
    if ( button == 1) {
        asc_order (arr, size);
    }else {
        desc_order (arr, size);
    }   
}
