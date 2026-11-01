#include<iostream>
#include<vector>
using namespace std;
void QuickSort2(int arr[],int n){
if(n<=1){
    return;
}
vector<int>vec1;
vector<int>vec2;
vector<int>vec3;
int pivot=arr[0];
for(int i=0;i<n;i++){
    if(pivot>arr[i]){
        vec1.push_back(arr[i]);
    }
    else if(pivot==arr[i]){
        vec2.push_back(arr[i]);
    }
    else{
        vec3.push_back(arr[i]);
    }
}
QuickSort2(vec1.data(),vec1.size());
QuickSort2(vec3.data(),vec3.size());
int k=0;
for(int i=0;i<vec1.size();i++){
    arr[k]=vec1[i];
    k++;
}
for(int i=0;i<vec2.size();i++){
    arr[k]=vec2[i];
    k++;
}
for(int i=0;i<vec3.size();i++){
    arr[k]=vec3[i];
    k++;
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
QuickSort2(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}

}
