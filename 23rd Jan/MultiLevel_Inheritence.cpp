#include <iostream>
using std::cout;

class A 
{
public:
    A() 
    {
        cout << "Constructor of class A" << std::endl;
    }

    ~A() 
    {
        cout << "Destructor of class A" << std::endl;
    }
};

class B : public A 
{
public:
    B() 
    {
        cout << "Constructor of class B" << std::endl;
    }

    ~B() 
    {
        cout << "Destructor of class B" << std::endl;
    }
};

class C : public B 
{
public:
    C() 
    {
        cout << "Constructor of class C" << std::endl;
    }

    ~C() 
    {
        cout << "Destructor of class C" << std::endl;
    }
};

void processA(A objA) 
{
    cout << "Processing object of class A" << std::endl;
}

int main() 
{
    B ob1;
    C ob2;

    processA(ob1);
    processA(ob2);
}