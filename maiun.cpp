#include <iostream>

void Ex1(int n)
{
	for (int i = 0; i < n/2; i++)
	{
		std::cout << i << std::endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout <<  i + j << std::endl;
		}
	}
}

// nÀÇ Time-Complexity = n/2 + n^2 = O (n^2)
// nÀÇ Space-Complexity = 4 * n^0 = O (1)


void Ex2(int n)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < n; j++)
		{

		}
	}

	for (int i = 0; i < 10000; i++)
	{
		std::cout << i << std::endl;
	}
}

// time = 5n + 10000 = O (n)
// space = O (1)

void Ex4(int k)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < k; j++)
		{
			std::cout << i + j << std::endl;
		}
	}
}

void Ex3(int n)
{
	for (int i = 0; i < 5; i++)
	{
		Ex4(n);
	}

	for (int i = 0; i < 10000; i++)
	{
		std::cout << i << std::endl;
	}
}

// Ex3ÀÇ Ot, Os? (Ot = O time complexity, Os = O space complexity)
// Ot = 5n^2 + 10000 = (n^2)
// Os = (1)

int main()
{

}