//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
#define pi 3.14169265
using namespace std;


int main()
{
    int a,b,c,d,e,f,r;

    double p,w,x,y,z,v[3];

   cin>>a>>b>>c;

   r=a/2;
   d=(a-b);
   e=(a-c);

    w=(double)(4*pi*r*r*r)/3;

    x=(double)(pi*d*d*((3*r)-d))/3;
    v[0]=x;

    y=(double)(pi*e*e*((3*r)-e))/3;

    p=y-x;
    v[1]=p;

    z=w-y;
    v[2]=z;

    sort(v,v+3);
   printf("%.6lf %.6lf %.6lf\n",v[0],v[1],v[2]);


    return 0;

}


