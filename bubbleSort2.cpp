#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
for(int i=0;i<=n-1;i++){
        int m=0;
        int didsort=0;
    for(int j=0;j<n-i-1;j++){
        if(arr[j+1]<arr[j]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            didsort=1;
        }
        m++;
    }
    if(didsort==0){
        break;
    }
}
}
int main(){
int n;
cout<<"Enter size of array";
cin>>n;
cout<<"Enter array values";
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
BubbleSort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}
