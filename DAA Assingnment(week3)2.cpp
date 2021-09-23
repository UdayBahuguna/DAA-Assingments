#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {  int n;
       cin>>n;
       int a[n];
       int c=0;
       int s=0;
       for(int i=0;i<n;i++)
            cin>>a[i];

       for(int i=0;i<n;i++)
       {
           c+= n-i-1;
           int k = a[i];

           for(int j=i+1;j<n;j++)
           {
               if(k>a[j])
                {
                  swap(k,a[j]);
                }

           }
           if(k<a[i])
           {
               a[i] = k;
               s++;
           }

       }
       cout<<c<<" "<<s<<endl;
    }
    return 0;
}
/*

3
8
-13 65 -21 76 46 89 45 12
10
54 65 34 76 78 97 46 32 51 21
15
63 42 223 645 652 31 324 22 553 12 54 65 86 46 325

*/
