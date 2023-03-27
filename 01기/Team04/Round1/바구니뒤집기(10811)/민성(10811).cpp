#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

vector <int> v;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M, st, ed;

    cin >> N >> M;

    for (int i = 1; i < N + 1; i++) { v.push_back(i); }

    for (int i = 0; i < M; i++) {
        cin >> st >> ed;

        int bn = st - 1;
        int edd = bn + ed - st + 1;
        
        
        reverse(v.begin() + bn, v.begin() + edd);
        
    }
    
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *i << " ";
    }

    return 0;
}