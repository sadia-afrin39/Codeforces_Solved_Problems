//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int p,n,i,j=0,sum=0,a[101];

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];

        sum+=a[i];
    }

    j=a[0];

      if(a[0]>(sum/2))
      {
          cout<<'1'<<endl<<'1'<<endl;
      }

      else
     {
         for(int i=1;i<n;i++)
         {
             if((a[0]*2)>=a[i])
             {
                 j+=a[i];

                 p++;

                 cout<<i<<' ';

                 if(j>(sum/2)) break;

             }
         }

         cout<<endl;

         cout<<p;
     }

    return 0;
}
