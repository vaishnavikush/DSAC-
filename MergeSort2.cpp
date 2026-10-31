#include<iostream>
#include<vector>
using namespace std;
void mergeFn(int arr[],int low,int mid,int high){
    vector<int>finalvect;
int left=low;
int right=mid+1;
while(left<=mid && right<=high){
    if(arr[left]<=arr[right]){
        finalvect.push_back(arr[left]);
        left++;
    }else{
    finalvect.push_back(arr[right]);
    right++;
    }
}
while(left<=mid){
    finalvect.push_back(arr[left]);
    left++;
}
while(right<=high){
    finalvect.push_back(arr[right]);
    right++;
}
for(int i=low;i<=high;i++){
    arr[i]=finalvect[i-low];
}
}
void MergeSort(int arr[],int low,int high){
if(low>=high){
    return;
}
int mid=(low+high)/2;
MergeSort(arr,low,mid);
MergeSort(arr,mid+1,high);
mergeFn(arr,low,mid,high);
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
MergeSort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}
