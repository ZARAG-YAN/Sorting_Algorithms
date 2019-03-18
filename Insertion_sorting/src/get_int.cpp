#include <iostream>
#include "get_int.hpp"
#include <cstring>
#include <sstream>

int get_num()
{
    std::string s("");
    bool check = false;
    int integer = 0;
    int size = 0;
    do {
        getline(std::cin, s);
        size = s.size();
        if (s[0] == '-') {
            check = false;
        } else {
            for (int i = 0; i < size; ++i) {
                if (s[i] == '.') {
	   	    std::cout << "Input will be considered as integer.\n";
		    check = false;
                } else if (s[i] < '0'|| s[i] > '9') {
                          if (s[i] == ' ') {
                              std::cout << "The numbers after the first digit are ignored.\n";
                              break;
                          } else {
                              std::cout << "Error:It will be confused as zero.\n";
                              break;
                          }
                }
            }
        }
    } while (check);
    std::stringstream str_to_int (s);
    str_to_int >> integer;
    return integer;
}

int get_size()
{   std::string s;
    bool f = true;
    int integer = 0;
    while (f) {
	getline(std::cin, s);
        int size = s.size();
	f = false;
	if (s[0] == '-') {
	    for (int i = 0; i < size; ++i) {
	        if (s[i] < '0' || s[i] > '9') {
		    f = true;
		    std::cout << "Error: Please input positive number.\n";
		}
	    }
	} else {
	    for (int i = 0; i < size; ++i) {
	        if (s[i] == '.') {
		    std::cout << "In cosidered integer.\n";
		} else if (s[i] < '0' || s[i] > '9') {
		        std::cout << "Error: Please input number.\n";
		        f = true;
		    }
	    } 
	}
	if (s[0] == '0') {
	    f = true;
	    std::cout << "Error: Please enter more than zero.\n";
	}
    }
    std::stringstream str_to_int (s);
    str_to_int >> integer;
    return integer;
}
