//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,len=0,cnt=0,sum=0;

    string tarin;

    cin>>tarin;

    len=tarin.size();

    for(i=0;i<len;i++)
    {
        if(tarin[i]==tolower(tarin[i]))
        {
            cnt++;
        }
    }

    if(cnt==0)
    {
        for(i=0;i<len;i++)
        {
            tarin[i]=tolower(tarin[i]);
        }

        cout<<tarin<<endl;

        return 0;
    }

    else if (cnt==1 && tarin[0]==tolower(tarin[0]))
    {
        tarin[0]=toupper(tarin[0]);

        for(i=1;i<len;i++)
        {
            tarin[i]=tolower(tarin[i]);
        }
    cout<<tarin<<endl;

    return 0;
    }

    else
    {
        cout<<tarin<<endl;
    }
    return 0;
}


