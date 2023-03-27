#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define endl '\n'
using namespace std;

int paint[100][100] = { 0 };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int paper, garo, sero, area = 0;

    cin >> paper;

    for (int i = 0; i < paper; i++) {
        cin >> garo >> sero;
        for (int j = garo; j < garo + 10; j++) {
            for (int k = sero; k < sero + 10; k++) {
                if (paint[j][k] == 0) { 
                    paint[j][k] = 1;
                    area++;
                }
            }
        }

    }

    cout << area;

    return 0;
}

//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//
//    int paper, garo, sero, area = 0;
//
//    cin >> paper;
//
//    for (int i = 0; i < paper; i++) {
//        cin >> garo >> sero;
//        v.push_back(make_pair(garo, sero));
//    }
//
//    sort(v.begin(), v.end());
//
//    for (int i = 0; i < paper; i++) {
//        for (int j = i + 1; j < paper; j++) {
//            if (v[j].first - v[i].first < 10) {
//                garo = (v[i].first + 10) - v[j].first;
//                sero = (v[j].second + 10) - v[i].second;
//                area += garo * sero;
//            }
//        }
//    }
//
//    cout << paper * 100 - area;
//
//    return 0;
//}
