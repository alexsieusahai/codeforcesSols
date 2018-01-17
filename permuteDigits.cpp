#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()  {
    unsigned long long int a,b;
    cin >> a >> b;
    unordered_map<unsigned long long int,unsigned long long int> occurance;
    unsigned long long int i = 10;
    while (a)  {
        occurance[a%i/(i/10)] += 1;
        a -= a%i;
        i *= 10;
    }
    i /= 100;
    unsigned long long int check = 0, bigNum = 0,usedNum = 0;
    while (i)  {
        for (auto it = occurance.begin(); it != occurance.end(); ++it)  {
            // try all combinations and see what's the highest
            if (check + (it->first) * i > bigNum && check + (it->first) * i < b)   {
                bigNum = check + ((it->first) * i);
                //cout << "current bignum is " << bigNum << endl;
                usedNum = it->first;
            }
        }
        if (bigNum != check) occurance[usedNum] -= 1;
        //cout << "bignum is " << bigNum << " and i is " << i << endl;
        //cout << "changed occurance with this key " << usedNum << endl;
        if (!occurance[usedNum])    {
            occurance.erase(usedNum);
        }
        i /= 10;
        check = bigNum;
    }
    cout << bigNum << endl;
    return 0;
}
