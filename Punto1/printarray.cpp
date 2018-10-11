#include "printarray.hpp"

void print_array(int *array, const int size)
{

    cout << "the array is: \n";
    for (int i=0; i<size;++i){
        cout << *array << " ";
        array++;
    }
    cout << "\n";
    cout <<endl;

}
