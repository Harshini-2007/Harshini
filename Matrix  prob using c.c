/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,j;
   int  a[3][3]={{0,2,3},{4,5,6},{7,8,9}};
   for(i=0;i<3;i++){
   for(j=0;j<3;j++){
       if(a[i][j]==0){
           for(j=0;j<3;j++){
               a[i][j]=0;
           } 
           for(i=0;i<3;i++){
               a[i][j]=0;
           }
       }
   } 
  
}  for(i=0;i<3;i++){
   for(j=0;j<3;j++){
       printf("%d\t",a[i][j]);}
       printf("\n");}
    
    
}