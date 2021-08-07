#include<bits/stdc++.h>
using namespace  std;

vector<int> findPreviousGreater(vector<int> v) {
	stack<int> s;
	vector<int> ans;
	for (int i = 0; i < v.size(); i++) {
		if(s.empty()) {
			ans.push_back(-1);
		} else {
			while (!s.empty()) {
				int comp = s.top();
				if(comp > v[i]) {
					ans.push_back(comp);
					break;
				}
				s.pop();
			}
			if(s.empty()) {
				ans.push_back(-1);	
			}
		}
		s.push(v[i]);
	}
//	reverse(ans.begin(), ans.end());
	return ans;
}

void printVector(vector<int> a) {
	for (int i = 0; i < a.size(); i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main() {
	vector<int> v;
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(5);
	v.push_back(1);
	v.push_back(3);
	v.push_back(7);
	vector<int> ans = findPreviousGreater(v);
	printVector(ans);
	return 0;
}
