//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,m,n,c1=0,c2=0;

    cin>>p;

    for(int i=0;i<p;i++)
    {
        cin>>m>>n;

        if(m>n) c1++;

        else if(m==n) c1++,c2++;

        else c2++;
    }

   // cout<<c1<<' '<<c2<<' ';

    if(c1>c2) cout<<"Mishka"<<endl;

    else if(c1<c2) cout<<"Chris"<<endl;

    else cout<<"Friendship is magic!^^"<<endl;

    return 0;
}
