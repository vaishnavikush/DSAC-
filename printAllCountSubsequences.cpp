#include<iostream>
using namespace std;
int subsequence(int ind,int sm,int arr[],int n,int sum){
if(ind==n){
    if(sm==sum){
        return 1;
    }
    return 0;
}
sm+=arr[ind];
int l=subsequence(ind+1,sm,arr,n,sum);
sm-=arr[ind];
int r=subsequence(ind+1,sm,arr,n,sum);
return l+r;
}
int main(){
    int arr[]={1,2,1};
int n=3;
int sum=3;
int res=subsequence(0,0,arr,n,sum);
cout<<res;
return 0;
}
