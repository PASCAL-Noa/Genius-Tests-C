#include <string.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int main(void) {
    char *str;
    char *src = "Test strdup";

    str = ft_strdup(src);
    if (str && strcmp(str, src) == 0 && str != src) {
        free(str);
        return 0;
    }
    if (str)
        free(str);
    return 1;
}