#include<stdio.h>
int main(){
    int arr[10];
    int sum=0,i;
    printf("enter profit or loss\npositve value for profit\nnegative value for loss\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]>0){
            sum+=arr[i];
        }
    }
    printf("total profit=%d",sum);
}
