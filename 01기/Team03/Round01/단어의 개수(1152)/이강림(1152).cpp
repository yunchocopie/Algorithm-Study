#include <iostream>
#include <string> //getline() 사용하기위한 라이브러리 선언 
using namespace std;

int main() {
	
	string str;
	int cnt = 1; 
	
	getline(cin, str); // getline()를 통해 입력값을 string에 넣는다.
	 
	if (str[0] == ' ') // 문자열의 시작이나 끝에 공백이 있을때, 개수에서 제외한다. 
	{
		cnt--;	
	} 
    
    if(str[str.length() - 1] == ' ') // 시작,끝 둘다 공백일 때 둘다 빼줘야하니 따로 체크한다.
    {
        cnt--;	
    }
	
	
	for (int i = 0; i < str.length(); i++) 
	{
		if (str[i] == ' ') // string의 길이만큼 for문을 돌려 ' '가 나올때마다 개수를 더한다. 
			cnt++;
	}

	
	cout << cnt;
}
