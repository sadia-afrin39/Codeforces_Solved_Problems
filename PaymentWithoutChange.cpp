//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........

//*************************************
//*                                   *
//*-------Declaration Part------------*
//*                                   *
//*************************************

#include<bits/stdc++.h>
using namespace std;
#define fast   ios :: sync_with_stdio(false); cin.tie(0)
#define done return 0
const double PI = 2*acos(0.0);
typedef long long int ll;
//int ar[1000000]
unsigned long long int n,a,b,c,d,p=0,q,i,j,cnt=0,cnt1=0,cnt2=0;
//string s;
//string sarr[10000];
//int arr[1000][1000];


//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    fast;

    cin>>n;

    while(n--)
    {
        cnt=0;
        cin>>a>>b>>c>>d;

        p=d/c;

        if(p>a) cnt+=a*c;

        else cnt+=p*c;

        q=d-cnt;

        if(q<=b)    cout<<"YES"<<endl;

        else cout<<"NO"<<endl;

    }


    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************


