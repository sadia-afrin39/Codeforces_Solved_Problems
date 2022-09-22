//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[101],cnt=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]==1) cnt++;
    }

    if(cnt==0) cout<<"EASY"<<endl;

    else cout<<"HARD"<<endl;

    return 0;

}
