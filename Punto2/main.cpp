#include "printarray.hpp"
#include "printunique.hpp"
#include "createarray.hpp"
#include "organizearray.hpp"

extern int size = 0;

int main()
{
    cout <<"            POINT TWO       " <<endl;
    cout <<"ORGANIZE UNIQUE ELEMENTS OF ARRAY" <<endl;
    cout <<endl;

    size = length_array();
    int *array = new int [size];

    create_array(array, size);

    cout << "The Original Array is: \n";
    print_array(array, size);
    organize_array(array, size);

    cout << "The Organized Array is: \n";
    print_array(array, size);


    print_unique_elements(array, size);


    delete [] array;
    array = nullptr;

    return 0;
}
