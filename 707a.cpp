#include <iostream>

using namespace std;

int main()  {
    int n,m;
    cin >> n >> m;
    bool isBW = true;
    char checkPix;
    for(int i=0;i<n;i++)    {
        for(int j=0; j<m;j++)   {
            cin >> checkPix;
            if (checkPix != 'B' & checkPix != 'W' & checkPix != 'G')  {
                isBW = false;
            }
        }
    }
    cout << '#';
    if (isBW == true)   {
        cout << "Black&White";
    } else {
        cout << "Color";
    }
            
    return 0;
}
