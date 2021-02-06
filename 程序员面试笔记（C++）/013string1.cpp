//013string1.cpp

#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = {""};
    char *src = "hello world";
    int result;
    
    printf("%s\n",strcpy(dest, src));
    
    result = strcmp(dest, src);
    
    if (!result)
    {
        printf("dest is equal to src");
    } else {
        printf("dest is not eaual to src");
    }

    return 0;
}