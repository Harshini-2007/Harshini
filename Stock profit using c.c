/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int x,y,b,i,j,sub=0;
    int a[5]={7,6,3,9,10};
    for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
        if(a[j]>a[i]){
            b=a[j]-a[i];
         if(b>sub){
             sub=b; 
             x=i;
             y=j;
         } 
        }
        
    }
} if(sub>0){
printf("Buy on day %d \n",x+1);
printf("Sell on day %d \n",y+1);
printf("Profit is %d",sub);
}else{
    printf("0 profit");
}}
    