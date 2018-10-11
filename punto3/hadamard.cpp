#include "hadamard.hpp"

void hadamard (int **array1, int **array2,int **exit,const int size)
{
    int counter3=0;

    cout <<endl;
    cout << "PRODUCTO HADAMARD DE TUS DOS ARREGLOS" <<endl;
    cout <<endl;

    for(int i=0; i < size; i++)
    {
        for(int j=0; j <size; j++)
        {
        exit [i][j] = ((array1 [i][j]) * (array2 [i][j]));
        cout << exit [i][j] <<"\t";

        counter3 ++;

         if (counter3 == 4)
         {
            cout <<"\n";
            counter3 = 0;

         }
       }
    }
    cout <<endl;

}
