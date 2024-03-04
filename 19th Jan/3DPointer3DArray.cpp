#include <iostream>

using std::cout;

int main() 
{
    const int size = 5;

    int*** ptr3D = new int**;

    *ptr3D = new int*[1];  
    (*ptr3D)[0] = new int[size];

    for (int i = 0; i < size; ++i) {
       ptr3D[0][0][i] = i + 1;
    }

    for (int i = 0; i < size; ++i) 
    {
        (*ptr3D)[0][i] += 1;
    }

    cout << "Incremented array: ";
    for (int i = 0; i < size; ++i) 
    {
        std::cout << (*ptr3D)[0][i] << " ";
    }

    
    delete[] (*ptr3D)[0];
    delete[] *ptr3D;
    delete ptr3D;
}
