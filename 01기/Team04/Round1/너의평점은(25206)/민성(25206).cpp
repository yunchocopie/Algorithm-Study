#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define endl '\n'
using namespace std;

float grade, credit, score = 0.0, num = 0.0;

void check_Credit(string input1) {
    if (input1 == "4.0") { credit = 4.0; num += 4; }
    else if (input1 == "3.0") { credit = 3.0; num += 3; }
    else if (input1 == "2.0") { credit = 2.0; num += 2; }
    else if (input1 == "1.0") { credit = 1.0; num += 1; }
}

void skip_P(string input1) {
    if (input1 == "4.0") { credit = 0; num -= 4; }
    else if (input1 == "3.0") { credit = 0; num -= 3; }
    else if (input1 == "2.0") { credit = 0; num -= 2; }
    else if (input1 == "1.0") { credit = 0; num -= 1; }
}

void check_Grade(string input1, string input2) {
    if (input2 == "A+") { grade = 4.5; }
    else if (input2 == "A0") { grade = 4.0; }
    else if (input2 == "B+") { grade = 3.5; }
    else if (input2 == "B0") { grade = 3.0; }
    else if (input2 == "C+") { grade = 2.5; }
    else if (input2 == "C0") { grade = 2.0; }
    else if (input2 == "D+") { grade = 1.5; }
    else if (input2 == "D0") { grade = 1.0; }
    else if (input2 == "F") { grade = 0.0; }
    else if (input2 == "P") { skip_P(input1); }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string trash, input1, input2;
    

    for (int i = 0; i < 20; i++) {

        cin >> trash >> input1 >> input2;

        check_Credit(input1);
        check_Grade(input1, input2);
        
        score += (credit * grade);
    }
    
    cout.setf(ios::showpoint);
    cout.precision(7);
    cout << score / num;

    return 0;
}