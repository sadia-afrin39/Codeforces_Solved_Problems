//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string  s;



    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        int coun=0;

        if(s[i]=='W')
        {
            if(s[i+1]=='U')
            {
                if(s[i+2]=='B')
                {
                    i+=2;

                     coun=1;

                    cout<<' ';
                }
            }
        }

        if(coun==0) cout<<s[i];
    }
    return 0;

}
