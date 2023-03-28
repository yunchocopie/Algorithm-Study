#include<iostream>

using namespace std;

int main()
{
	int N = 0;
	int M = 0;
	int i = 0;
	int j = 0;
	int bn = 0;
	int cn = 0;
	int rn = 0;	
	
	cin >> N >> M;

	int arr[N] = {0, };
	
	for(i = 0; i < N; i++)
	{
		arr[i] = i + 1;
	}
	
	int temp[N] = {0, };
	memcpy(&temp, &arr, sizeof(arr));
	
	for(i = 0; i < M; i++)
	{
		cin >> bn >> cn;
		rn = cn - bn + 1;
		for(j = 0; j < rn; j++)
		{
			arr[bn-1] = temp[cn-1];
			bn++;
			cn--;
		}
		memcpy(&temp, &arr, sizeof(arr));
	}
	
	for(i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
} 
