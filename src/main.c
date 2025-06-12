#include <stdio.h>
#include "utils.h"

int main(){
    char con[] = "data 1"; 
    char buf[2000] = {0};
    SetBuffer(con,strlen(con));
    PrtBuffer();
    GetBuffer(buf,2000);
    printf("%d\n",GetSize());
    //printf("%s\n",buf);
    return 0;
}