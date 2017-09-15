
#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> v;
	int i;
	int j;
	for(i = 10000; i < 100000; ++i){
		v[j] = i;
		j++;
		// note on ++i vs i++
		// i++ occurs before the loop, whereas ++i occurs after the loop
	}
	return 0;
}
	
