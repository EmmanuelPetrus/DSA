#include <stdio.h>
#include <string.h>

#define CMD(NAME) \
    char NAME ## _cmd[256] = "";\
    strcpy(NAME ## _cmd,#NAME);

int main(int argc, char const *argv[])
{
    CMD(copy)
    CMD(paste)
    CMD(cut)

    char cmd[256];
    scanf("%s",cmd);
    return 0;
}
