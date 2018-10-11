#include "array.hpp"
#include "hadamard.hpp"


int main()
{

    int size=0;
    int ** array1 = new int*[size];
    int ** array2 = new int*[size];
    int ** exit = new int*[size];
    int ver1=0;
    int ver2=1;

    cout << "        DINAMIC ARRAY-HADAMARD PRODUCT" << endl;
    cout <<endl;
    cout <<endl;

    cout << "Ingrese El Tamano De Los Arreglos A Multiplicar" << endl;
    cin >> size;
    cout <<endl;

    initializeArray(array1,array2,exit,size);
    printArray(array1,size,ver1);
    printArray(array2,size,ver2);
    hadamard(array1,array2,exit,size);

    return 0;
}




















