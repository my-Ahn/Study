#include <iostream>
#include <string>
int main() {
	//ù��° ���������� ���� = �ܾ��
	// ������ ���������� ���� = �ܾ��
	// ù��° ����, ������ ���� �Ѵ� ������
	// THE ABC 
	// ���� -1
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