#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=0;
        int s=0;

        for(int i=1;i<n;i++)
        {
           int k = a[i];
           int j= i-1;

           while(j>=0 && k<a[j])
           {
               c++;
               a[j+1]=a[j];
               s++;
               j--;
           }
           a[j+1]=k;
           s++;
        }

     for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

     cout<<endl<<"comparisions = "<<c<<endl <<"shifts = "<<s<<endl;


    }


    return 0;
}
/*
3
8
-23 65 -31 76 46 89 45 32
10
54 65 34 76 78 97 46 32 51 21
15
63 42 223 645 652 31 324 22 553 -12 54 65 86 46 325

*/
