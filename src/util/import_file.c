/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** import_file
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "rpg.h"

char *return_buffer_map(char *filepath)
{
    struct stat buff;
    int fd = 0;
    char *buffer = NULL;
    int len = 0;

    if (!filepath)
        return (NULL);
    stat(filepath, &buff);
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return (NULL);
    buffer = malloc(sizeof(char) * (buff.st_size + 1));
    if (!buffer)
        return (NULL);
    if (read(fd, buffer, buff.st_size) == -1)
        return (NULL);
    len = buff.st_size;
    close(fd);
    buffer[len] = '\0';
    return (buffer);
}
