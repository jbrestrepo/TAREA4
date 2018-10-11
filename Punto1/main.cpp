#include "printarray.hpp"
#include "printunique.hpp"
#include "createarray.hpp"

extern int size = 0;

int main()
{
    cout <<"       POINT ONE       " <<endl;
    cout <<"UNIQUE ELEMENTS OF ARRAY" <<endl;
    cout <<endl;

    size = length_array();
    int *array = new int [size];

    create_array(array, size);
    print_array(array, size);
    print_unique_elements(array, size);


    return 0;
}



