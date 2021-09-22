 #include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
      int n,key;
      cin>>n;
      int a[n];

      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      cout<<"enter key: ";
      cin>>key;
      int c=1;
      int i;
      for(i=0;i<n;i++)
      {

          if(a[i]==key)
            break;

          c++;
      }

      if(i>=n)
      {
          cout<<"Does not exist"<<endl;
      }
      else
      {
          cout<<"found"<<endl;
          cout<<"comparisions: "<<c<<endl;
      }

    }
    return 0;
}
