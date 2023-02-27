#include <iostream>
#include <string>

int main()
{
	//그룹 단어 체크
	int n = 0;
	std::string str[100];
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> str[i];
	}
	int arr[100][26] = { 0 }; // 알파벳 저장
	int j = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		arr[i][str[i][0] - 97] = 1; // 첫 문자 저장
		for (j = 1; j < str[i].length(); j++)
		{
			if (str[i][j - 1] != str[i][j])
			{
				if (arr[i][str[i][j] - 97] == 0)
				{
					arr[i][str[i][j] - 97]++;
				}
				else
				{
					break;
				}
			}
		}
		if (j == str[i].length())
		{
			cnt++;
		}
	}
	std::cout << cnt;
}
	
