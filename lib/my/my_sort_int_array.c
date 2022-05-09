/*
** EPITECH PROJECT, 2021
** lalalalalalalalallalalalalalla
** File description:
** lalalalallfef
*/

static int min_tab(int *tab, int size, int depart)
{
    int i = depart;
    int min = tab[i];

    if (!tab)
        return 84;
    while (depart < size) {
        if (tab[depart] < min) {
            min = tab[depart];
        }
        depart = depart + 1;
    }
    return min;
}

static int min_i(int *tab, int size, int depart)
{
    int i = depart;
    int min = tab[i];
    int result;

    if (!tab)
        return 84;
    while (depart < size) {
        if (tab[depart] < min) {
            min = tab[depart];
            result = depart;
        }
        depart = depart + 1;
    }
    return result;
}

void my_sort_int_array(int *tab, int size)
{
    int i = 0;
    int min;
    int temp;
    int i_min;

    if (!tab)
        return;
    while (i < size) {
        min = min_tab(tab, size, i);
        i_min = min_i(tab, size, i);
        temp = tab[i];
        tab[i] = min;
        tab[i_min] = temp;
        i = i + 1;
    }
}
