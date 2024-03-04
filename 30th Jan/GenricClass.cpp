#include <iostream>
#include <string>

using std::cout;
using std::string;

template <typename T1, typename T2, typename T3>
class Triplet 
{
private:
    T1 first_;
    T2 second_;
    T3 third_;
    
public:

    Triplet(T1 first, T2 second, T3 third) 
    {
        first_ = first;
        second_ = second;
        third_ = third;
    }

    void display() const 
    {
        cout << "Triplet: (" << first_ << ", " << second_ << ", " << third_ << ")\n";
    }
};

int main() 
{
    Triplet<int, char, string> triplet1(42, 'A', "Hello");
    triplet1.display();

    Triplet<double, char, string> triplet2(3.14, 'B', "World");
    triplet2.display();
}
