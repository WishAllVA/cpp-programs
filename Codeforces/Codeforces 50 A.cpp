#include<iostream>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    if(m<2 && n<2) {
        cout<<0;
        return 0;
    }
    cout<<(m*n)/2<<endl;
    return 0;
}
