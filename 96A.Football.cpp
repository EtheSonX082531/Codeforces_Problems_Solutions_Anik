#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/96/A

int main()
{
    string s;
    cin>>s;
    int count0=0,count1=0;
    for(int i=0; i<s.length(); i++) {
           if(s[i]=='0') {
            count1=0;
            count0++;
            if(count0==7) {
                cout<<"YES";
                return 0;
            }
        }
        else {
            count0=0;
            count1++;
            if(count1==7) {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
