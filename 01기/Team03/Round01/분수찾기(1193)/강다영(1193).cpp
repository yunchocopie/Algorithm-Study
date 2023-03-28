#include<iostream>

using namespace std;

int main()
{
	int X = 0;
	int N = 1;
	
	cin >> X;
	
	while(X > N)
	{
		X -= N;
		N++;
	}
	
	if(N % 2 == 0)
	{
		cout << X << '/' << N - X + 1;
	}
	else
	{
		cout << N - X + 1<< '/' << X;
	}
}
