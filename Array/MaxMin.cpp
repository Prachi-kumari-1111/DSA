#include<iostream>
using namespace std;
int main()
{
    int arr[] ={7,50,40,20,10,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mx =INT16_MIN;
    int mn =INT16_MAX;

    for(int i=1; i<n; i++)
    {
        mx = max(mx,arr[i]);
        mn = min(mn,arr[i]);
        
    }
    cout<<mx <<" "<<mn;
}
