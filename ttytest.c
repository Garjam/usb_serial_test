#include<stdio.h>
#include "Serial.h"
#include<stdbool.h>
#include<unistd.h>
int main(int argc, char* argv[])
{
    FILE *fp;
    int fd = 0;
    if (argv[1] != NULL) {
        printf("dev:\"%s\"\n",argv[1]);
        fflush(stdout);
        eSerial_Init(argv[1], 9600, &fd);
        fflush(stdout);
    }

    printf("========%d======\n",__LINE__);
        fflush(stdout);
    while(true) {
        eSerial_Write('a');
        usleep(200);
    }
    printf("Can't open \"%s\"",argv[1]);    
}
