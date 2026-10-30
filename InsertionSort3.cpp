#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
for(int i=0;i<n;i++){
    for(int j=i;j>0;j--){
        if(arr[j-1]<arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
    }
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
InsertionSort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}
