#include <iostream>
#include <map>

using namespace std;

int main()  {
    int n,m;
    cin >> n;
    int total=0,temp;
    map<int, int> pileMap;
    for (int i = 1; i <= n; ++i) {  
        cin >> temp;
        for (int j = total+1; j <= total+temp; ++j) {
            pileMap[j] = i;
        }
        total += temp;
    } 
    cin >> m;
    int checkNum;
    for(int i = 0; i < m; ++i)  {
        cin >> checkNum;
        cout << pileMap[checkNum] << '\n';
    }
    return 0;
}


