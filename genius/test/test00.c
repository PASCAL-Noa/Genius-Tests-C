#include <stdio.h>
#include <string.h>

void ft_putstr(char *str);

int main(void) {
    FILE *file;
    char buffer[128] = {0};

    freopen("out00.txt", "w", stdout);
    ft_putstr("G E N I U S");
    fclose(stdout);

    file = fopen("out00.txt", "r");
    if (!file)
        return 1;
    fgets(buffer, 128, file);
    fclose(file);

    if (strcmp(buffer, "G E N I U S") == 0)
        return 0;
    return 1;
}