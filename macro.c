#include <stdio.h>

#define PRINT(a) printf("%d\n",a)
#define LOOP(v,s,e) for (int v = s; v <= e; v++)\
{
   #define ENDLOOP \
}

int main(int argc, char const *argv[])
{
    LOOP(counter,1,10)
        PRINT(counter);
    ENDLOOP

    return 0;
}





// #include<stdio.h>
// #define ADD(a,b) a+b

// int main(int argc, char const *argv[])
// {
//     int x = 2;
//     int y = 3;
//     int z = ADD(x,y);
//     printf("Soluton %d: ",z);
//     return 0;
// }

// #include <stdio.h>

// #define CODE \ printf("%d\n",i);

// int main(int argc, char const *argv[])
// {
//     int i = 4;
//     CODE
//     return 0;
// }
