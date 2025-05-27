#include<stdio.h>
#include<string.h>
int main(){
  char arr2[10];
  scanf("%s",arr2);
  char arr[20];
  strcpy(arr2,arr);
  int x=strlen(arr2);
  for(int i=0;i<x/2;i++){
      int y=x-1-i;
      char t=arr2[1];
      arr2[i]=arr[y];
      arr2[y]=t;
      
  }
  int a=strcmp(arr,arr2);
  if(a==0){
      printf("it is a palindrome");
  }
  else{
      printf("not a palindrome");
  }
  return 0;
   
}