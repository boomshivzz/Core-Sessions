#include<stdio.h>
int main(void)
{

int zero=0,first=1,next=1;
int sum=0;
while(next<=4000000){
	if (next%2==0)
	{
		sum+=next;
	}
	next = first+zero;
	zero=first;
	first=next;
	
}
printf("sum=%d",sum);
}
