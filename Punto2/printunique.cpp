#include "printunique.hpp"

void print_unique_elements(int *array, const int size)
{

    cout <<endl;
    cout <<endl;

    cout <<"      HISTOGRAM"<<endl;
    cout << "The Unique Array Is: "<< "\n"<< "\n";

    int *moving_ptr = array;


    for (int i=0; i<size;i++)
    {

        int j;
        for (j=0; j<i; j++)
        {
            if (*array == *moving_ptr)
            {
                break;
            }
            moving_ptr++;
        }

        if (array == moving_ptr){



            cout << *array <<" " << "\n";

        }

            array++;


     }

    cout <<endl;
    cout <<endl;
}

