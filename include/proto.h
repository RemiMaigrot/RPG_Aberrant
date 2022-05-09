/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-mydefender-evan.lacoste
** File description:
** my RPG
*/

#ifndef PROTO_H_
    #define PROTO_H_

void error_message(char const *str);
char **my_str_to_tab_path(char const *str);
int is_alphanum_array(const char *str, const char sep, int index);
char *my_strndup(char const *src, int n);
char **str_to_tab_path(char *str, const char sep);
void convert_int_to_str(char str[], int nb);
int my_rpg();
int check_env(char const *env[]);
int check_game_resource(void);
char *open_read_file(char *file);
void convert_int_to_str(char str[], int nb);
int check_arg(int argc, char const *argv[]);
char *return_buffer_map(char *filepath);
int print_map(char **map);
int manage_error_handling(int argc, char const *argv[], char const *env[]);

#endif/* PROTO_H_ */
