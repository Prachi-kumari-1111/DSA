#include<iostream>
using namespace std;
int main()
{
   int arr[]={7,4,10,0,-20,400,1,60,8};
   int n=sizeof(arr)/sizeof(arr[0]);
    int mx =INT16_MIN;
    int smx =INT16_MIN;
   for(int i=0;i<n;i++){
    if(mx<arr[i])mx=arr[i];
   }
   for(int i=0;i<n;i++){
    if(smx<arr[i]&&arr[i]!=mx)
    smx=arr[i];
   }
   cout<<mx<<" "<<smx;

}