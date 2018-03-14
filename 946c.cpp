#include <string>
#include <iostream>

using namespace std;

int main()  {
    string s;
    cin >> s;
    char counter = 'a';
    bool found = false;
    for (int i = 0; i < s.length(); ++i)    {
	char c = s[i];
	if (c <= counter)   {
	    s[i] = counter;
	    counter += 1;
	    if (counter > 'z')	{
		cout << s;
		found = true;
		break;
	    }
    }
    return 0;
}
