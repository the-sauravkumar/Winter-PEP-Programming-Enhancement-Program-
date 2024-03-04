#include <iostream>

using
  std::cout;

void
symmetry (int n)
{
  int
	tw = 2 * n;

  for (int i = 1; i <= n; i++)
	{
	  for (int j = 1; j <= tw; j++)
		{
		  if (j <= i || j >= (tw + 1) - i)
			{
			  cout << "* ";
			}
		  else
			{
			  cout << "  ";
			}
		}
	  cout << "\n";
	}

  for (int i = 1; i <= n - 1; i++)
	{
	  for (int j = 1; j <= tw; j++)
		{
		  if (j <= (n - i) || j >= (n + 1) + i)
			{
			  cout << "* ";
			}
		  else
			{
			  cout << "  ";
			}
		}
	  cout << "\n";
	}
}

int
main ()
{
  int
	n = 7;
  symmetry (n);
}
