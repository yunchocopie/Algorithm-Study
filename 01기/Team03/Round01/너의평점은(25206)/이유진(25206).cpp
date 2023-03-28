#include <iostream>
 
using namespace std;
 
int main() 
{

    double divide = 0.0, total = 0.0;
    for (int i = 0; i < 20; ++i)
    {
        string name;
        cin >> name;
 
        double score;
        cin >> score;
 
        string grade;
        cin >> grade;
 
        if (grade == "P")
            continue;
        else if (grade == "A+")
        {
            total += score * 4.5;
            divide += score;
        }
        else if (grade == "A0")
        {
            total += score * 4.0;
            divide += score;
        }
        else if (grade == "B+")
        {
            total += score * 3.5;
            divide += score;
        }
        else if (grade == "B0")
        {
            total += score * 3.0;
            divide += score;
        }
        else if (grade == "C+")
        {
            total += score * 2.5;
            divide += score;
        }
        else if (grade == "C0")
        {
            total += score * 2.0;
            divide += score;
        }
        else if (grade == "D+")
        {
            total += score * 1.5;
            divide += score;
        }
        else if (grade == "D0")
        {
            total += score * 1.0;
            divide += score;
        }
        else if (grade == "F")
        {
            divide += score;
        }
 
    }
 
    double ans = total / divide;
    cout << ans;
 
    return 0;
}
