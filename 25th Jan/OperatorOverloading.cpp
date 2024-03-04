#include <iostream>
using namespace std;


// operator overloading
class Pair{
public:
int a, b;

Pair subs(Pair y)
{
Pair ans;
ans.a = this->a-y.a;
ans.b = this->b-y.b;
return ans;
}
Pair operator-(Pair y)
{
Pair ans;
ans.a = this->a-y.a;
ans.b = this->b-y.b;
return ans;
}
};



int main()
{
// int e = 4,f = 10;
Pair f,s;
f.a = 10;
f.b = 20;
s.a = 30;
s.b=20;
// cout<<(e-f);
// cout<<s-f;
Pair sum = s-f; // s.subs(f);

cout<<sum.a<<" "<<sum.b;
}