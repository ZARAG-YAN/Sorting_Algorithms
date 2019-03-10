#include "gen_array.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>
void gen_array (int a[],int arr_size)
{
    srand (time(NULL));
    std::cout <<"Generated array in the range 0 to 99.\n";
    for (int i = 0; i < arr_size; ++i) {
        a[i] = rand() % 100;
    }

}
