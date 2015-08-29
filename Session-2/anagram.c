#include <stdio.h>
#include<string.h>
int main(){
  char string1[10];
  char string2[10];
  scanf(" %s",string1);
  scanf(" %s",string2);
  int count1[26]={0}, count2[26]={0}, i,j;
  if(strlen(string1)!=strlen(string2)){
    printf("Go home\n");
    return 0;
  }
  for(i=0; i<strlen(string1); ++i){
    count1[string1[i]-'a']++;
  }
  for(i=0; i<strlen(string2); ++i){
    count2[string2[i]-'a']++;
  }
  for(i=0; i<26; i++){
    if(count1[i]!=count2[i]){
      printf("Go home");
      return 0;
    }
  }
  printf("Its an anagram");
}
