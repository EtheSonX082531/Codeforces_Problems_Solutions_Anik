#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int x=0;
    for(int i=1; i<=N; i++) {
        for(int k=N-i; k>0; k--) {
            cout<<" ";
        }
        for(int j=1; j<=i+x; j++) {
            cout<<"*";
        }
        cout<<endl;
        x++;
    }
    return 0;
}
