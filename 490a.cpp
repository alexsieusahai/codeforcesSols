#include <iostream>
#include <vector>

using namespace std;

int main()	{
	int n;
	cin >> n;
	vector<int> prog,math,pe;
	int progSize=0,mathSize=0,peSize=0;
	int temp;
	for (int i = 0; i < n; ++i)	{
		cin >> temp;
		if (temp == 1)	{
			prog.push_back(i+1);
			progSize++;
		}
		if (temp == 2)	{
			math.push_back(i+1);
			mathSize++;
		}
		if (temp == 3)	{
			pe.push_back(i+1);
			peSize++;
		}
	}
	int j = 0;
	cout << min(min(progSize,mathSize),peSize) << '\n';
	while (progSize > 0 && mathSize >> 0 && peSize > 0)	{
		cout << prog[j] << ' ' << math[j] << ' ' << pe[j] << '\n';
		j++;
		progSize--;
		mathSize--;
		peSize--;
	}
	return 0;
}
