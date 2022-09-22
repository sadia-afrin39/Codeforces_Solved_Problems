//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,p=0;

    cin>>n>>m;

    if(n<m) p=n;

    else  p=m;

    if(p%2==0) cout<<"Malvika"<<endl;

    else cout<<"Akshat"<<endl;

    return 0;
}
