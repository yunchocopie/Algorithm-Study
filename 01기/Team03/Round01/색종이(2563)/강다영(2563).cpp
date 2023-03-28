#include<iostream>

using namespace std;

int main()
{
	int arr[100][100] = {0, };
	int pn = 0;
	int l = 0;
	int d = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int sum = 0;
	
	cin >> pn;
	
	for(i = 0; i < pn; i++)
	{
		cin >> l >> d;
		for(j = d; j < d + 10; j++)
		{
			for(k = l; k < l + 10; k++)
			{
				arr[j][k] = 1;
			}
		}
	}
	
	for(i = 0; i < 100; i++)
	{
		for(j = 0; j < 100; j++)
		{
			if(arr[i][j] == 1)
			{
				sum++;
			}
		}
	}
	
	cout << sum;
}
