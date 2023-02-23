#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::cin >> str;
	bool idx = false;
	int cnt = 0;
	for (int i = 0; i < str.length() / 2; i++)
	{
		//str.length
		if (str[i] == str[str.length() - i - 1])
		{
			cnt++;
		}
	}
	/// <summary>
	/// 2. str.length()/2
	/// 5 -> str.length()/2 = 2 
	/// </summary>
	if (cnt == str.length() / 2)
	{
		std::cout << "1";
	}
	else
	{
		std::cout << "0";
	}
}
		
