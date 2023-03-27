#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;
    int n = 1;
    // 대각선의 번호를 찾는다. 
    while (n * (n + 1) / 2 < X) {
        n++;
    }
    int a = X - n * (n - 1) / 2; // X번째 분수의 분자 
    int b = n + 1 - a; // X번째 분수의 분모 
    if (n % 2 == 0) {
        cout << a << "/" << b << endl; //짝수 일 때 
    } else {
        cout << b << "/" << a << endl; //홀수 일 때 
    }
    return 0;
}
