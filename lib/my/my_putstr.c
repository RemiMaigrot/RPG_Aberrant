/*
** EPITECH PROJECT, 2021
** MY_PUTSTR
** File description:
** lalalala
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;

    if (!str)
        return 84;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}
