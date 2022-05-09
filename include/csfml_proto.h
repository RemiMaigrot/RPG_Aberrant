/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** csfml_proto
*/

#ifndef CSFML_PROTO_H_
    #define CSFML_PROTO_H_

    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <stdbool.h>
    #include "struct.h"

rpg_t *init_game(void);
boss_t *init_boss(rpg_t *game, int pos_x, int pos_y);
int init_asset(rpg_t *game);
player_t *init_player(rpg_t *game);
sfRenderWindow *create_window(void);
view_player_t *init_view(void);
view_player_t *init_view_menu(void);
pause_menu_t *init_pause_menu(void);
settings_volume_t *init_volume(void);
mob_t *init_bat(rpg_t *game, int pos_x, int pos_y);
pnj_t *init_mob_oldman(rpg_t *game, int pos_x, int pos_y);
mob_t *init_knight(rpg_t *game, int pos_x, int pos_y);
mob_t *init_alien(rpg_t *game, int pos_x, int pos_y);
all_mob_t *init_all_mob(rpg_t *game);
all_effect_t *init_all_effect(rpg_t *game);
inventory_t *init_inventory(rpg_t *game);
item_t *init_item(void);
all_attack_t *init_all_attack(void);
tp_t *init_tp_to_arena(rpg_t *game);
int check_struct_pointeur(rpg_t *game);
quests_t *init_all_quest(void);
quest_t *init_quest(char *dialogue);
int manage_click_all_potion_arena(rpg_t *game, sfVector2i mouse_pos);
arena_potion_t *init_arena_potion(rpg_t *game);
arena_potion_t *init_arena_potion_radius_top_down(arena_potion_t *potion);
arena_potion_t *init_arena_potion_radius_left_right(arena_potion_t *potion);
int display_item_arena_on_inventory(sfRenderWindow *window, rpg_t *game);
int display_arena_potion(sfRenderWindow *window, rpg_t *game);
bool player_in_potion_top_radius(rpg_t *game, sfCircleShape *circle);
bool player_in_potion_down_radius(rpg_t *game, sfCircleShape *circle);
bool player_in_potion_left_radius(rpg_t *game, sfCircleShape *circle);
bool player_in_potion_right_radius(rpg_t *game, sfCircleShape *circle);
int retrieve_potion_arena_top(rpg_t *game);
int retrieve_potion_arena_down(rpg_t *game);
int retrieve_potion_arena_left(rpg_t *game);
int retrieve_potion_arena_right(rpg_t *game);
int manage_view(sfRenderWindow *window, rpg_t *game);
bool collision_pixel_up(rpg_t *game, int limit_x, int y, sfFloatRect rect_up);
maps_t *init_all_maps(rpg_t *game);
int manage_tp(rpg_t *game, sfRenderWindow *window);
int display_tp(sfRenderWindow *window, rpg_t *game);
int move_rect_tp(rpg_t *game, int offset, int max_value, int pos_top);
int manage_arena(sfRenderWindow *window, rpg_t *game);
int manage_pause_scene(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos);
int manage_scene(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos);
int manage_game_scene(sfRenderWindow *window, rpg_t *game);
int manage_menu_scene(sfRenderWindow *window, rpg_t *game);
int manage_controls_scene(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos);
int manage_how_to_play_scene(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos);
int manage_load_scene(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos);
int manage_settings_scene(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos);
int manage_controls_menu(rpg_t *game, sfVector2i mouse_pos);
int manage_settings_menu(rpg_t *game, sfVector2i mouse_pos);
int manage_how_to_play_menu(rpg_t *game, sfVector2i mouse_pos);
int manage_game_over(sfRenderWindow *window,
rpg_t *game, sfVector2i mouse_pos);
int display_menu_hud(sfRenderWindow *window, rpg_t *game);
int manage_win_scene(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos);
int manage_event_button_controls(rpg_t *game, sfVector2i mouse_pos);
int manage_event_menu_button(rpg_t *game, sfVector2i mouse_pos);
int manage_event_button_load(rpg_t *game, sfVector2i mouse_pos);
int manage_event_button_htp(rpg_t *game, sfVector2i mouse_pos);
int manage_event_button_exit(rpg_t *game, sfVector2i mouse_pos);
int manage_event_button_settings(rpg_t *game, sfVector2i mouse_pos);
int manage_event_button_new_game(rpg_t *game, sfVector2i mouse_pos);
int manage_volume(rpg_t *game, sfVector2i mouse_pos);
int manage_vol_rect_left(rpg_t *game, sfVector2i mouse_pos);
int manage_vol_rect_right(rpg_t *game, sfVector2i mouse_pos);
int manage_hover_skin(int type, sfVector2i mouse_pos);
int manage_hover(button_t *button, sfVector2i mouse_pos);
int manage_change_skin(rpg_t *game, sfVector2i mouse_pos);
char **init_button_rsc2(char *sound, char *texture);
int manage_clicked_button_pause(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos);
int effect_btn_back(rpg_t *game);
int effect_btn_exit(sfRenderWindow *window, rpg_t *game);
int effect_btn_ctrl(rpg_t *game);
int effect_btn_htp(rpg_t *game);
int effect_btn_load(rpg_t *game);
int effect_btn_new_game(rpg_t *game);
int effect_btn_setting(rpg_t *game);
int manage_effect_btn_click(sfRenderWindow *window, rpg_t *game);
int init_buttons(rpg_t *game);
int init_button_choice(rpg_t *game);
int manage_hover_button(rpg_t *game, sfVector2i mouse_pos);
int mouse_hover_button(button_t *button, sfVector2i mouse_pos);
bool button_is_clicked(button_t *button, sfVector2i mouse_pos);
int init_button_shape(button_t **button, int size, char **tab);
int init_button(button_t **button, sfVector2f position, int size, char **tab);
int manage_clicked_button_game_over(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos);
int manage_player_choice_menu(rpg_t *game);
int manage_save_menu(rpg_t *game, sfVector2i mouse_pos);
int manage_all_event(sfRenderWindow *window, rpg_t *game, sfEvent event,
sfVector2i mouse_pos);
int event_menu(rpg_t *game, sfVector2i mouse_pos);
int manage_event_menu_button(rpg_t *game, sfVector2i mouse_pos);
int loop_event(sfRenderWindow *window, rpg_t *game, sfVector2i mouse_pos);
int mouse_event_in_menu(rpg_t *game, sfEvent event, sfVector2i mouse_pos);
int mouse_event_in_game(sfRenderWindow *window, rpg_t *game, sfEvent event,
sfVector2i mouse_pos);
int mouse_on_button(button_t *button);
int mouse_not_on_button(button_t *button);
int keyboard_event(rpg_t *game, sfEvent event);
int press_escape_to_pause(rpg_t *game);
int press_e_to_dialogue(rpg_t *game);
int manage_hover_button_game_over(rpg_t *game, sfVector2i mouse_pos);
int show_button_game_over(sfRenderWindow *window, rpg_t *game,
sfVector2i mouse_pos);
int manage_inventory(sfRenderWindow *window, rpg_t *game);
int retrieve_item(rpg_t *game);
int manage_inventory_item(rpg_t *game, sfVector2i mouse_pos);
bool potion_inventory_is_clicked(rpg_t *game, sfVector2i mouse_pos);
bool key_inventory_is_clicked(rpg_t *game, sfVector2i mouse_pos);
int manage_all_mob(sfRenderWindow *window, rpg_t *game);
bool player_in_mob_radius(rpg_t *game, sfCircleShape *circle);
int mob_movement(mob_t *mob, int offset, int max_value, int pos_top);
int mob_bat_speed(rpg_t *game);
int track_bat(rpg_t *game, mob_t *bat);
int mob_bat_attack(rpg_t *game, mob_t *bat);
int mob_bat_life(sfRenderWindow *window, rpg_t *game);
int manage_mob_bat(sfRenderWindow *window, rpg_t *game);
bool detect_bat(rpg_t *game, mob_t *bat, player_t *player);
int init_life_mob_bat(mob_t *mob, int pos_x, int pos_y);
int mob_bat_movement(rpg_t *game, int offset, int max_value, int pos_top);
int track_mob_knight(rpg_t *game, mob_t *mob);
int manage_mob_knight(sfRenderWindow *window, rpg_t *game);
int init_life_mob_knight(mob_t *mob, int pos_x, int pos_y);
bool radius_around_knight(rpg_t *game, sfCircleShape *circle);
int track_alien(rpg_t *game, mob_t *mob);
int mob_alien_life(sfRenderWindow *window, rpg_t *game);
int mob_alien_speed(sfRenderWindow *window, rpg_t *game);
int manage_mob_alien(sfRenderWindow *window, rpg_t *game);
bool radius_around_alien(rpg_t *game, sfCircleShape *circle);
int init_life_mob_alien(mob_t *mob, int pos_x, int pos_y);
int mob_alien_attack(sfRenderWindow *window, rpg_t *game, mob_t *mob);
int init_boss_tracking(rpg_t *game, boss_t *boss);
int manage_boss_tracking(rpg_t *game);
int manage_boss(sfRenderWindow *window, rpg_t *game);
int boss_movement(sfRenderWindow *window, rpg_t* game);
int move_rect_boss_right(rpg_t *game, int offset, int max_value, int pos_top);
int show_life_boss(sfRenderWindow *window, rpg_t *game);
int manage_boss_speed(rpg_t *game);
int move_rect_boss_left(rpg_t *game, int offset, int max_value, int pos_top);
int move_rect_boss_attack_right(rpg_t *game, int offset, int max_value,
int pos_top);
int move_rect_boss_attack_left(rpg_t *game, int offset, int max_value,
int pos_top);
int manage_boss_speed(rpg_t *game);
int show_life_boss(sfRenderWindow *window, rpg_t *game);
int dialogue_with_oldman(rpg_t *game, pnj_t *pnj);
bool collision_dialogue(rpg_t *game, pnj_t *pnj);
int manage_mob_oldman(sfRenderWindow *window, rpg_t *game);
int manage_dialogue_mob_oldman(sfRenderWindow *window, rpg_t *game);
int manage_speed_mob_oldman(sfRenderWindow *window, rpg_t *game);
sfIntRect init_rect_mob_oldman(int t, int l, int w, int h);
int damages_on_ennemy(rpg_t *game);
int damages_of_sword(rpg_t *game);
int manage_damage_enemy(sfRenderWindow *window, rpg_t *game);
int move_player(sfRenderWindow *window, rpg_t *game);
int manage_player_life(rpg_t *game);
int player_attacking(rpg_t *game);
int manage_attack_player(sfRenderWindow *window, rpg_t *game);
int move_rect_attack(rpg_t *game, int offset, int max_value);
int movement_rect_right(rpg_t *game, int offset, int max_value, int pos_top);
int movement_rect_left(rpg_t *game, int offset, int max_value, int pos_top);
int movement_rect_up(rpg_t *game, int offset, int max_value, int pos_top);
int movement_rect_down(rpg_t *game, int offset, int max_value, int pos_top);
int move_rect_default(rpg_t *game, int offset, int max_value);
bool check_right_collision(rpg_t *game);
bool check_left_collision(rpg_t *game);
bool check_up_collision(rpg_t *game);
bool check_down_collision(rpg_t *game);
bool collision_pixel_up(rpg_t *game, int limit_x, int y, sfFloatRect rect_up);
bool collision_pixel_down(rpg_t *game, int limit_x, int y,
sfFloatRect rect_down);
bool collision_pixel_left(rpg_t *game, int limit_x, int y,
sfFloatRect rect_left);
bool collision_pixel_right(rpg_t *game, int limit_x, int y,
sfFloatRect rect_right);
bool collision_pixel_up(rpg_t *game, int limit_x, int y,
sfFloatRect rect_right);
int manage_quest(sfRenderWindow *window, rpg_t *game);
int init_particule_color_rain(sfRectangleShape *shape_rain,
element_particule_t *new);
int init_particule_color_flies(sfRectangleShape *shape_rain,
element_particule_t *new);
particules_t *init_particules(void);
void add_elt_rain(list_particule_t *list_rain);
sfIntRect init_rect_effect(void);
int draw_particules(sfRenderWindow *window, rpg_t *game);
void draw_particules_flies(sfRenderWindow *window, rpg_t *game);
int manage_effect(sfRenderWindow *window, rpg_t *game);
int light_movement(rpg_t *game, int offset, int max_value, effect_t *effect);
int manage_click_all_potion_arena(rpg_t *game, sfVector2i mouse_pos);
int display_arena_potion_inventory(sfRenderWindow *window, rpg_t *game);
bool potion_left_inventory_is_clicked(rpg_t *game, sfVector2i mouse_pos);
bool potion_right_inventory_is_clicked(rpg_t *game, sfVector2i mouse_pos);
bool potion_down_inventory_is_clicked(rpg_t *game, sfVector2i mouse_pos);
bool potion_top_inventory_is_clicked(rpg_t *game, sfVector2i mouse_pos);
int damage_of_sword_boss(rpg_t *game);
int display_arena_potion_inventory(sfRenderWindow *window, rpg_t *game);
int manage_inventory_sword_p(sfRenderWindow *window, rpg_t *game);
bool collision_sword_boss(rpg_t *game);
bool collision_sword_bat(rpg_t *game);
int manage_quest4(sfRenderWindow *window, rpg_t *game);
int manage_quest5(sfRenderWindow *window, rpg_t *game);
int manage_quest2(sfRenderWindow *window, rpg_t *game);
int manage_quest1(sfRenderWindow *window, rpg_t *game);
int manage_quest3(rpg_t *game);

#endif/* !CSFML_PROTO_H_ */
