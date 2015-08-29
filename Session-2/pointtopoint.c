#include<stdio.h>

int main(){
	int val=12;
	int *point;
	int **pp;
	point=&val;
	pp=&point;
	printf("Address stored is ronak=%d sou=%d yash=%d",pp,*point,val);
	printf("\npp=%d",**pp);
	return 0;
}
