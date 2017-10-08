#include <iostream>

using namespace std;

int dp(int d1,int d2, int d3)	{
	int distance = min(d1,d2); // first go to shortest distance shop
	// now you have two choice
	// 1. either you go back to your home, then go to other shop
	// 2. you go to other shop
	// either way you end up at other shop
	distance += min(min(d1,d2)+max(d1,d2),d3);
	// now you either go:
	// 1. current shop to home
	// 2. current shop to other shop to home
	// NOTE: the other shop is at the max(d1,d2) location
	distance += min(max(d1,d2),d3+min(d1,d2));
	return distance;
}

int main()	{
	int d1,d2,d3;
	cin >> d1 >> d2 >> d3;
	cout << dp(d1,d2,d3);
	return 0;
}
