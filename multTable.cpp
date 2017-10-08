#include <iostream>

using namespace std;

int main()	{
	// try slightly less naive approach
	int n,x;
	cin >> n >> x;
	int ans = 0;
	// grab all factors of x
	int i = 1;
	while (i <= x && i <= n)	{
		if (x%i == 0 && x/i <= n)	{ // the other factor shows up in the table
			ans++;
		}
		++i;
	}
	cout << ans;
	return 0;
}
