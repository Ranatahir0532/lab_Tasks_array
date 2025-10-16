#include <stdio.h>

int main() {
 int age[8];
 int min=0;
 int i;
 printf("enter the age");
 scanf("%d",&age[0]);
 min=age[0];
 for(i=1;i<8;i++){
     scanf("%d",&age[i]);
     if(age[i]<min){
         min=age[i];
     }
 }
 printf("minimum age is %d",min);
 

    return 0;
}
