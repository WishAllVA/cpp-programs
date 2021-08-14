#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
	LL H,W,N;
	LL A,B;
	cin>>H>>W>>N;
	vector<vector<LL> >v(H, vector<LL>(W,-1));
	for(LL i=0;i<N;i++) {
		cin>>A>>B;
		v[A-1][B-1] = i+1;
	}
	for(LL i=0;i<H;i++) {
		for(LL j=0;j<W;j++) {
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<"After:\n";
	for(LL i=0;i<v.size();i++) {
		int flag = 0;
		for(LL j=0;j<W;j++) {
			if(v[i][j] != -1) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			v.erase(v.begin() + i);
			v.resize(v.size()-1, vector<LL>(W));
		}
	}
	LL i = 0;
	while(1) {
		int flag = 0;
		for(LL j=0;j<v.size();j++) {
			if(v[i++][j] != -1) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			v.erase(v.begin() + j);
			v.resize(v.size()-1, vector<LL>(W));
		}
	}

	for(int i=0;i<v.size();i++) {
		for(int j=0;j<W;j++) {
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
