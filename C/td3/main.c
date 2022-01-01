#include <stdio.h>
#include "esi.h"

int main()
{
    char * chaine = "Hello";
    printf("%llu\n", xstrlen(chaine));

    char * lhs = "Hello World!";
    char * rhs = "Hello there";

    int rc = xstrcmp(lhs, rhs);
    if(rc == 0)
        printf("[%s] equals [%s]\n", lhs, rhs);
    else if(rc < 0)
        printf("[%s] precedes [%s]\n", lhs, rhs);
    else if(rc > 0)
        printf("[%s] follows [%s]\n", lhs, rhs);

    char * src = "Copy this!";
    char dst[xstrlen(src) + 1];
    xstrcpy(dst, src);
    printf("%s\n", dst);

    char dst2[xstrlen(src) + 1];
    xstrncpy(dst2, src, 2);
    printf("%s\n", dst2);

    char dst3[30] = "Copie right there ->";
    xstrcat(dst3, src);
    printf("test xstrcat : %s\n", dst3);

    char dst4[30] = "Copie right there ->";
    xstrncat(dst4, src, 3);
    printf("test xstrncat :  %s\n", dst4);

    char dst5[] = "Hello World!";
    char delim[] = " ";
    printf("%s\n", dst5);
    xstrtok(dst5, delim);
    printf("%s", dst5);
}
