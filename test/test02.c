#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main(void) {
    char dest[50];
    char *ret;

    ret = ft_strcpy(dest, "Test strcpy");
    if (ret == dest && strcmp(dest, "Test strcpy") == 0)
        return 0;
    return 1;
}