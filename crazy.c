#include <stdio.h>
#include <string.h>

#define CMD(NAME) \
    char NAME ## _cmd[256] = "";\
    strcpy(NAME ## _cmd,#NAME);\
    printf("%s\n",NAME ## _cmd);

int main(int argc, char const *argv[])
{
    CMD(copy)
    CMD(paste)
    CMD(cut)

    char cmd[256];
    // printf("%s",cmd);
    // scanf("%s",cmd);
    // printf("%s",cmd);
    return 0;
}
