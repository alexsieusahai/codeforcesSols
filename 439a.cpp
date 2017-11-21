
#include <iostream>

using namespace std;

int main()  {
    int n,d;
    cin >> n >> d;
    int sumSongs = 0,temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        sumSongs += temp;
    }
    d -= sumSongs+(n-1)*10;
    if (d < 0)  {
        cout << "-1";
        return 0;
    }
    cout << d/5+2*(n-1);
    return 0;
}
    
        
