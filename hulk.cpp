//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;

   cin>>n;

   for(int i=1;i<=n;i++)
   {
       if(i%2!=0)
       {
            if (i==n) cout<<"I hate it";

            else cout<<"I hate that ";
       }

       if(i%2==0)
       {
           if(i==n) cout<<"I love it";

           else cout<<"I love that ";
       }
   }

}
