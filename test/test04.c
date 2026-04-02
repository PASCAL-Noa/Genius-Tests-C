void ft_sort_int_tab(int *tab, int size);

int main(void) {
    int tab[6] = {5, -2, 4, 1, 3, -2};
    int expected[6] = {-2, -2, 1, 3, 4, 5};
    int i;

    ft_sort_int_tab(tab, 6);
    i = 0;
    while (i < 6) {
        if (tab[i] != expected[i])
            return 1;
        i++;
    }
    return 0;
}