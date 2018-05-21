/// Bismillahir Rahmanir Rahim.
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll disc[65];

void hanoi_tower(ll n,char initial,char Auxi,char End)
{
    if(n>0)
    {
        hanoi_tower(n-1,initial,End,Auxi);
        cout<<"Disc "<<disc[n]<<" move from "<<initial<<" to "<<End<<"\n";
        hanoi_tower(n-1,Auxi,initial,End);
    }
}

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);*/
    ll i,j,n,t;
    char initial ='A',Auxi='B',End='C';

    cin>>t;
    while(t--)
    {
        cin>>n;///input no. of disc
        for(i=1;i<=n;i++)
        {
            cin>>disc[i]; /// arrangement of discs
        }
        hanoi_tower(n,initial,Auxi,End);
    }
    return 0;
}
