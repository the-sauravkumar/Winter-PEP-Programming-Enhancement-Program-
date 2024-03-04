#include <iostream>

using std::cout;
using std::cin;

int main()
{
    while (true)
    {
        int choice;
        cin >> choice;
        if(choice == 100)
        {
            cout << "Loop Terminated !";
            break;
        }
    }
}