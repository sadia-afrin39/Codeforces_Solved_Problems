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
//ll ar[100001];
//set<int>tarin;
int t,n,m,a,b,c=0,d=0,p,q,i,j=0,cnt=0,cnt1=0,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
//int ar[]={100,20,10,5,1};
//char s[51];
 
 
//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************
int fda(int ar[],int n)
{
    if (ar[0] == ar[1] && ar[0] != ar[2])
        return 2;
    if (ar[0] == ar[2] && ar[0] != ar[1])
        return 1;
    if (ar[1] == ar[2] && ar[0] != ar[1])
        return 0;
    for (int i = 3; i < n; i++)
        if (ar[i] != ar[i - 1])
            return i;
 
    return -1;
}
 
int main()
{
    fast; 
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n+9];
        for(int j=0; j<n; j++)
            cin>>ar[j];
        cout <<fda(ar,n)+1<<endl;
    }
    done;
}
 
 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@
 
//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************

