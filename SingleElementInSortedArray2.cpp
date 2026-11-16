#include<iostream>
using namespace std;
int SingleValue(int arr[],int n){
    if(n==1){
        return arr[0];
    }
if(arr[0]!=arr[1]){
    return arr[0];
}
if(arr[n-1]!=arr[n-2]){
    return arr[n-1];
}
for(int i=1;i<n-2;i++){
if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
    return arr[i];
}
}
return -1;
}
int main(){
int n;
cout<<"Enter array size";
cin>>n;
int arr[n];
cout<<"Enter array's values";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans=SingleValue(arr,n);
if(ans==-1){
    cout<<"No Single Value Found";
}
else{
    cout<<ans;
}
}
