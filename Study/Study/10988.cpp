#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::cin >> str;
	char frontStr[100] = { 0 };
	bool idx = false;
	// Â¦¼ö
	if (str.length() % 2 == 0)
	{
		for (int i = 0; i < str.length() / 2; i++)
		{
			frontStr[(str.length() / 2) - i-1] = str[i];			
		}
		for (int i = 0; i < str.length() / 2; i++)
		{
			if (frontStr[i] == str[i + (str.length() / 2)])
			{
				idx = true; // ÆÓ¸°µå·Ò
			}
			else
			{
				idx = false; 
			}
		}
	}
	else
	{
		for (int i = 0; i < (str.length() / 2) ; i++)
		{
			frontStr[(str.length() / 2) - i - 1] = str[i];
		}
		for (int i = 0; i < str.length() / 2; i++)
		{
			if (frontStr[i] == str[i + 1 + (str.length() / 2)])
			{
				idx = true;
			}
			else
			{
				idx = false;
			}
		}
	}
	if (idx == true)
	{
		std::cout << 1;
	}
	else
	{
		std::cout << 0;
	}
}