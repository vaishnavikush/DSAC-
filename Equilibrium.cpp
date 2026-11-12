#include<iostream>
using namespace std;
int main(){
int arr[]={1,3,1,4};
int len=sizeof(arr)/sizeof(arr[0]);
int mid=len/2;
cout<<"equilibrium index is "<<mid;
cout<<endl;
int rst1=0;
int rst2=0;
for(int i=0;i<mid;i++){
    rst1=rst1+arr[i];
}
for(int i=mid+1;i<len;i++){
    rst2=rst2+arr[i];
}
if(rst1==rst2){
    cout<<"Array is equilibrium "<<"and the value is "<<rst1;
}else{
 cout<<"Array is not equilibrium";
}


}
