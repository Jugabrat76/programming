// Take a input array and reverse the position of the numbers of array
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[4]={1,2,3,4};
   for(int i=0;i<4;i++)
   {
       arr[i]=arr[4-1-i];
       cout<<arr[i];
       //cout<<arr;
   }
   return 0;
}
