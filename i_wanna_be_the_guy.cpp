//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,q;

    set<int> v;

    cin>>n>>p;

    for(int i=0;i<p;i++)
    {
        int x;

        cin>>x;

        v.insert(x);

    }

    cin>>q;

    for(int j=0;j<q;j++)
    {
        int y;

        cin>>y;

        v.insert(y);
    }

   // set<int>::iterator it;

  //  for(it=v.begin();it!=v.end();it++)
   // {
   //     cout<<*it<<' ';
  //  }

  //  cout<<endl;

    if(v.size()==n)
        cout<<"I become the guy."<<endl;

    else cout<<"Oh, my keyboard!"<<endl;

    return 0;
}
