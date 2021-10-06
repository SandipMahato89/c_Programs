#include<iostream>
using namespace std;
int prime(int val){
    int flag=1,i;
    if (val == 0 || val == 1){
        flag=0;
    }
     else {
        for(i = 2; i <= val/2; ++i) {
            if(val % i == 0) {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
void sumTwoPrime(int n){
    int i=0,flag=0;
    while(i<=n/2){
        if(prime(i)){
            if(prime(n-i)){
                cout<<n<<" = "<<i<<" + "<<n-i<<endl;
                flag=1;
            }
        }
        i++;
    }
    if(flag==0){
        cout<<"Can not be expressed as sum of two prime numbers"<<endl;
    }
    

}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    sumTwoPrime(n);
    return 0;
}
