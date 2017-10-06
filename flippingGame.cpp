#include <iostream>

using namespace std;

int genSol(int toMax[],int i,int j,int n)   {
    int mySum = 0;
    for (int k = 0; k < n; ++k) {
        if (k >= i && k <= j)    {
            mySum += 1-toMax[k];
        } else  {
            mySum += toMax[k];
        }
    }
    return mySum;
}

int main()  {
    int n;
    cin >> n;
    int toMax[n];
    for (int i = 0; i < n; ++i) {
        cin >> toMax[i];
    }
    int result;
    int bigNum = genSol(toMax,0,n,n); // base case
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            result = genSol(toMax,i,j,n);
            if (result > bigNum)    {
                bigNum = result;
            }
    }
    }
    cout << bigNum;
    return 0;
}   
            
