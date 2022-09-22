//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,p,q;

    cin>>n;

    if(n>=0)    cout<<n<<endl;

    else
    {
        n=n*(-1);

        p=n/10;

        //cout<<p<<endl;

        q=(n/100)*10+n%10;

        //if(p==q) q=(n/100)*10;

       // cout<<q<<endl;

        if(p>q) cout<<q*-1<<endl;

        else cout<<p*-1<<endl;
    }

    return 0;
}
