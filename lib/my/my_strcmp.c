/*
** EPITECH PROJECT, 2021
** MY_STRCMP
** File description:
** lalalala en bas laaa
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (!s1 || !s2)
        return 84;
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] > s2[i])
            return (s1[i] - s2[i]);
        else if (s1[i] < s2[i])
            return (s1[i] - s2[i]);
        else
            ++i;
    }
    return (0);
}
