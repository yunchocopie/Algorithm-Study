#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int A, B, V, cb = 1, day = 1;

    cin >> A >> B >> V;

    if ((V - A) % (A - B) == 0) { cb += (V - A) / (A - B); }

    else { cb += (V - A) / (A - B) + 1; }

    cout << cb;

    return 0;
}

//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//
//    int A, B, V, cb = 0, day = 1;
//
//    cin >> A >> B >> V;
//
//    while (true) {
//        if (cb < V) {
//            cb += A;
//            if (cb < V) { cb -= B; }
//            else { break; }
//            day++;
//        }
//
//        else { break; }
//    }
//
//    cout << day;
//
//    return 0;
//}