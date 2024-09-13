#include<stdio.h>
#include<math.h>
int main(){
    int r,sum=0;
    double num = pow(2,4); ///suppose asking from user using x and y 
    int a=(int)num;
    while (a>0){
    r=a % 10;
    sum=sum+r;
    a=a/10;
    
}
printf("%d",sum);
}