#include "utils.h"
#include <stdio.h>
#include <string.h>
#define _BUFFER_MAX 255
char buffer[255] = {0};
int bufferSize = 0;

int SetBuffer(const char* content,int inputSize){
    if(inputSize > _BUFFER_MAX){
        return -1;
    }
    bufferSize = inputSize;
    return memcpy(buffer,content,inputSize);
}

void PrtBuffer(void){
    for(int i = 0;i < bufferSize;i++){
        printf("%c",buffer[i]);
    }
    printf("\n");
}

int GetBuffer(char* dest,int destSizeMax){
    if(bufferSize > destSizeMax){
        return -1;
    }
    return memcpy(dest,buffer,bufferSize);
}
int GetSize(void){

    return bufferSize;
}
// int GetCurrentBufferSize(void){
//     return bufferSize;
// }
