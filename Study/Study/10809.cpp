#include <iostream>
#include <string>
int main() {
	std::string in;
	std::cin >> in;
	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < alphabet.length(); i++)
	{
		std::cout << (int)in.find(alphabet[i]) << " ";
	}
}