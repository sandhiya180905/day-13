#include<stdio.h>
#include<string.h>
int main(){
    char arr[30];
    scanf("%s",arr);
    int x=strlen(arr);
    for(int i=0;i<x/2;i++){
        int y=x-1-i;
        char t=arr[i];
        arr[i]=arr[y];
        arr[y]=t;
    }
    printf("%s",arr);
    return 0;
   
}