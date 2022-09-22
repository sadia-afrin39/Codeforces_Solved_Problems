//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,maxi=0;

    int arr[6];

    cin>>a>>b>>c;

    arr[0]=a*(b+c);

    arr[1]=(a*b)+c;

    arr[2]=(a+b)*c;

    arr[3]=a+(b*c);

    arr[4]=a+b+c;

    arr[5]=a*b*c;

    maxi=arr[0];

    for(int i=0;i<6;i++)    //sort(arr,arr+6)
    {
        if(arr[i]>maxi)        //cout<<arr[5];
        {
            maxi=arr[i];
        }
    }

    cout<<maxi<<endl;
}
