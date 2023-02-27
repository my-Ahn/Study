#include <iostream>
using namespace std;

int main(){
	int arr[9][9] = { 0 };
	int max = 0;
	int row, column = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] >= max)
			{
				max = arr[i][j];
				row = i + 1;
				column = j + 1;
			}
		}
	}
	cout << max << "\n" << row << " " << column << "\n";
}

