#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()	{
	int n;
	cin >> n;
	int z=0,o=0;
	char temp;
	for (int i = 0; i < n; ++i)	{
		cin >> temp;
		if (temp == '0') z++;
		else o++;
	}
	// it's built now
	// there is closed form solution, since for all zeroes
	// if it's beside a zero, then for all zeroes...
	// if it's beside a one, then cull both the zero and one
	// and same thing for ones
	// so, the smallest number of ones and zeroes are the ones that get removed
	// hence
	cout << abs(z+o-2*min(z,o));
	return 0;
}
