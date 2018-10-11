#include "organizearray.hpp"

extern int size;

void organize_array (int *array, const int size)
{
    int swap;

    do
    {
        swap = 0;

        for (int i=0; i<size-1; ++i)
        {
            if (change(&array[i], &array[i+1]))
            {
               swap++;
            }

        }
    }while (swap);
}

bool change(int *num1, int *num2)
{
    int temp = *num2;

    if((*num1)<=(*num2))
    {
        return false;
    }
    else
    {
        *num2=*num1;
        *num1=temp;

        return true;
    }
}
