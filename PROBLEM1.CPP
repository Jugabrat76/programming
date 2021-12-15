#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int x;
    int sum=0;
    int sum=0;
    int arr[n];
    for(int i=0;i<n ;i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    for(int y=0;y<n;y++)
    {
       if(x==arr[y])
       {
           sum=sum+1;
       }
    }
    cout<<sum;
    }
    return 0;
}
