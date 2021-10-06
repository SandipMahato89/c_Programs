#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int data[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<"You enterd:";
    for(int i=0;i<n;i++){
        cout<<*(data+i)<<" ";
    }
    return 0;
}
