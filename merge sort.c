/*Imagine you are a software engineer working on a data merging tool. 
You have two sorted arrays, and your task is to merge them into one sorted 
array. The first array has enough extra space to hold the elements of the second 
array. 
Task: Write a function to merge two sorted arrays nums1 and nums2 into one 
sorted array in non-decreasing order. You must modify nums1 in-place.*/
#include <stdio.h>

int main()
{int i,j=0,temp;
    int a[5]={1,2,0,0,0};
    int b[3]={5,4,3};
    for(i=0;i<5;i++){
        if(a[i]==0){
            a[i]=b[j];
            j++;
        }
    } 
    
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    } 
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }  

    return 0;
}
