
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
int ar[1001];
//set<int>tarin;
//unsigned long long
 int n,m,a,b,c,d,p=0,q=0,i,j,cnt=0,cnt1=0,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
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

   a=0; b=n-1; c=0;

   for(i=0;i<n;i++) cin>>ar[i];

   while (a<b+1)
    {
        c++;
        if (ar[a] > ar[b])
        {
            if (c % 2==1)   p += ar[a];
            else    q+= ar[a];
            a++;
        }
        else
        {
            if (c % 2==1)
                p += ar[b];
            else
                q += ar[b];
            b--;
        }
    }

    cout << p << " " << q << endl;

    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************










