/****Scenario: Imagine you are working on a 2D graphics processing tool that deals 
with image manipulation. Your task is to rotate an NxN image (represented by a 
matrix) 90 degrees clockwise in-place, which means you should not use extra 
memory. 
Task: Write a function that rotates the given matrix 90 degrees clockwise in
place.
*****/

#include <stdio.h>

int main()
{int i=0,j=0;
   int  a[3][3]={{1,2,3},{4,5,6},{7,8,9}}; 
    for(j=0;j<3;j++){
        for(i=2;i>=0;i--){
            printf("%d ",a[i][j]);
        } 
        printf("\n");
    } 
    
    
    
    

    return 0;
}