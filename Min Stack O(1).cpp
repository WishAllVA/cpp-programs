#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		stack<int>s;
		int minVal = 2000;
		Solution() {
			
		}
		void push(int value) {
			if(s.empty()) {
				s.push(value);
				minVal = value;
				return;
			}
			if(value >= minVal) {
				s.push(value);
				return;
			}
			int temp = 2*value - minVal;
			s.push(temp);
			minVal = value;
			return;
		}
		
		int pop() {
			if(s.top() > minVal) {
				int a= s.top();
				s.pop();
				return a;
			}
			int ret = minVal;
			int t = s.top();
			s.pop();
			int temp = 2*minVal - t;
			minVal = temp;
			return ret;
		}
		
		int getMin() {
			return minVal;
		}
};


int main() {
	Solution* o = new Solution();
	o->push(5);
	o->push(7);
	cout<<o->getMin()<<endl;
	o->push(3);
	cout<<o->getMin()<<endl;
	o->push(4);
	cout<<o->getMin()<<endl;
	o->push(1);
	cout<<o->getMin()<<endl;
	o->pop();
	cout<<o->getMin()<<endl;
	return 0;
}


