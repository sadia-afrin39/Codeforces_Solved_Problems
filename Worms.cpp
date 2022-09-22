
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
//int ar[1000000],ar1[1000000],
int n,m,a,b,c,d,p,q,i,j,cnt=0,cnt1=0,cnt2=0;
vector <int> v;
//string s;
//string sarr[10000];
//int arr[1000][1000];
vector <int>::iterator it;

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
        cin>>a;
        cnt+=a;
        v.push_back(cnt);
    }

    cin>>m;
    for(j=0;j<m;j++)
    {
        cin>>b;

        it=lower_bound(v.begin(),v.end(),b);

        cout<<distance(v.begin(),it)+1<<endl;
    }


    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************


