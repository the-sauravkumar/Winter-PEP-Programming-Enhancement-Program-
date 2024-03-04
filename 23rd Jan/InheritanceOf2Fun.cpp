#include <iostream>
using std::cout;

class A {
public:
    void publicFunction() 
    {
        cout << "Calling public function in class A" << "\n";
    }

protected:
    int protectedVariable;

private:
    int privateVariable;

public:
    void setPrivateVariable(int value) 
    {
        privateVariable = value;
    }

    void modifyPrivateVariable(int value) 
    {
        setPrivateVariable(value);
        cout << "Private variable in A modified to: " << privateVariable << "\n";
    }

    int getPrivateVariable() const
    {
        return privateVariable;
    }
};

class B : public A 
{
public:
    // 1.Function of A accessed in B
    void accessPublicFunction() 
    {
        publicFunction();
    }

   // 2. modifying inherited protected variable in B
    void modifyProtectedVariable(int value) 
    {
        protectedVariable = value;
        cout << "Protected variable in A modified by B to: " << protectedVariable << "\n";
    }

   //3. Accessing inherited private variable of A and modifying
    void modifyPrivateVariableInA(int value) 
    {
        // Accessing the modified function in A to set privateVariable
        setPrivateVariable(value);
        cout << "Private variable in A modified by B to: " << getPrivateVariable() << "\n";
    }
};

int main() 
{
    B ob;

    ob.accessPublicFunction();
    ob.modifyProtectedVariable(42);
    ob.modifyPrivateVariableInA(99);
}
