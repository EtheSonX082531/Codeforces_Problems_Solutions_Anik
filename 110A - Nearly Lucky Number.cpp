#include<iostream>
using namespace std;

int main()
{
    long long n,count=0;
    cin>>n;
    while(n!=0) {
        if(n%10==4 || n%10==7) {
            count=count+1;
        }
        n=n/10;
    }
    if(count==4 || count==7) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}
