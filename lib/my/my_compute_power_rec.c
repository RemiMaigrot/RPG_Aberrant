/*
** EPITECH PROJECT, 2021
** MY_COMPUTE_POWER_REC
** File description:
** lalalal
*/

int my_compute_power_rec(int nb, int p)
{
    int result;

    if (p == 0) {
        return (1);
    } else if (p < 0) {
        return (0);
    } else {
        result = nb * my_compute_power_rec(nb, p - 1);
    }
    return result;
}
