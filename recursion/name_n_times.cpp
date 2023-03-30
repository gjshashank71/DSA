//print name n times
#include <iostream>
using namespace std;

void f(int i,int n)
{
    if(i>n)  //base case
        return;
    cout<<"i->"<<i<<" shashank"<<endl;
    f(i+1,n);
}


int main() {
	int n;
	cin>>n;
	f(1,n); //f(0,n);
	return 0;
}

//TC O(n) 
//SC O(n)