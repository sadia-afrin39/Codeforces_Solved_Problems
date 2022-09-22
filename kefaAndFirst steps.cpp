//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a[100000],b[100000],i,j,sum=0,p=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(j=0;j<n;j++)
    {
        if(a[j]<=a[j+1])
        {
            sum++;

        }

        else
        {

            b[p]=sum;

            p++;

            sum=0;

        }

    }

    int maxi=b[0];

    for(int i=0;i<p;i++)
    {
        if(b[i]>maxi)
        {
            maxi=b[i];
        }
    }


    cout<<maxi+1<<endl;

    return 0;
}

