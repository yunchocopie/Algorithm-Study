#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    /*ifstream ifs;
    ifs.open("input.txt");
    if (ifs.fail())
    {
        cerr << "Error!" << endl;
        return -1;
    }

    ofstream ofs;
    ofs.open("output.txt");
    if (ofs.fail())
    {
        cerr << "Error!" << endl;
        return -1;
    }*/

    int N, M;

    //ifs >> N >> M;
    cin >> N >> M;

    int* arr = new int[N];

    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    int from, to;

    for (int i = 0; i < M; i++) {
        //ifs >> from >> to;
        cin >> from >> to;

        reverse(arr + (from - 1), arr + to);

        /*for (int i = 0; i < N; i++) {
            cout << arr[i];
        }
        cout << endl;*/
    }

    for (int i = 0; i < N; i++) {
        //ofs << arr[i];
        cout << arr[i];
        if (i == N - 1)
            break;
        //ofs << ' ';
        cout << ' ';
    }

    //ifs.close();
    //ofs.close();

    return 0;
}
