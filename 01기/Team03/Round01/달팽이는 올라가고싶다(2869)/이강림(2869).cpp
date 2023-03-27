#include <iostream>
#include <cmath> //ceil() 함수를 쓰기위한 라이브러리
using namespace std;

int main() {
	
    int A, B, V;
    cin >> A >> B >> V;
    
    // 정상에 도착했을 땐, 미끄러지지 않으니 반올림 ceil()함수로 계산한다. 
    int day = ceil((double)(V - A) / (A - B)) + 1; //목표 거리는 V가 아닌 V - A이다.  
    cout << day << endl;
    return 0;
}
