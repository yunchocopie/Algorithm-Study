#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define endl '\n'
using namespace std;

vector <pair<int, int>> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int paper, garo, sero;

    for (int i = 0; i < paper; i++) {
        cin >> garo >> sero;
        v.push_back(make_pair(garo, sero));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < paper; i++) {
        for (int j = 0; j < paper; j++) {
            if
        }
    }

    return 0;
}