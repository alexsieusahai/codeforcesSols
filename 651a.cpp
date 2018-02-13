#include <iostream>
#include <cassert>

using namespace std;

int memo[1000][1000];

int maxSol(int i, int j, int minutes)   {
    if (i <= 0 || j <= 0) {
        return minutes;
    }
    if (memo[i][j] != 0)    {
        return memo[i][j];
    }
    memo[i][j] = max(maxSol(i+1,j-2,minutes+1),maxSol(i-2,j+1,minutes+1));
    return memo[i][j];
}

int main()  {
    for (int i = 0; i < 1000; ++i)  {
        for (int j = 0; j < 1000; ++j)  {
            memo[i][j] = 0;
        }
    }
    int n,m;
    cin >> n >> m;
    if (n == 1 && m == 1)   {
        cout << "0";
    } else  {
        cout << maxSol(n,m,0);
    }
    return 0;
}
