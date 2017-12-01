#include <string>
#include <iostream>

using namespace std;

int main()  {
    string input;
    cin >> input;
    bool str0 = false,str1 = false;
    for (int i = 0; i < input.length()-1; ++i)    {
        if (!str0)  {
            if (input[i] == 'A' && input[i+1] == 'B')   {
                str0 = true;
                i++;
                continue;
            }
        }
        if (!str1)  {
            if (input[i] == 'B' && input[i+1] == 'A')   {
                str1 = true;
                i++;
                continue;
            }
        }
    }
    if (str0 && str1)   {
        cout << "YES\n";
    } else  {
        cout << "NO\n";
    }
    return 0;
}
        
