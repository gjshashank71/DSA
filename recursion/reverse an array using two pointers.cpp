// reverse an array using two pointers
#include <iostream>
using namespace std;

void reverse(int l,int arr[],int r)
{
    if(l>=r)
        return ;
    
    swap(arr[l],arr[r]);
    reverse(l+1,arr,r-1);
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }    
    reverse(0,arr,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
