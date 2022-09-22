//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    getline(cin,s);

   // cin>>s;

    set<char>t;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            t.insert(s[i]);
        }
    }

    cout<<t.size()<<endl;

    return 0;
}
