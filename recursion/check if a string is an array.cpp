// check if a string is an array
#include <iostream>
using namespace std;

bool palindrome(int i,string &s)
{
    if(i>=s.size()/2)
        return true;
    
    if(s[i]!=s[s.size()-i-1])
        return false;
    palindrome(i+1,s);
}


int main() {
    string s ="mada";
    cout<<palindrome(0,s);
    return 0;
}
