#include <iostream>

using std::cout;

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (j <= (6-i) || j >= (5+i))
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (j <= i || j >= 11-i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
}