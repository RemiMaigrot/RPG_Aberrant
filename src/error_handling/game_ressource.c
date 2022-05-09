/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-myrpg-remi.maigrot
** File description:
** check if game asset are available, return error message if missing
*/

#include <sys/stat.h>
#include <fcntl.h>
#include "rpg.h"

static int check_game_resource_npc_and_player(void)
{
    if (open("./assets/dialogue/detect.png", O_RDONLY) == -1
    || open("./assets/mob/mob_bat_spritesheet.png", O_RDONLY) == -1
    || open("./assets/mob/mob_oldman_spritesheet.png" , O_RDONLY) == -1
    || open("./assets/mob/mob_alien_spritesheet.png", O_RDONLY) == -1
    || open("./assets/mob/mob_knight_spritesheet.png", O_RDONLY) == -1
    || open("./assets/mob/boss_spritesheet.png", O_RDONLY) == -1
    || open("./assets/player/player_red_spritesheet.png", O_RDONLY) == -1
    || open("./assets/player/player_blue_sprite.png", O_RDONLY) == -1
    || open("./assets/player/player_brown_sprite.png", O_RDONLY) == -1
    || open("./assets/player/player_black_sprite.png", O_RDONLY) == -1
    || open("./assets/player/player_blue_spritesheet.png", O_RDONLY) == -1
    || open("./assets/player/player_brown_spritesheet.png", O_RDONLY) == -1
    || open("./assets/player/player_black_spritesheet.png", O_RDONLY) == -1
    || open("./assets/player/player_choice_shadow.png", O_RDONLY) == -1)
        return EPITECH_ERROR;
    return EPITECH_SUCCESS;
}

static int check_game_resource_menu_and_button(void)
{
    if (open("./assets/menu/home_sprite.jpg", O_RDONLY) == -1
    || open("./assets/menu/htp_sprite.jpg", O_RDONLY) == -1
    || open("./assets/button/button_spritesheet.png", O_RDONLY) == -1
    || open("./assets/menu/game_over.jpg", O_RDONLY) == -1
    || open("./assets/menu/dark_hud_top.png", O_RDONLY) == -1
    || open("./assets/menu/dark_hud_mid.png", O_RDONLY) == -1
    || open("./assets/menu/win.png", O_RDONLY) == -1
    || open("./assets/inventory/potion_sprite_down.png", O_RDONLY) == -1
    || open("./assets/inventory/potion_sprite_top.png", O_RDONLY) == -1
    || open("./assets/inventory/potion_sprite_left.png", O_RDONLY) == -1
    || open("./assets/inventory/potion_sprite_right.png", O_RDONLY) == -1)
        return EPITECH_ERROR;
    return EPITECH_SUCCESS;
}

static int check_game_resource_inventory_and_effect(void)
{
    if (open("./assets/effects/light_effect.png", O_RDONLY) == -1
    || open("./assets/effects/light_effect.png", O_RDONLY) == -1
    || open("./assets/effects/light_effect.png", O_RDONLY) == -1
    || open("./assets/effects/light_effect.png", O_RDONLY) == -1
    || open("./assets/effects/tp_animation.png", O_RDONLY) == -1
    || open("./assets/inventory/sword_sprite.png", O_RDONLY) == -1
    || open("./assets/inventory/potion_sprite.png", O_RDONLY) == -1
    || open("./assets/inventory/inventory_sprite.png", O_RDONLY) == -1
    || open("./assets/inventory/key_sprite.png", O_RDONLY) == -1)
        return EPITECH_ERROR;
    return EPITECH_SUCCESS;
}

static int check_game_resource_map_and_music(void)
{
    if (open("./assets/map/map_default_layer.png", O_RDONLY) == -1
    || open("./assets/map/map_layer_collision.png", O_RDONLY) == -1
    || open("./assets/map/map_colorless_layer.png", O_RDONLY) == -1
    || open("./assets/map/map_arena.png", O_RDONLY) == -1
    || open("./assets/dialogue/detect.png", O_RDONLY) == -1
    || open("./assets/dialogue/dialogue_box.png", O_RDONLY) == -1
    || open("./assets/sounds/sound_effect/click.ogg", O_RDONLY) == -1
    || open("./assets/asset_file.txt", O_RDONLY) == -1
    || open("./assets/music_file.txt", O_RDONLY) == -1
    || open("./assets/menu/credits.jpg", O_RDONLY) == -1)
        return EPITECH_ERROR;
    return EPITECH_SUCCESS;
}

int check_game_resource(void)
{
    if (check_game_resource_map_and_music() == EPITECH_ERROR
    || check_game_resource_inventory_and_effect() == EPITECH_ERROR
    || check_game_resource_menu_and_button() == EPITECH_ERROR
    || check_game_resource_npc_and_player() == EPITECH_ERROR) {
        error_message(ERROR_RESOURCE);
        return EPITECH_ERROR;
    }
    return EPITECH_SUCCESS;
}
