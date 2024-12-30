#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x;
    cout<<"Enter target:";
    cin>>x;
    bool flag = false; // false means absent
    for(int i = 0; i<=n; i++)
    {
        flag = true; // true means present
        break;
    }
    if(flag==true) cout<<x<<" is present";
    else cout<<x<<" is not present";

}