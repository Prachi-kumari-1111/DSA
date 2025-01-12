#include<iostream>
using namespace std;
int main()
{
    int arr[] ={1,3,6,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min=0;

     for(int i=1; i>n; i++)
    {
       if(min<arr[i]) min=arr[i]; 
}
   cout<<min;
}