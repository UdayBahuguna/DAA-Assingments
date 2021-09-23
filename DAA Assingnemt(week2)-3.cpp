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

       if(n<2)
        cout<<"Can't find";

       else{
       int a[n];
       for(int i=0;i<n;i++)
       {
          cin>>a[i];
       }
       int key;
       cin>>key;

       int c=0;

       for(int i=0;i<n;i++)
       {
         for(int j=i+1;j<n;j++)
         {
             if(abs(a[i]-a[j])==key)
                c++;
         }
       }

       cout<<"\n"<<c;
       }
    }
    return 0;
}

/*

2
5
1 51 84 21 31
20
10
24 71 16 92 12 28 48 14 20 22
4

*/
