#include <iostream>
using namespace std;

int main() {
    int N; 
    cin >> N;
    int paper[100][100] = {0};
    int area = 0;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = x; j < x + 10; j++) {
            for (int k = y; k < y + 10; k++) {
                if (paper[j][k] == 0) {
                    paper[j][k] = 1;
                    area++;
                }
            }
        }
    }
    cout << area << endl;
    return 0;
}
