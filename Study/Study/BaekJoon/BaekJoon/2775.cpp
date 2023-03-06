#include <iostream>

int getAdd(int a, int b)
{
	if (a == 0)
	{
		return b;
	}
	if (b == 0)
	{
		return 1;
	}
	return(getAdd(a - 1, b) + getAdd(a, b - 1));
}

int main()
{
	int testCase;
	std::cin >> testCase;
	for (int i = 0; i < testCase; i++)
	{
		int a[100];
		int b[100];
		std::cin >> a[i];
		std::cin >> b[i];
		std::cout << getAdd(a[i], b[i]);
	}
}