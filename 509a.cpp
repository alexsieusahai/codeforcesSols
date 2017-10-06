#include <iostream>

using namespace std;
int A[11][11];


int dpSol(int A[11][11],int i,int j)  {
    if (A[i][j] != 0)   {
        return A[i][j];
    }
    A[i][j] = dpSol(A,i-1,j)+dpSol(A,i,j-1);
    return A[i][j];
}


int main()  {
    int n;
    cin >> n;
    for (int i = 0; i <= n; ++i) {
        A[1][i] = 1;
        A[i][1] = 1;
    }
    cout << dpSol(A,n,n);
    return 0;
}
