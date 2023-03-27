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

    string input;
    int count = 1;

    getline(cin, input);
    
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') { count++; }
    }

    if (input[0] == ' ') { count--; }
    if (input[input.length() - 1] == ' ') { count--; }

    cout << count;

    return 0;
}