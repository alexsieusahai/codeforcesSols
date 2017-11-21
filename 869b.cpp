#include <iostream>
#include <string>

using namespace std;

int main()	{
	int a,b;
	cin >> a >> b;
	// want to compute b! / a!
	if (a == 0)	{
		a = 1;
	}
	if (b == 0)	{
		b = 1;
	}
	int diff = b-a;
	if (diff < 0)	{
		cout << '0';
		return 0;
	}
	int bigNum = 1;
	while (diff > 0)	{
		bigNum *= b;
        cout << "multiplied bigNum by " << b << '\n';
		b--;
		diff--;
		string toConvert = to_string(bigNum);
		toConvert = toConvert.substr(toConvert.length()-1,toConvert.length());
        cout << toConvert << endl;
		bigNum = stoi(toConvert);
	}
	cout << bigNum;
	return 0;
}
	
