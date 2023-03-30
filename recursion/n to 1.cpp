//print n linearly n to 1
#include <iostream>
using namespace std;

void f(int i,int n)
{
    if(i<1)  //base case
        return;
    cout<<i<<" ";
    f(i-1,n);
}


int main() {
	int n;
	cin>>n;
	f(n,n); 
	return 0;
}
