#include <iostream>

using std::cout;

class Base
{
public:
    virtual ~Base() {} 
};


class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived class function" << "\n";
    }
};

int main()
{
    Base *basePtr = new Derived();

 
    if (auto derivedPtr = dynamic_cast<Derived *>(basePtr))
    {
       
        derivedPtr->print();
    }
    else
    {
        
        cout << "Dynamic cast failed!" << "\n";
    }

    delete basePtr;
}
