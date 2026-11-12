#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int minValue(int arr[],int n){
int low=0;
int high=n-1;
int ans=INT_MAX;
while(low<=high){
    int mid=(low+high)/2;
    if(arr[low]<=arr[high]){
        ans=min(ans,arr[low]);
        break;
    }
    if(arr[low]<=arr[mid]){
        ans=min(ans,arr[low]);
        low=mid+1;
    }else{
    ans=min(ans,arr[mid]);
    high=mid-1;
    }
}
return ans;
}
int main(){
int n;
cout<<"Enter size of array";
cin>>n;
int arr[n];
cout<<"Enter arraty's values";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans=minValue(arr,n);
cout<<ans;
}
