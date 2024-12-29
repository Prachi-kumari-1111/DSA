#include<iostream>
using namespace std;
int main(){
    int arr[]={9,8,6,4,70,50,20,80};
     int n= sizeof (arr)/sizeof (arr[0]);
     int sum=0;
    for(int i=0; i<=8;i++) 
    {
     sum += arr [i];
    }  
    cout<<sum;
}