#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int first=arr[0];
    int last=arr[n-1];
    while(first!=last){
        int mid=(first+last)/2;
        if(key==arr[mid]){
            cout<< "Element found at index "<<mid<<endl;
            break;
        }
        else if (key>arr[mid]){
            first=mid+1;
        }
        else{
            last=mid-1;
        }
    }
    if (first>=last) cout<<"Element not found "<<endl;
    return 0;
}