#include<stdio.h>
int main(){
    int arr[12],i;
    int write=0,remove_to;
    printf("enter numbers:\n");
    for(i=0;i<12;i++){
        scanf("%d",&arr[i]);
        }
    printf("enter number to remove\n");
    scanf("%d",&remove_to);
    for(i=0;i<12;i++){
        if(arr[i]!=remove_to){
            arr[write]=arr[i];
            write++;
        }
        }
    printf("array after removing:%d\n",remove_to);
    for(i=0;i<write;i++){
        printf("%d",arr[i]);
    }
    
}
