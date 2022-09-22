
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

    int n,s=0,sum;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //sum=0;
        sum=(i+1)*(n-i)-i;
        //cout<<sum<<' ';
        s+=sum;

    }
    cout<<s<<endl;
    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************




