/*
** EPITECH PROJECT, 2021
** MY_STRNCMP
** File description:
** alalla
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (!s1 || !s2)
        return 84;
    while (s1[i] == s2[i] && s1[i] && s2[i] && i + 1 < n)
        i++;
    return (s1[i] - s2[i]);
}
