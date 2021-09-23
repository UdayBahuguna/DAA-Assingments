#include<bits/stdc++.h>
using namespace std;

int main()
{

        int i=0,j=0;

        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int m;
        cin>>m;
        int b[m];

        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }

        while(i<n && j<m)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                i++;j++;

            }

            else if(a[i]>b[j])
            {
                j++;
            }
            else
            {
                i++;
            }

        }



    return 0;
}
