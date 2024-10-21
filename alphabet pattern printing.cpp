/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main(){
int i=0,j=0;
char x;
for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
        x=(char)'a'+(i-1);
        cout<<x<<"\t";
    }cout<<"\n";
}
}
