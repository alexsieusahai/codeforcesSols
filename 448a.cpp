#include <iostream>
#include <cmath>

using namespace std;

int main()	{
	int a = 0,b = 0;
	int temp;
	for (int j = 0; j < 3; ++j)	{
		cin >> temp;
		a += temp;
	}

	for (int j = 0; j < 3; ++j)	{
		cin >> temp;
		b += temp;
	}
	a = ceil(a/5.0);
	b = ceil(b/10.0);
	int n;
	cin >> n;
	if (n >= a+b)	{
		cout << "YES";
	} else	{
		cout << "NO";
	}
	return 0;
}

