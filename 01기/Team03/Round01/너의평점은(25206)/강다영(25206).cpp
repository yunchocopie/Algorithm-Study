#include<iostream>
#include<string>

using namespace std;

int main()
{
	string sub;
	float score = 0.0;
	string lev;
	float ss = 0.0;
	float sum = 0;
	
	int i = 0;
	
	for(i = 0; i < 20; i++)
	{
		cin >> sub >> score >> lev;
		ss += score;
		
		if(lev == "A+")
		{
			sum = sum + (score * 4.5);
		}
		if(lev == "A0")
		{
			sum = sum + (score * 4.0);
		}
		if(lev == "B+")
		{
			sum = sum + (score * 3.5);
		}
		if(lev == "B0")
		{
			sum = sum + (score * 3.0);
		}
		if(lev == "C+")
		{
			sum = sum + (score * 2.5);
		}
		if(lev == "C0")
		{
			sum = sum + (score * 2.0);
		}
		if(lev == "D+")
		{
			sum = sum + (score * 1.5);
		}
		if(lev == "D0")
		{
			sum = sum + (score * 1.0);
		}
		if(lev == "F")
		{
			sum = sum + (score * 0.0);
		}
		if(lev == "P")
		{
			ss = ss - score;
		}
		
	}
	
	cout << (sum / ss);
}
