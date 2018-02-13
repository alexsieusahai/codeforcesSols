#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main()  {
    int n,t,last0 = -1;
    unordered_map<int,int> last0Ind,originalInd;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> t;
        originalInd[t] = i;
    }
    string s;
    cin >> s;
    int i = 1;
    for (char c : s)    {
        int j = c - '0';
        if (j == 0) {
            last0 = i;
        }
        last0Ind[i] = last0;
        i++;
    }
    for (int i = 1; i <= n; ++i)    {
        if (last0Ind[i-1] >= originalInd[i])   {
            //cout << i << endl;
            //cout << last0Ind[i] << ' ' << originalInd[i] << endl;
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}


