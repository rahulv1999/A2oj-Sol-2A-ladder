#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s[100];
    for(int i =0; i<n;i++)
    {
        cin>>s[i];
    }

    for(int i = 1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[j]==i)
            cout<<j+1<<" ";
        }
    }
}

