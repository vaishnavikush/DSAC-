#include<iostream>
using namespace std;
void selectSort(int arr[],int n){
for(int i=0;i<=n-1;i++){
        int min=i;
    for(int j=i;j<=n-1;j++){
        if(arr[min]>arr[j]){
            min=j;
        }
    }
      int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

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
selectSort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}

}
