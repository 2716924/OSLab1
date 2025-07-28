#include<stdio.h>
#include<string.h>

int main(int argc,char **argv)
{ 
    char *string = argv[1];
    //printf("Input your string:");
    //scanf("%s",string);

    int length = strlen(string);
    //printf("%d",length);

    while (length >0){
        printf("%c",string[length-1]);
        length--;
    }
}