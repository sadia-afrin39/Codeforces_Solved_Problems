//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........

#include<iostream>
using namespace std;

int  main()
{
    int arr[101][3], n, i, j, sum1 = 0, sum2 = 0, sum3 = 0;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin>>arr[i][j];

            if(j == 0)
            {
                sum1 = sum1 + arr[i][j];
            }
            else if(j == 1)
            {
                sum2 = sum2 + arr[i][j];
            }
            else if(j == 2)
            {
                sum3 = sum3 + arr[i][j];
            }
        }
    }

    if((sum1 == 0) && (sum2 == 0) && (sum3 == 0))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;

}

//-----ALHAMDULILLAH-----
