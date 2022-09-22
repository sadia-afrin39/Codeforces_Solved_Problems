#include<iostream>
using namespace std;

int main()
{
    int n,i,j,p=0,q=0;

    string s;

     cin>>n>>s;

     for(i=0;i<n;i++)
     {

         if(s[i]=='0')
         {
             p++;
         }
         else
         {
             q++;
         }
     }

     if(p!=q)
     {
         cout<<'1'<<endl;
         cout<<s<<endl;
     }

     else
     {
         cout<<'2'<<endl;

         cout<<s[0]<<' ';

         for(j=1;j<n;j++)
         {
             cout<<s[j];
         }

     }

}
