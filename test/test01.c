#include <stdio.h>
#include <string.h>

void ft_putnbr(int nb);

int main(void) {
    FILE *file;
    char buffer[128] = {0};

    freopen("out01.txt", "w", stdout);
    ft_putnbr(-2147483648);
    fclose(stdout);

    file = fopen("out01.txt", "r");
    if (!file)
        return 1;
    fgets(buffer, 128, file);
    fclose(file);

    if (strcmp(buffer, "-2147483648") == 0)
        return 0;
    return 1;
}