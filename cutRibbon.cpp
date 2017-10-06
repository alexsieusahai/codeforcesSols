#include <iostream>
#include <algorithm>

using namespace std;

int memoTable[10000][3];


int dp(int numCuts, int length, int cutChoices[], int lastCut)  {
    if (length < 0)  {
        return -1;
    }
    if (length == 0)    {
        return numCuts;
    }
    int a,b,c;
    if (memoTable[length][lastCut] == 0) {
        a = dp(numCuts+1,length-cutChoices[0],cutChoices,cutChoices[0]);
        b = dp(numCuts+1,length-cutChoices[1],cutChoices,cutChoices[1]);
        c = dp(numCuts+1,length-cutChoices[2],cutChoices,cutChoices[2]);
        int result = max(max(a,b),c);
        memoTable[length][lastCut] = result;
        return result;
    } else  {
        return memoTable[length][lastCut];
    }

    // get naive solution solution working first
}

int main()  {
    int length;
    cin >> length;
    int cutChoices[3];
    for (int i = 0; i < 3; ++i) {
        cin >> cutChoices[i];
    }
    sort(cutChoices,cutChoices+3);
    cout << dp(0,length,cutChoices,0);
    return 0;
}
