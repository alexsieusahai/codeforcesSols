#include <iostream>

using namespace std;

int main()  {
    int n; 
    cin >> n;
    int num25=0,num50=0,num100=0;
    bool can = true;
    for (int i = 0; i < n; ++i) {
        int money;
        cin >> money;
        if (money == 25)    {
            num25++;
        }
        else if (money == 50)   {
            if (num25 >= 1)  {
                num25--;
                num50++;
            } else  {
                can = false;
                break;
            }
        } else if (money == 100)    {
            if (num50 >= 1 && num25 >= 1)   {
                num25--;
                num50--;
            } else if (num25 >= 3)  {
                num25 -= 3;
            } else  {
                can = false;
                break;
            }
            num100++;
        }
    }
    if (can == true)    {
        cout << "YES";
    } else  {
        cout << "NO";
    }
    return 0;
}

