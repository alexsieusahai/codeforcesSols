#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;
typedef long long ll;

int main()	{
	int n;
	cin >> n;
	ll flowers[n];
	map<ll,ll> numFlowers;
	for (int i = 0; i < n; ++i)	{
		cin >> flowers[i];
		numFlowers[flowers[i]] += 1;
	}
	sort(flowers, flowers+n);
	ll ans = 0;
	if (flowers[0] == flowers[n-1])	{ //accounting for edge
		ans = (numFlowers[flowers[0]])*(numFlowers[flowers[0]]-1)/2;
	} else	{
		ans = numFlowers[flowers[0]]*numFlowers[flowers[n-1]];
	}
	cout << flowers[n-1]-flowers[0] << ' ' << ans;
	return 0;
}
