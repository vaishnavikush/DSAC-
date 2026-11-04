#include<iostream>
using namespace std;
int main(){
    double x;
    cout<<"Enter base value";
    cin>>x;
    int n;
    cout<<"Enter power value";
    cin>>n;
     double ans=1.0;
     long long pow=n;
    if(n<0){
        pow=-1*pow;
    }
    while(pow>0){
        if(pow%2==1){
            ans=ans*x;
        }
        x=x*x;
        pow=pow/2;
    }
    if(n<0){
        ans=1.0/ans;
    }
    cout<<ans;
}
