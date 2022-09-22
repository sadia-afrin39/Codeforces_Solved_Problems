//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........

#include<iostream>

using namespace std;

int main()
{
    int k,w;
    long long int n, sum=0,res=0;

    cin>>k>>n>>w;

    for(int i=1;i<=w;i++)
    {
        sum+=i*k;
    }

    res=sum-n;

    if(res<=0)
    {
        cout<<"0"<<endl;
    }

    else
    {
        cout<<res<<endl;
    }


    return 0;
}

//-------ALHAMDULILLAH--------
