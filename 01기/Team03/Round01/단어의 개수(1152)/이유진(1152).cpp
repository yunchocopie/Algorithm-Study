#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int count =1;
	char MyString[50]; 
	
	cin.getline (MyString, 50);   //문장입력받기.
	
	//처음에 공백만 주르륵 나온다. 
	if(MyString[0]==' '){
		count=0;
	}
	
	for (int i = 0; i < 20; i++) // 검사 시작
	{
		if (MyString[i] == ' ')
		{
			count++; // 개수  증가
		}
	}
	if (MyString[strlen(MyString)-1] == ' ')//공백으로 끝남 (허용) 
	{
		count--; // 개수  감소
	}
	cout << count; // 개수  출력
	

}





