#ifndef CREATEARRAY_CPP
#define CREATEARRAY_CPP

#include "createarray.hpp"

extern int size;

void create_array (int *array, const int size)
{
      cout <<"enter the numbers"<<endl;
        for (int i=0; i<size; ++i)
        {
        cin >> array [i];
        }
}

int length_array()
{
    cout <<"enter the size"<<endl;
    cin >> size;

    return size;
}

#endif // CREATEARRAY_CPP
