/*
** EPITECH PROJECT, 2021
** MY_SWAP
** File description:
** lalalalal
*/

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int inter = *a;

    if (!a || !b)
        return;
    *a = *b;
    *b = inter;
}
