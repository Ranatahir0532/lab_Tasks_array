#include<stdio.h>
int main(){
	int employee_ID[12],SID,check=0;
	printf("enter the employee_ID:\n");
	int i;
	for(i=0;i<12;i++){
		scanf("%d",&employee_ID[i]);
		}
		printf("enter checking ID\n");
		scanf("%d",&SID);
    for(i=0;i<12;i++){
    	if(employee_ID[i]==SID){
    		check=1;
    		break;
		}
	}
	if(check==1){
		printf("ID_exists");
		
	}
	else{
		printf("ID doesn't exist");
	}
	
}
