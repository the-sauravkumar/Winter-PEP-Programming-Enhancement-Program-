#include <iostream>

using std::cout;
using std::cin;

int fibb(int n)
{
    if (n <= 1)
        return 1;
    int res = fibb(n-1) + fibb(n-2);
    return res;
}



int main()
{
    int n;
    cin >> n;
  cout << "Fibb("<< n << "): " << fibb(n); // 0 1 1 2
  cout << "\nThe Series: ";
  
  for (int i = 0; i < n; i++)
  {
      cout << fibb(i) << " ";
  }
//   printFibb(4);
}