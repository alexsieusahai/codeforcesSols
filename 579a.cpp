#include <iostream>
#include <cmath>

//requires c11

using namespace std;

int main()	{
	int x;
	cin >> x;
	int b = 0;
	while (x > 0)	{
		b += int(x&1);
		x = x >> 1;
	}
	cout << b;
	return 0;
}
