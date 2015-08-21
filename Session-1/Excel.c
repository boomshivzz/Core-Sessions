#include <stdio.h>
#include <string.h>
#include <math.h>

/*Problem :
Given a Excel Sheet column name convert It into its index. Ex: "A" : 1, "AA":27
Column names are UpperCase letters
*/

//Uses String and Math library
int method1(char column[]){
  int length, iterator, index=0, value;
  length = strlen(column);
  for(iterator=0; iterator<length; iterator++){
  	value = (column[iterator]-'A' + 1) * pow(26,length-iterator-1);
  	index+= value;
  }
  return index;
}

//Does not use String and Math library
int method2(char column[]){
	int iterator, index=0;
	for(iterator=0; column[iterator]!='\0'; ++iterator){
		index*=26;
		index+=column[iterator] - 'A' + 1;
	}
	return index;
}

int main(int argc, char const *argv[]) {
  char column[10];
  printf("Enter the column name: ");
  scanf(" %s",column);
  printf("Index: %d\n",method1(column));
  return 0;
}
