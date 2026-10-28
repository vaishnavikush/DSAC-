#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
for(int i=0;i<=n-1;i++){
        int m=0;
        int didsort=0;
    for(int j=1;j<=n-i-1;j++){
        if(arr[m]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[m];
            arr[m]=temp;
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
int arr[n];
cout<<"Enter values of array";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
BubbleSort(arr,n);
for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
}
}
