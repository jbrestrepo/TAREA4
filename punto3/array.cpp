#include "array.hpp"

void initializeArray (int **array1, int **array2,int **exit,const int size)
{
    for(int i=0; i<size ;i++)
    {
     array1 [i] = new int[size];
     array2 [i] = new int[size];
     exit [i] = new int[size];
    }


    cout << "INGRESE LOS VALORES DEL PRIMER ARREGLO" <<endl;
    cout <<endl;


     for(int i=0;i<size;i++)
     {
        for(int j=0;j<size;j++)
        {
           cin >> array1[i][j];
        }
     }

    cout <<endl;
    cout << "INGRESE LOS VALORES DEL SEGUNDO ARREGLO" <<endl;
    cout <<endl;

     for(int i=0;i<size;i++)
     {
        for(int j=0;j<size;j++)
        {
             cin >> array2[i][j];
        }
     }
    cout <<endl;
}

void printArray (int **array1,const int size,int ver)
{
    if (ver == 0)
    cout <<"SU PRIMER ARREGLO ES:" <<endl;

    if (ver ==1)
    cout <<"SU SEGUNDO ARREGLO ES:" <<endl;

    cout <<endl;

    int counter1=0;

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
        cout << array1[i][j] << "\t" ;
        counter1++;

            if (counter1 == 4)
            {
            cout <<"\n";
            counter1 = 0;
            }
        }
    }
    cout <<endl;
}


