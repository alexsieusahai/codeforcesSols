#include <iostream>
#include <algorithm>

using namespace std;

int main()	{
	int n,L, j = 1;
	cin >> n;
	int c[n],vol[n];
	float value[n];
	for (int i = 0; i < n; ++i)	{
		cin >> c[i];
		vol[i] = j;
		j *= 2;
		value[i] = float(c[i])/float(vol[i]);
	}
	sort(vol, vol+n, 
	sort(value,value+n, std::greater<int>());
	
	return 0;
}


