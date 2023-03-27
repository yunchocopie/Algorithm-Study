#include <iostream>
#include <vector> // vector을 사용하기위한 라이브러리 선언 
#include <algorithm> // reverse() 함수를 사용하기위한 라이브러리 선언 

using namespace std;

int main(void) {

	
	int N, M; // 첫번째 줄의 바구니 갯수와 역순횟수  
	
    cin >> N >> M;
    
    vector<int> v(N+1); // 기본값 0으로 초기화된 5개의 원소를 가지는 vector v를 생성 
    
     for (int i = 1; i <= N; i++) {
        v[i] = i; // 바구니 갯수만큼 반복문을 돌려 각 요소에 값 대입 
    }

    for (int i = 0; i < M; i++) {
        int min, max; 
		cin >> min >> max;
		reverse(v.begin() + min,v.begin() + max + 1); 
    }

    for (int i = 1; i < v.size(); i++) {
        
        cout << v[i] << ' ';
    }
	
}
