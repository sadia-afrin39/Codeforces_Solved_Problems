//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[101],i,j=0,k=0,p,q;

    cin>>n;

    for(i=0;i<n;i++) cin>>a[i];

    for(i=0;i<n;i++)
    {
        if((a[i]%2)==0)
        {
             j++;

             p=i;

        }

        else
        {
            k++;

            q=i;
        }
    }

    if(k==1) cout<<q+1<<endl;

    else cout<<p+1<<endl;

    return 0;
}
