#include <iostream>
#include <string>
int main() {
	//첫번째 공백있으면 공백 = 단어수
	// 마지막 공백있으면 공백 = 단어수
	// 첫번째 공백, 마지막 공백 둘다 있으면
	// THE ABC 
	// 공백 -1
	int pos = 0;
	int idx = 0;
	std::string in;	
	std::getline(std::cin, in);
	for (int i = 0; i < in.length(); i++)
	{
		if (in.find(" ", pos) != std::string::npos)
		{
			pos = in.find(" ", pos);
			idx++;
		}
	}
	if (in.at(0) == 32)
	{
		idx--;
	}
	if (in.at(in.length() - 1) == 32)
	{
		idx--;
	}
	std::cout << idx;
}