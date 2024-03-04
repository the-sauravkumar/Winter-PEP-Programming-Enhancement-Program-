#include <iostream>

using std::cout;
using std::cin;

// increment int, increment char, increment float
void inc(int &a)
{
     ++a;
}

void inc(char &c)
{
    int b = c;
    ++b;
    c = b;
}

void inc(float &fl)
{
     ++fl;
}

int main() 
{
   
    int a = 5;
    float cl = 4.5;
    char ch = 'a';
   
    inc(a);
    inc(cl);
    inc(ch);
    cout << a << " " << cl << " " << ch;
}