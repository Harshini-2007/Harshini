/*Imagine you are developing an expense-tracking application. Users 
can input their daily expenses, and the app stores these expenses in an array. A 
user wants to find two specific expenses that add up to a given target amount 
(e.g., two expenses that together make up a specific budget or a known 
transaction total). Your task is to write a function that helps users find the 
indices of these two expenses.
Task: Write a function to find the indices of the two numbers in the array that 
add up to the given target. Each input will have exactly one solution, and you 
may not use the same element twice. The order of the indices returned does not 
matter.*/



#include<iostream>
using namespace  std;
int main(){
    int a[]={1,2,3,4,5},n=5,t,i,j,b=-1,c=-1;
    cout<<"Enter target value"<<endl;
    cin>>t;
    for(i=0;i<n;i++){
        for(j= i+1;j<n;j++){
            if(a[i]+a[j]==t){
                b=i;
                c=j; 
                break;
            } 
        }
           if(b!=-1&&c!=-1){
               break;
        }
    } if(b!=-1&&c!=-1){
               cout<< b<<","<< c;
    }
    else{
        cout<<"no pair";
    }
}