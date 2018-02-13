#include <iostream>

using namespace std;

struct vertex {
	int parent;
	int numLeaves = 0;
	bool childrenLeaves[1001] = {0};
	bool hasChildren = false;
};

int main()	{
	int n;
	cin >> n;
	int c[n] = {0},parents[n] = {0};
	for (int i = 1; i < n; ++i)	{
		cin >> parents[i];
		parents[i]--;
		c[parents[i]]++;
	}
	int parentLeaves[n] = {0};
	for (int i = 0; i < n; ++i) if (!c[i]) parentLeaves[parents[i]]++;
	for (int i = 0; i < n; ++i)	{
		//cout << i << endl;
		if (c[i] > 0)	{
			//cout << c[i] << endl;
			if (parentLeaves[i] < 3) 	{
				//cout << parentLeaves[i] << endl;
				cout << "No";
				return 0;
			} 
		}
		//cout << endl;
	}
	cout << "Yes";
	return 0;
}



