#include <iostream>
#include <cmath>

using namespace std;
// weird rounding problems, trying python instead
bool isPrime(double temp)	{
	// try trial division, so account for when temp is 1 and 2
	// check first to see that it's an integer
	int check; 
	if (abs(temp - floor(temp)) < 0.0001 || abs(temp == ceil(temp)) < 0.0001)	{
		if (abs(temp - floor(temp)) < 0.0001)	{
			check = floor(temp);
		}
		if (abs(temp-ceil(temp)) < 0.0001)	{
			check = ceil(temp);
		}
	} else	{
		return false;
	}
	if (check == 2)	{
		return true;
	}
	if (check == 1)	{
		return false;
	}
	for (int i = 2; i < ceil(sqrt(check)); ++i)	{
		if (check % i == 0)	{
			return false;
		}
	}
	return true;
}

int main()	{
	// if the square root of the number is prime, then it's a tprime
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)	{
		int temp;
		cin >> temp;
		if (isPrime(sqrt(temp)))	{
			cout << "YES\n";
		} else	{
			cout << "NO\n";
		}
	}
	return 0;
}


