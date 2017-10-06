#include <iostream>
#include <vector>

using namespace std;

int main()  {
    int numGood[3];
    for (int i = 0; i < 3; ++i) {
        numGood[i] = 0;
    }
    int n,t;
    vector<int> students[4];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        numGood[t]++;
        students[t].push_back(i+1);
    }
    int smallNum = 5001;
    for (int i = 1; i <= 3; ++i) {
        if (numGood[i] < smallNum)  {
            smallNum = numGood[i];
        }
    }
    cout << smallNum << '\n';
    for (int i = 0; i < smallNum; ++i)  {
        cout << students[1][i] << ' ' << students[2][i] << ' ' << students[3][i] << ' ' << '\n';
    }
    return 0;
}


    
