#include<iostream>
using namespace std;
void BinarySearch(int arr[],int n,int target){
int low=0;
int high=n-1;
while(low<=high){
        int mid=(low+high)/2;
    if(target==arr[mid]){
        cout<<mid;
break;
    }
    else if(target>arr[mid]){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
if(low>high){
    cout<<"Value not found";
}
}
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter array's values";
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int target;
cout<<"Enter target value to find";
cin>>target;
BinarySearch(arr,n,target);
//cout<<res;
}
