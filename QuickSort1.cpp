#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void QuickSort(int arr[],int n){
int pivot=arr[0];
vector<int>vec1;
vector<int>vec2;
vector<int>vec3;
vector<int>final;
for(int i=0;i<n;i++){
    if(pivot>arr[i]){
        vec1.push_back(arr[i]);
    }else if(pivot==arr[i]){
     vec3.push_back(arr[i]);
    }
    else{
        vec2.push_back(arr[i]);
    }
}
sort(vec1.begin(),vec1.end());
sort(vec2.begin(),vec2.end());
for(int i=0;i<vec1.size();i++){
        final.push_back(vec1[i]);
}
for(int i=0;i<vec3.size();i++){
        final.push_back(vec3[i]);
}
for(int i=0;i<vec2.size();i++){
        final.push_back(vec2[i]);
}
for(int i=0;i<n;i++){
    cout<<final[i]<<endl;
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
QuickSort(arr,n);

}
