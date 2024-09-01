
/*Imagine you are managing a conveyor belt system in a factory. The conveyor belt 
is represented as an array of items, and you need to rotate the conveyor belt by a specified 
number of steps to the right. This helps in ensuring that the items on the belt are evenly 
distributed for further processing.
Task: Write a function to rotate the array of items to the right by K steps, where K is non-
negative.*/
#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5},n=5,i,s,temp=0;
    cout<<"Enter The number of time"<<endl;
    cin>>s;  
    while(s>0){ 
        temp=a[n-1];
        for(i=n-1;i>0;i--){ 
            a[i]=a[i-1];
        }  a[0]=temp; 
        s--;
          
        } 
        for(i=0;i<n;i++){
            cout<<a[i];
        } 
        return 0;
}
