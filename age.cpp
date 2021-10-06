#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age of the person : ";
    cin>>age;
    if(age>=18){
        cout<<"\n You are eligible to caste your vote";

    }
    else if(age<18){
        cout<<"\n You are not eligible to caste your vote since you are underage";
    }
    else{
        cout<<"\n Invalid Input";
    }
    return 0;
}
