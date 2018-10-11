#include "printarray.hpp"



void print_array(int *array, const int size)
{
    cout <<endl;
    cout <<endl;
    cout <<"{";

    for (int i=0; i<size;++i){
        cout << *array << " " ;
        array++;
    }
    cout << "}";
    cout <<endl;
    cout <<endl;

}

