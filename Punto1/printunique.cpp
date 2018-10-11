#include "printunique.hpp"

void print_unique_elements(int *array, const int size)
{
    cout << "the unique array is: "<<endl;
    int *fixed_ptr = array;
    int *moving_ptr = array;

    for (int i=0; i<size;i++){

        moving_ptr = fixed_ptr;

        int j;
        for (j=0; j<i; j++)
        {
            if (*array == *moving_ptr)
            {
                break;
            }
            moving_ptr++;
        }

        if (array == moving_ptr)
            cout << *array <<" ";
        array++;
    }
    cout <<endl;
    cout <<endl;

}
