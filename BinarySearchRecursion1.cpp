#include<iostream>
using namespace std;
int BinarySerach(int arr[],int low,int high,int target){
while(low<=high){
    int mid=(low+high)/2;
    if(target==arr[mid]){
        return mid;
    }
    else if(target>arr[mid]){
        return BinarySerach(arr,mid+1,high,target);
    }
    else{
        return BinarySerach(arr,low,mid-1,target);
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
int arr[n];
cout<<"Enter array's values";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int target;
cout<<"Enter value to search";
cin>>target;
int res=BinarySerach(arr,0,n-1,target);
cout<<res;
}
