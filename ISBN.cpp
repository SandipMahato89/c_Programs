#include<iostream>
using namespace std;
int main(){
    int num,n,d=0,r,sum=0;
    cout<<"Enter the number : ";
    cin>>num;
    n=num;
    while(n!=0){
        n=n/10;
        d++;
    }
    if(d==10){
        int temp=num;
        while(temp!=0){
            r=temp%10;
            temp=temp/10;
            sum=r*d;
            d--;
        }
    }
    if(sum%11==0){
        cout<<num <<" is an ISBN Number";
    }
    else{
        cout<<num<<" is not an ISBN Number";
    }
    return 0;
}
