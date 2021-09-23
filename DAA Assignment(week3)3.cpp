#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        int i;
        for( i=1;i<n;i++)
        {
            if(a[i-1] == a[i])
                break;
        }

        if(i>=n)cout<<"NO";

        else
            cout<<"Yes";
    }
    return 0;
}
