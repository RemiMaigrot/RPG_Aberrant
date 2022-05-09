/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <stdbool.h>
    #include "enum.h"

typedef struct window_s {
    sfRenderWindow *wdw;
    sfVideoMode mode;
    char *name;
    float elapsed;
} window_t;

typedef struct button_s {
    int bsize;
    sfMusic *sound;
    sfVector2f position;
    sfVector2f size;
    sfVector2f sprite_pos;
    sfRectangleShape *shape;
    sfSprite *sprite;
    sfTexture *texture;
} button_t;

typedef struct all_button_s {
    button_t *new_game_b;
    button_t *load_b;
    button_t *controls_b;
    button_t *exit_b;
    button_t *settings_b;
    button_t *how_to_play_b;
    button_t *back_b;
    sfClock *clock;
    sfTime time;
    float seconds;
    bool wait;
    char *button_clicked;
} all_button_t;

typedef struct view_player_s {
    sfView *view;
    sfVector2f view_center;
    int speed_view;
} view_player_t;

typedef struct map_spawn_s {
    char **tab_map;
    sfVector2f pos;
} map_spawn_t;

typedef struct map_colorless_s {
    sfImage *image;
} map_colorless_t;

typedef struct maps_s {
    map_spawn_t *map_spawn;
    map_colorless_t *map_colorless;
} maps_t;

typedef struct stat_s {
    int shield;
    int speed_boost;
    int strenght;
    int critical;
} stat_t;

typedef struct player_s {
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float seconds;
    char *direction;
    bool attack_right;
    bool attack_left;
    int life;
    stat_t *stat;
} player_t;

typedef struct bubble_interraction_s {
    sfTexture *texture;
    sfSprite *sprite;
} bubble_interraction_t;

typedef struct dialogue_box_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f pos;
    bool can_dialogue;
    bool active;
    int index;
    char *buffer;
    char **text_dialogue;
    sfFont *font;
    sfText *text;
} dialogue_box_t;

typedef struct pnj_s {
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float seconds;
    sfCircleShape *circle;
    bubble_interraction_t *bubble;
    dialogue_box_t *dialogue_box;
} pnj_t;

typedef struct arena_potion_s {
    bool heal_top;
    bool heal_down;
    bool heal_left;
    bool heal_right;
    sfCircleShape *range_heal_top;
    sfCircleShape *range_heal_down;
    sfCircleShape *range_heal_left;
    sfCircleShape *range_heal_right;
} arena_potion_t;

typedef struct boss_s {
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float seconds;
    int life;
    sfFont *font;
    sfText *text;
    char str_life[500];
    sfCircleShape *circle_move;
    sfCircleShape *circle_atk;
    char direction;
} boss_t;

typedef struct mob_s {
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float seconds;
    int life;
    sfCircleShape *circle;
    sfFont *font;
    sfText *text;
    char str_life[10];
    bool is_alive;
} mob_t;

typedef struct object_t {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    sfVector2f scale;
    sfRectangleShape *shape;
} object_t;

typedef struct effect_s {
    sfClock *clock;
    sfTime time;
    float seconds;
    sfIntRect rect;
} effect_t;

typedef struct pause_menu_s {
    button_t *resume_b;
    button_t *exit_b;
    button_t *menu_b;
} pause_menu_t;

typedef struct settings_volume_s {
    float volume;
    sfVector2f size;
    sfVector2f pos;
    sfRectangleShape *rect_volume;
    sfMusic *theme;
    sfMusic *game_music;
    button_t *left;
    button_t *right;
} settings_volume_t;

typedef struct item_s {
    bool sword;
    bool potion;
    bool key;
    bool key_clicked;
    bool has_key;
    sfCircleShape *range_sword;
    sfCircleShape *range_potion;
    sfCircleShape *range_key;
} item_t;

typedef struct inventory_s {
    sfRectangleShape *rect;
    char *buffer;
    char **tab;
    item_t *item;
} inventory_t;

typedef struct element_particule_s {
    int speed;
    bool direction;
    sfVector2f pos;
    sfRectangleShape *shape;
    struct element_particule_s *next;
    struct element_particule_s *prev;
} element_particule_t;

typedef struct list_particule_s {
    element_particule_t *start;
    int size;
} list_particule_t;

typedef struct particle_s {
    list_particule_t *rain;
    list_particule_t *flies;
} particules_t;

typedef struct attack_s {
    int damages;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float seconds;
    sfTexture *texture_right;
    sfSprite *sprite_right;
    sfTexture *texture_left;
    sfSprite *sprite_left;
} attack_t;

typedef struct all_attack_s {
    attack_t *sword;
} all_attack_t;

typedef struct all_enemy_s {
    mob_t *mob_bat;
    mob_t *mob_alien;
    mob_t *mob_knight;
    boss_t *boss;
    pnj_t *pnj_spawn;
} all_mob_t;

typedef struct all_effect_s {
    effect_t *lantern1;
    effect_t *lantern2;
    effect_t *lantern3;
    effect_t *lantern4;
} all_effect_t;

typedef struct tp_s {
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float seconds;
    bool has_tp;
} tp_t;

typedef struct quest_s {
    char *dialogue;
    sfFont *font;
    sfText *text;
    bool active;
    bool done;
} quest_t;

typedef struct quests_s {
    quest_t *quest1;
    quest_t *quest2;
    quest_t *quest3;
    quest_t *quest4;
} quests_t;

typedef struct rpg_s {
    arena_potion_t *potion;
    maps_t *maps;
    enum_scene_t change_menu;
    view_player_t *view;
    view_player_t *view_menu;
    all_button_t *btn;
    player_t *player;
    all_mob_t *mob;
    object_t **object;
    all_effect_t *all_effect;
    pause_menu_t *pause_menu;
    settings_volume_t *set_vol;
    inventory_t *inventory;
    particules_t *particules;
    all_attack_t *attack;
    tp_t *tp_boss;
    quests_t *quests;
} rpg_t;

#endif/* !STRUCT_H_ */
