/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int a,b,i;
    printf("Enter upper limit and lower limit");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        if(i <=9){
          switch(i){
              case 1: printf("One \n");
                      break;
              case 2:printf("Two \n");
                     break; 
              case 3: printf("Three \n") ;
                      break;
              case 4: printf("Four\n") ;
                      break;
              case 5: printf("Five\n") ;
                     break; 
              case 6:  printf("Six\n") ;
                     break;
              case 7: printf("Seven\n")  ;
                     break;
              case 8: printf("Eight\n") ;
                    break;
              case 9: printf("Nine\n") ;
                    break;
          } 
        }
        else{ 
            if(i %2==0){
                printf("Even");
            } 
            else{
                printf("odd");
            }
        
    }

}
return 0;
}