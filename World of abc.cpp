#include<iostream>
using namespace std;

void abc(string s)
{
	if(s.length()>4)
	{
		return;
	}
	cout<<s<<ends;
	abc(s+"a");
	abc(s+"b");
	abc(s+"c");
}

int main()
{
	abc(" ");
	return 0;
}
