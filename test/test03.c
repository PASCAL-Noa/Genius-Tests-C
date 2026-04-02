#include <string.h>

char *ft_strcapitalize(char *str);

int main(void) {
    char str[] = "salut, comment tu vas ? 67mots soixante-deux; cinquante+et+un; genius";
    char expected[] = "Salut, Comment Tu Vas ? 67mots Soixante-Deux; Cinquante+Et+Un; Genius";
    char *ret;

    ret = ft_strcapitalize(str);
    if (ret == str && strcmp(str, expected) == 0)
        return 0;
    return 1;
}