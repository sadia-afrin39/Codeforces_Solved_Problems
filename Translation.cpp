//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cn=0;
    string a,b;
    cin>>a;
    cin>>b;

    int ln=a.length();

    for(int i=0;i<ln;i++)
    {
      if(a[i]==b[ln-1-i]) cn++;
    }

    if(cn==ln)  cout<<"YES"<<endl;

    else cout<<"NO"<<endl;

    return 0;
}
