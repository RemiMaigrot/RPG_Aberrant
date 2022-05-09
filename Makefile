##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile
##

SRC_ARENA		=	arena_handling/manage_arena.c	\
					arena_handling/manage_tp_to_arena.c	\
					arena_handling/move_rect_tp.c \
					arena_handling/potion/arena_potion_inventory.c	\
					arena_handling/potion/display_potion.c	\
					arena_handling/potion/init_arena_potion.c	\
					arena_handling/potion/manage_potion.c	\
					arena_handling/potion/radius_potion.c	\
					arena_handling/potion/display_on_inventory.c

SRC_COLLISION	=	collision_handling/manage_collision.c \
					collision_handling/collision_up.c \
					collision_handling/collision_down.c \
					collision_handling/collision_right.c \
					collision_handling/collision_left.c	\
					collision_handling/collision_mob.c	\
					collision_handling/collision_oldman.c	\
					collision_handling/dialogue_with_oldman.c

SRC_EFFECT		=	effect/manage_effect.c \
					effect/move_rect_effect.c

SRC_ERROR 		=	error_handling/argument.c \
					error_handling/env_variable.c \
					error_handling/game_ressource.c \
					error_handling/manage_error.c

SRC_EVENT		=	event_handling/event_button_control.c \
					event_handling/event_button_exit.c \
					event_handling/event_button_htp.c \
					event_handling/event_button_new_game.c \
					event_handling/event_button_save.c \
					event_handling/event_button_settings.c \
					event_handling/event_button.c \
					event_handling/event_change_skin.c \
					event_handling/keyboard_event.c	\
					event_handling/manage_all_event.c \
					event_handling/mouse_event.c

SRC_INSTANCE 	=	instance/main.c \
					instance/window.c

SRC_INIT 		=	initialization/init_all.c	\
					initialization/asset/init_asset.c \
					initialization/button/init_button.c \
					initialization/button/init_tab_button.c \
					initialization/effect/init_effect.c \
					initialization/effect/init_particules_color.c \
					initialization/effect/init_particules.c \
					initialization/effect/init_rect_effect.c \
					initialization/effect/init_tp.c \
					initialization/inventory/init_inventory.c \
					initialization/inventory/init_items.c \
					initialization/map/init_all_maps.c \
					initialization/menu/init_pause_menu.c \
					initialization/menu/init_volume.c \
					initialization/mob/init_all_mob.c \
					initialization/mob/init_bat.c \
					initialization/mob/init_boss.c \
					initialization/mob/init_enemy_life.c \
					initialization/mob/init_enemy.c \
					initialization/mob/init_mob_oldman.c \
					initialization/mob/init_rect_pnj.c \
					initialization/player/init_player.c \
					initialization/player/init_attack.c \
					initialization/view/init_view.c \
					initialization/quest/init_all_quest.c \
					initialization/quest/init_quest.c

SRC_INVENTORY	=	inventory_handling/inventory_is_clicked.c \
					inventory_handling/get_item.c \
					inventory_handling/manage_inventory.c \
					inventory_handling/inventory_arena_is_clicked.c \
					inventory_handling/bool_arena_is_clicked.c \
					inventory_handling/manage_inventory_items.c

SRC_LOOP 		=	loop/loop_game.c \
					loop/loop_event.c

SRC_MENU		=	menu_handling/manage_controls_menu.c \
					menu_handling/how_to_play/manage_how_to_play_menu.c	\
					menu_handling/manage_button/button_animation.c		\
					menu_handling/manage_button/button_choice.c			\
					menu_handling/manage_button/button_is_clicked.c	\
					menu_handling/manage_button/button_effect/effect_back.c	\
					menu_handling/manage_button/button_effect/effect_load.c	\
					menu_handling/manage_button/button_effect/effect_ctrl.c	\
					menu_handling/manage_button/button_effect/effect_exit.c	\
					menu_handling/manage_button/button_effect/effect_htp.c	\
					menu_handling/manage_button/button_effect/effect_ng.c	\
					menu_handling/manage_button/button_effect/effect_sett.c	\
					menu_handling/manage_button/button_effect/manage_e_btn.c \
					menu_handling/player_choice/manage_player_choice.c \
					menu_handling/save/manage_save_menu.c

SRC_MOBS		=	mob_handling/manage_all_mob.c \
					mob_handling/manage_mob_movement.c \
					mob_handling/manage_mob_radius.c \
					mob_handling/manage_alien/manage_mob_alien.c \
					mob_handling/manage_alien/mob_alien_range.c \
					mob_handling/manage_alien/mob_alien_stats.c \
					mob_handling/manage_alien/mob_alien_tracking.c \
					mob_handling/manage_bat/manage_mob_bat.c \
					mob_handling/manage_bat/mob_bat_stats.c \
					mob_handling/manage_bat/mob_bat_movement.c \
					mob_handling/manage_bat/mob_bat_tracking.c \
					mob_handling/manage_knight/manage_mob_knight.c \
					mob_handling/manage_knight/mob_knight_tracking.c \
					mob_handling/manage_oldman/pnj_spawn.c \
					mob_handling/manage_boss/manage_mob_boss.c	\
					mob_handling/manage_boss/boss_movement.c	\
					mob_handling/manage_boss/boss_tracking.c \
					mob_handling/manage_boss/boss_animation.c \
					mob_handling/manage_boss/manage_boss_speed.c

SRC_MOVE		=	movement_handling/move_player.c \
					movement_handling/move_rect.c

SRC_PARSING		=	parsing/is_alpha.c	\
					parsing/my_strndup.c	\
					parsing/str_to_tab_path.c

SRC_PAUSE		=	pause_menu/manage_pause.c

SRC_PLAYER		=	player_handling/attack/damage_attack_enemy.c \
					player_handling/attack/damages_of_sword.c \
					player_handling/attack/manage_attack.c \
					player_handling/attack/move_rect_attack.c \
					player_handling/attack/damage_sword_bat.c \
					player_handling/manage_player_attack.c \
					player_handling/manage_player.c \
					player_handling/quest/manage_quest.c \
					player_handling/quest/manage_all_quest.c

SRC_SCENE		=	scene_handling/manage_scene.c \
					scene_handling/game_scene.c \
					scene_handling/menu_scene.c \
					scene_handling/controls_scene.c \
					scene_handling/how_to_play_scene.c \
					scene_handling/settings_scene.c \
					scene_handling/load_scene.c \
					scene_handling/particule_scene.c \
					scene_handling/view_scene.c \
					scene_handling/game_over_scene.c \
					scene_handling/display_hud.c \
					scene_handling/win_scene.c

SRC_SETTINGS	=	settings_handling/manage_settings_menu.c \
					settings_handling/all_settings.c

SRC_UTIL		=	util/import_file.c \
					util/int_to_str.c \
					util/my_str_to_path.c \
					util/error_message.c

SRC 			=	$(SRC_COLLISION) \
					$(SRC_EFFECT) \
					$(SRC_ERROR) \
					$(SRC_EVENT) \
					$(SRC_LOOP) \
					$(SRC_INSTANCE) \
					$(SRC_INIT) \
					$(SRC_INVENTORY) \
					$(SRC_MENU) \
					$(SRC_MOBS) \
					$(SRC_MOVE) \
					$(SRC_PAUSE) \
					$(SRC_PLAYER) \
					$(SRC_PARSING) \
					$(SRC_SCENE) \
					$(SRC_ARENA) \
					$(SRC_SETTINGS)	\
					$(SRC_UTIL)

OBJ				=	$(addprefix src/, $(SRC:.c=.o))

NAME			=	my_rpg

CFLAGS			=	-Wall -Wextra
CPPFLAGS		=	-I./include
LDFLAGS			=	-L lib/my -lmy

CSFMLFLAGS		=	-l csfml-system \
					-l csfml-graphics \
					-l csfml-window \
					-l csfml-audio

$(NAME):	$(OBJ)
	make -C lib/my/
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(CSFMLFLAGS) $(LDFLAGS) $(CPPLAGS)

debug: fclean
debug: CFLAGS += -ggdb3
debug: $(NAME)

clean:
	$(RM) $(OBJ)
	$(RM) *~ *#

fclean: clean
	$(RM) lib/libmy.a
	$(RM) $(NAME)

all:	$(NAME) clean

re:	fclean all

.PHONY: all clean fclean debug re
