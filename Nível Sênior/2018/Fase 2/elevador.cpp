#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

main() {
	int n, m;
	vector<int> v;
	
	v.push_back(0);
	
	cin >> n;
	
	while(n--) {
		cin >> m;
		v.push_back(m);
	}
	
	sort(v.begin(), v.end());
	
	for(int k=0; k<v.size()-1; k++) {
		if(v[k+1]-v[k] > 8) {
			cout << "N";
			return 0;
		}
	}
	
	cout << "S";
}
