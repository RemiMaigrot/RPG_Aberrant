/*
** EPITECH PROJECT, 2021
** MY_STR_ISALPHA
** File description:
** lalalala
*/

int my_str_isalpha(char const * str)
{
    int i = 0;

    if (!str)
        return 84;
    while (str[i] != '\0') {
        if (str[i] < 65 || str[i] > 90 || str[i] < 97 || str[i] > 122) {
            return (0);
        }
        i = i + 1;
    }
    return (1);
}
