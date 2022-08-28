#ifndef ARRAY_COPY_H 
#define ARRAY_COPY_H

#include <array_copy.cpp>
#include <string.h>

void copy_array_int(int min_size, int size_avoid, int arrFrom[], int arrTo[], int avoid[]);

void copy_array_str(int min_size, int size_avoid, std::string arrFrom[], std::string arrTo[], std::string avoid[]);


#endif
