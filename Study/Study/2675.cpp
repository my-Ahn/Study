#include <string>
#include <iostream>
int main() {
	int n;
	int k;
	int temp = 0;
	int pos = 0;
	std::string str;
	std::cin >> str;

	for (int i = 0; i < n; i++)
	{
		std::cin >> k;
		std::cin >> str;
		for (int a = 0; a < str.length(); a++)
		{
			for (int z = 0; z < k; z++)
			{
				std::cout << str.at(k);
			}
		}
	}
}
