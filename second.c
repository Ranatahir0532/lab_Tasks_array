#include<stdio.h>
int main(){
	int marks[10],i,summarks=0;
	printf("enter the marks of 10 students:\n");
	for(i=0;i<10;i++){
		scanf("%d",&marks[i]);
	}
	for(i=0;i<10;i++){
		summarks+=marks[i];
	}
	int average=summarks/10;
	printf("average marks=%d",average);
}
