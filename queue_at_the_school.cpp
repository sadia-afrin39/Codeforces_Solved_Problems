//Bismillahir Rahmanir Rahim
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,k;

    cin>>n>>t;

    string s;

    cin>>s;

    while(t--)
    {
        for(int j=0;j<n;j++)
        {
           // int i=j+1;

            if(s[j]=='B'&&s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                //j=i;
                j++;
                //k=s[j];
               // s[j]=s[j+1];
             }  // s[j+1]=k;
        }
    }
    cout<<s<<endl;

    return 0;
}
