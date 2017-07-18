#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char simbol = 'A';
    size_t count = 100;
    printf("%s", (char*)memset(memset(malloc(count+1),'\0', (count+1)), simbol, count));
    return 0;
}