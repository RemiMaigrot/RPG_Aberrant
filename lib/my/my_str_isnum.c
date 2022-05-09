/*
** EPITECH PROJECT, 2021
** MY_STR_ISNUM
** File description:
** lalalalla
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    if (!str)
        return 84;
    while (str[i] != '\0') {
        if (str[i] < 48 || str[i] > 57) {
            return (0);
        }
        i = i + 1;
    }
    return (1);
}
