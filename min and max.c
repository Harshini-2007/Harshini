#include<stdio.h>
int main(){
int i,j,max=0,a[5]={1,2,3,4,5}, min=a[0]+a[1];
for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
        if(a[i]+a[j]>max){
            max=a[i]+a[j];}
            if(a[i]+a[j]<min){
                min=a[i]+a[j];
            }}}
            printf("%d %d",min,max);}
        
    
