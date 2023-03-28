#include <iostream>
using namespace std;

int main() {

	int input;
	cin >> input; 

	int k = 1;
	while (1) //어느 라인에 있는지 찾기  
	{		
		if ((k-1)*(k)/2 < input && input <= (k)*(k+1)/2)
		{
			break;
		}
		k++;
	}

	if (k % 2 != 0) // k가 홀수일 때
	{
		int a = k*(k + 1) / 2;
		cout << a-input + 1<<'/'<<k -(a -input);
	}
	else //k가 짝수 일 때
	{
		int a = k * (k + 1) / 2;
		cout <<k-(a-input) <<'/'<<a-input + 1;

	}
	return 0;
}

 

 


