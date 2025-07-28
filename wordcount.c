#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    if(argc != 2){
        printf("Usage: %s \"sentence\"\n", argv[0]);    
        return 1;
    }
    char buffer[1024];
    //char *strncpy(char *dest, const char *src, size_t n);
    strncpy(buffer, argv[1], sizeof(buffer) - 1);
    buffer[sizeof(buffer)-1] = '\0';

    char *token = strtok(buffer, " ");
    int count = 0;

    while(token != NULL){
        count++;
        token = strtok(NULL, " "); //get the next word
    }

    printf("Number of words are %d",count);
    return 0;

}