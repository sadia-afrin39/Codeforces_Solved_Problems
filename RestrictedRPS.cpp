
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
int t,n,a,b,c,d,p,q,i,j;
//unsigned int x,y,z;
//int ar[1000000];
//int arr[1000][1000];
string s;
char s1[100];
//string sar[10000];
//string sarr[1000][1000];

//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    fast;
    cin>>t;

    while(t--)
    {
        int cnt=0;
        cin>>n;
        cin>>a>>b>>c;
        cin>>s;

        for(int i=0;i<n;i++) s1[i]='0';

        for(i=0;i<n;i++)
        {
            if(s[i]=='R'&& b>0)
            {
               s1[i]='P';
                cnt++;
                b--;
            }
            if(s[i]=='P'&&c>0)
            {
                s1[i]='S';
                cnt++;
                c--;
            }
            if(s[i]=='S'&&a>0)
            {
                s1[i]='R';
                cnt++;
                a--;
            }
        }
        //p=cnt+cnt1+cnt2;
        //cout<<cnt<<' ';
        float q =n;
        q=ceil(q/2);

        if(cnt>=q)
        {
            for(d=0;d<n;d++)
            {
                if(s1[d]=='0')
                   {
                       if(a>0)
                        {
                            s1[d]='R';
                            a--;
                        }
                        else if(b>0)
                        {
                            s1[d]='P';
                            b--;
                        }
                        else if(c>0)
                        {
                            s1[d]='S';
                            c--;
                        }
                   }
            }
            cout<<"YES"<<endl;
            for(j=0;j<n;j++)
               cout <<s1[j];
            cout<<endl;
        }
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





