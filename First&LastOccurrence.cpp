#include<iostream>
using namespace std;
int LowerBound(int arr[],int n,int target){
int low=0;
int high=n-1;
int first=n;
while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]>=target){
          first=mid;
        high=mid-1;
    }else {
    low=mid+1;
    }
}
return first;
}
int upperBound(int arr[],int n,int target){
int low=0;
int high=n-1;
int second=n;
while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]>target){
          second=mid;
        high=mid-1;
    }else {
    low=mid+1;
    }
}
return second;

}
int main(){
int n;
cout<<"Enter size of array";
cin>>n;
int arr[n];
cout<<"Enter array's values";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int target;
cout<<"Enter target value";
cin>>target;
int first=LowerBound(arr,n,target);
if(first==n || arr[first]!=target){
    cout<<-1;
}else{
//eturn {first,upperBound(arr,n,target)-1};
cout<<first<<upperBound(arr,n,target)-1;
}
}
