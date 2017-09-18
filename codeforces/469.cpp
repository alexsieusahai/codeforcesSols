#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()  {
    int n;
    cin >> n;
    vector<int> passLevel;
    string input;
    int i;
    int j;
    for (int length = 1; i < length; i++)    {
        cout << i << '\n';
        cin >> passLevel[i];
        if (length == 1)    {
            length = passLevel[i];
        }
    }
    for (int i; i < passLevel.size(); i++)  {
        cout << passLevel[i];
    }
    //for (cin >> length; j < length; j++)    {
    //    cin >> passLevel[i];
    //    i++;
    //}


    

    
    return 0;
}
