#include<bits/stdc++.h>
using namespace std;

int find_other(int a[],int val)
{
    int st = 0;
    int ed = sizeof(a)/sizeof(a[0]) -1;

    while(st<=ed)
    {
        int mid = st + (ed-st)/2;

        if(a[mid] == val)return mid;

        else if(a[mid]>val)ed = mid-1;

        else
            st = mid+1;
    }
   return -1;
}

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


        int key;
        cin>>key;
        int flag = 0;
        for(int i=0;i<n;i++)
        {
            int idx;
            if(key >= a[i])
            {

             idx = find_other(a,key-a[i]);

             if(idx!=-1)
               { cout<<a[i]<<","<<a[idx]<<endl; flag =1;}
            }
        }

        if(flag == 0)cout<<"No such pair exist";

    }

    return 0;
}
