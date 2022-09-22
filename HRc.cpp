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
int t,n,m,a=0,b=0,c=0,d=0,p,q,i,j=0,cnt=0,cnt1=0,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
//int ar[]={100,20,10,5,1};
string str,str1;
 
 
//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************
 bool isVowel(char c){
	return (c == 'a' || c == 'e' || c == 'i'
			|| c == 'o' || c == 'u');
			
    }

    int Seq(string s){
        for ( i = 0; i < s.length(); i++)
        {
            if (isVowel(s[i])){
                cnt++;
                str1+=s[i];	
            }
            else
            {
                cnt1 = max(cnt1, cnt);
                cnt = 0;
            }
        }
        
    } 
int main()
{
    fast; 
     cin>>n;
     cin>>str;
     cout<<Seq(str)<<endl;
    done;
}
 
 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@
 
//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************