#include<iostream>
using namespace std;
int main(){
    int arr[]={9,8,6,4,70,50,20,80,70,60,50};
     int n= sizeof (arr)/sizeof (arr[0]);
    int x;
    cout<<"Enter target :";
    cin>>x;
    for(int i=0; i<n;i++) 
    {
      if(arr[i]==x){
        cout<<x<< "is present";
        break;
      }
    }  

}