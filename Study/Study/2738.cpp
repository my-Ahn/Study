#include <iostream>
using namespace std;

int main() {
	int n, m = 0;
	cin >> n >> m;
	int arrA[100][100] = { 0 };
	int arrB[100][100] = { 0 };
	// n : За, m : ї­ [n][m]
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arrA[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arrB[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arrA[i][j] + arrB[i][j] << " ";
		}
		cout << "\n";
	}
}
