//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[100],i,j,sum=0,p=0,q=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        sum+=arr[i];
    }

    sort(arr,arr+n);

    for(j=n-1;j>=0;j--)
    {
        p+=arr[j];

        q++;

        if((p*2)>sum)
        {
            cout<<q<<endl;
            break;
        }
    }

   return 0;
}
