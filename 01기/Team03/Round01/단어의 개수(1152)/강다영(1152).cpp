#include<iostream>
#include<string>

using namespace std;

int main()
{
	string arr;
	int i = 0;
	int cnt = 0;
	
	getline(cin, arr);
	
	if(arr[0] != ' ')
	{
		cnt++;
	}
	
	if(arr[arr.size()] == ' ')
	{
		cnt--;
	}
	
	for(i = 1; i < arr.size(); i++)
	{
		if(arr[i-1] == ' ' && arr[i] != ' ')
		{
			cnt++;
		}
	}
	
	cout << cnt;
}
