#include "swap.hpp"

void swap ( int& a, int& b)
{
        int tmp = 0;
        tmp = a;
        a = b;
        b = tmp;
}
