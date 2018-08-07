#include<iostream>
using namespace std;
int main(){

    long long m,n,a;
    cin>>m>>n>>a;
    long long c1=m/a;
    long long c2=n/a;
    if(m%a!=0)
        c1++;
    if(n%a!=0)
        c2++;
    cout<<c1*c2;

    return 0;
}

