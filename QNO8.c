// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int arr[10],i;
   int order;
   int count=0;
   printf("enter the numbers:");
   for(i=0;i<10;i++){
       scanf("%d",&arr[i]);
   }
   for(i=0;i<9;i++){
       if(arr[i]<=arr[i+1]){
           count++;
       }
   }
   if(count==9){
       printf("ascending sorted order");
   }
   else{
       printf("unsorted order");
   }

    return 0;
}
