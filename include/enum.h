/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** enum
*/

#ifndef ENUM_H_
    #define ENUM_H_

typedef enum enum_scene_s {
    MENU,
    SETTINGS,
    HOW_TO_PLAY,
    NEW_GAME,
    SAVE,
    GAME,
    CONTROLS,
    PAUSE,
    GAME_OVER,
    WIN,
} enum_scene_t;

typedef enum button_size_s {
    SMALL,
    MEDIUM,
    LARGE
} bt_size_t;

#define EPITECH_ERROR           84
#define EPITECH_SUCCESS         0
#define ERROR_RESOURCE "Failed to open file, please check the resource files\n"
#define ASSET_FILE_PATH         "./assets/asset_file.txt"
#define MUSIC_FILE_PATH         "./assets/music_file.txt"
#define INVENTORY_FILE_PATH     "./assets/inventory/inventory.txt"
#define NPC_DIALOGUE_QUEST1     "./assets/dialogue/pnj_quest1.txt"
#define NPC_DIALOGUE_QUEST3     "./assets/dialogue/pnj_quest3.txt"
#define NPC_DIALOGUE_QUEST4     "./assets/dialogue/pnj_quest4.txt"
#define MAP_SPAWN_PATH          "./assets/map/map_default_layer.png"
#define MAP_TP_PATH             "./assets/map/map_arena.png"
#define PLAYER_PATH             "./assets/player/player_red_spritesheet.png"
#define BAT_PATH                "./assets/player/mob_bat_spritesheet.png"
#define PNJ_PATH                "./assets/player/mob_oldman_spritesheet.png"
#define BUTTON_PATH             "./assets/button/button_spritesheet.png"
#define DIALOGUE_DETECT_PATH    "./assets/dialogue/detect.png"
#define ENNEMY_ALIEN_PATH       "./assets/ennemies/mob_alien_spritesheet.png"
#define ENNEMY_KNIGHT_PATH      "./assets/ennemies/mob_knight_spritesheet.png"
#define MENU_PATH               "./assets/menu/home_sprite.jpg"
#define MAP_COLORLESS           "./assets/map/map_and_arena_colorless.png"
#define DIALOGUE_BOX            "./assets/dialogue/dialogue_box.png"
#define INVENTORY_PATH          "./assets/inventory/inventory_sprite.png"
#define PATH_SWORD_RIGHT        "./assets/attack/sword_right.png"
#define PATH_SWORD_LEFT         "./assets/attack/sword_left.png"
#define ITEM_SWORD              "./assets/inventory/sword_sprite.png"
#define PATH_BOSS_PNG           "./assets/mob/mob_boss_spritesheet.png"
#define PATH_GAME_OVER          "./assets/menu/game_over.jpg"
#define PATH_VOLUME             "./assets/music/music_menu.ogg"
#define BUTTON_SOUND_PATH       "./assets/sounds/sound_effect/click.ogg"
#define PATH_MUSIC_GAME         "./assets/music/music_game.ogg"
#define FONT                    "./assets/font/Storytime.ttf"
#define QUEST1                  "./assets/quests/quest1.txt"
#define QUEST2                  "./assets/quests/quest2.txt"
#define QUEST3                  "./assets/quests/quest3.txt"
#define QUEST4                  "./assets/quests/quest4.txt"
#define LINE_DEFAULT_LAYER      0
#define LINE_COLLISION_LAYER    1
#define LINE_COLORLESS_LAYER    2
#define LINE_arena_LAYER        3
#define LINE_HOME_MENU          4
#define LINE_HTP_MENU           5
#define LINE_BUTTON_IMG         6
#define LINE_DIALOGUE           7
#define LINE_MOB_BAT            8
#define LINE_MOB_OLDMAN         9
#define LINE_MOB_ALIEN          10
#define LINE_MOB_KNIGHT         11
#define LINE_MOB_BOSS           12
#define LINE_PLAYER_RED         13
#define LINE_PLAYER_BLUE_RECT   14
#define LINE_PLAYER_BROWN_RECT  15
#define LINE_PLAYER_BLACK_RECT  16
#define LINE_PLAYER_BLUE        17
#define LINE_PLAYER_BROWN       18
#define LINE_PLAYER_BLACK       19
#define LINE_CHOICE_SHADOW      20
#define LINE_LIGHT_EFFECT1      21
#define LINE_LIGHT_EFFECT2      22
#define LINE_LIGHT_EFFECT3      23
#define LINE_LIGHT_EFFECT4      24
#define LINE_TP_TO_ARENA        25
#define LINE_ITEM_SWORD         26
#define LINE_ITEM_POTION        27
#define LINE_INVENTORY          28
#define LINE_GAME_OVER          29
#define LINE_ITEM_KEY           30
#define LINE_HUD_TOP            31
#define LINE_HUD_MID            32
#define LINE_DIALOGUEBOX        33
#define LINE_WIN                34
#define LINE_CREDITS            35
#define LINE_ITEM_POTION_TOP    36
#define LINE_ITEM_POTION_RIGHT  37
#define LINE_ITEM_POTION_LEFT   38
#define LINE_ITEM_POTION_DOWN   39

#endif/* !ENUM_H_ */
