#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
       int n;
       cin>>n;
       if(n<3)
        cout<<"Not exist";

       else{
       int a[n];

       vector<int> v;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       int c=0;

       for(int i = 0;i<n;i++)
       {
           for(int j=1;j<n;j++)
           {
               for(int k=2;k<n;k++ )
               {
                   if(a[k] == a[i]+a[j])
                   {

                       if(v.size() < 3)
                       {
                           v.push_back(i+1);
                           v.push_back(j+1);
                           v.push_back(k+1);
                       }
                       c++;
                   }
               }
           }
       }

       if(c==0)
        cout<<"No sequence found"<<"\n";

       else
       {
           cout<<v[0]<<","<<v[1]<<","<<v[2]<<endl;
       }

       }


    }

    return 0;
}
/*

3
5
1 5 84 209 341
10
24 28 48 71 86 89 92 120 194 201
15
64 69 82 95 99 107 113 141 171 350 369 400 511 590 666

*/
