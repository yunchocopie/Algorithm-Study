#include<iostream>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	int V = 0;
	int day = 0;
	int left = 0;
	
	cin >> A >> B >> V;
	
	day += (V - A) / (A - B);
	
	left = V - (day * (A - B)); 
	
	if(left <= A)
	{
		day++;
	}
	if(left > A)
	{
		day += 2;
	}
	
	cout << day;
}
