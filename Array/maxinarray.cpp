#include<iostream>
using namespace std;
int main()
{
    int arr[] ={7,50,40,20,10,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max=0;

     for(int i=1; i<n; i++)
    {
       if(max<arr[i]) max=arr[i]; 
}
   cout<<max;
}
