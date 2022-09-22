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
//int ar[1000000];
 int i,j,n,m,p,q,cnt=0,cnt1=0,cnt2=0;
//string s;
//string sarr[10000];
//int arr[1000][1000];
vector<int> v;
//vector<int>::iterator it;
//bool b;

//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    fast;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p;
        v.push_back(p);
    }

    sort(v.begin(),v.end());

    cin>>m;

    for(j=0;j<m;j++)
    {
        cnt=0;

        cin>>q;

        cnt=upper_bound(v.begin(),v.end(),q)-v.begin();

       // if(cnt==0)  cout<<0<<endl;

        cout<<cnt<<endl;

    }
    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************




