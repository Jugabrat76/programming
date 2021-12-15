// take a array as a input and print the sum of the numbers of that array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"please enter the number of test case  ";
    cin>>t;
    while(t--)
    {
    int i;
    cout<<endl;
    cout<<"enter the array size  ";
    cin>>i;
    int arr[i];
    int sum=0;
    cout<<"enter the array  ";
    for(int n=0 ; n<i ;n++)
    {
        cin>>arr[n];
    }
    for(int x=0;x<i;x++)
    {
        sum= sum + arr[x];
    }
    cout<<"the sum is  ";
    cout<<sum;
    }
    cout<<endl;
    return 0;
}
