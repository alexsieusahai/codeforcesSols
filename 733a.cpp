#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c)    {
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')   {
        return true;
    }
    return false;
}
// if the number is not a vowel, you have to keep jumping

int main()  {
    string str;
    int minJump = 0, bigNum = 0;
    cin >> str;
    for (auto c : str)  {
        minJump += 1;
        if (minJump > bigNum)   {
            bigNum = minJump;
        }
        if (isVowel(c)) {
            minJump = 0;
        }
    }
    // now the grasshopper is at the end, so he must jump once more to get to the end
    minJump += 1;
    if (minJump > bigNum)   {
        bigNum = minJump;
    }
    cout << bigNum;
    return 0;
}
