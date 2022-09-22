 
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
int n,m,a=0,b=0,c=0,d=0,p,q,i,j=0,cnt=0,cnt1=0,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
//string sarr[10000];
//int ar[101],br[101];
//char s[65];
 
 
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
        cin>>m;
        if(m==1) a++;
        else if(m==2)b++;
        else if(m==3)c++;
        else d++;
    }
    cnt += d;
     if(c<a){
        cnt+=c;
        a-=c;
        c=0;
    }else if(c>=a){
        cnt+=a;
        c-=a;
        a=0;
    }

    if(c>0){
        cnt+=c;
        c=0;
    }
   
    if(b>0){
        cnt+=b/2;
        b= b%2;
    }
    
    int left = a+(b*2);  //total number of student
    if(left<=4 && left>0){
        cnt+=1;
    }else if(left%4 != 0){
        cnt+= (left/4) +1;
    }else{
        cnt+= left/4;
    }
    cout<<cnt<<endl;
    done;
}
 
 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@
 
//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************♣