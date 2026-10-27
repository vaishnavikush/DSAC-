#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n){
for(int i=0;i<=n-1;i++){
        int min=i;
    for(int j=i;j<=n-1;j++){
       if(arr[min]>arr[j]) {
        min=j;
       }
    }
      int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
}
}
int main(){
int n;
cout<<"Enter size of array";
cin>>n;
cout<<"Enter values of array";
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
SelectionSort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}
