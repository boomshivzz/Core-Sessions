#include<stdio.h>

void func1(){
	printf("Func 1\n");
}

int func2(){
	printf("Func 2\n");
	return 0;
}

int func3(int a){
	printf("Func 3, arguemnet is %d\n",a);
}

int func4(void (*fp)()){
	fp();
}

void func5(int (*fp)(int)){
	fp(10000);
}

int main(){
	void (*fp1)() = &func1;
	int (*fp2)() = &func2;
	int (*fp3)(int) = &func3;
	fp2();
	func4(fp1);
	func5(fp3);
}
