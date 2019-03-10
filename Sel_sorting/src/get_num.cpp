#include <iostream>
#include "get_num.hpp"
#include <sstream>

int get_num ()
{
    std::string s("");
    bool check = false;
    int integer = 0;
    do {
            getline (std::cin, s);
            if (s[0] == '-') {
                check = false;
            } else {
                for (int i = 0; i < s.size(); ++i) {
                    if (s[i] == '.') {
			std::cout<<"Input will be considered as integer.\n";
			check = false;
                    } else if ( s[i] < '0'|| s[i] > '9') {
                        std::cout << "Error:It will be confused as zero.\n";
                        break;
                    }
                }
            }
        } while (check);
    std::stringstream str_to_int (s);
    str_to_int >> integer;
    return integer;
}
