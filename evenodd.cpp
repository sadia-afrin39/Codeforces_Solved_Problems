//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,m,out=0;

    cin>>n>>k;

    if(n%2==0)  m=(n/2);

    else m=(n/2)+1;

    if(k<=m) out=1+(k-1)*2;

    else  out=2+((k-m)-1)*2;

    cout<<out<<endl;

    return 0;
}

