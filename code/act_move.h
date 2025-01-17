#ifndef ACT_MOVE_H
#define ACT_MOVE_H

#include <sys/types.h>
#include <sys/time.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "merc.h"
#include "magic.h"
#include "recycle.h"
#include "interp.h"
#include "tables.h"
#include "spec.h"

/* command procedures needed */
DECLARE_DO_FUN(do_wear);
DECLARE_DO_FUN(do_look);
DECLARE_DO_FUN(do_cb);
DECLARE_DO_FUN(do_recall);
DECLARE_DO_FUN(do_visible);
DECLARE_DO_FUN(do_stand);
DECLARE_DO_FUN(do_camp);
DECLARE_DO_FUN(do_animal_call);
DECLARE_DO_FUN(do_say);
DECLARE_DO_FUN(do_slay);
DECLARE_DO_FUN(do_yell);
DECLARE_DO_FUN( do_door_bash);
DECLARE_DO_FUN(do_open);
DECLARE_DO_FUN(do_pick);
DECLARE_AFF_FUN(poison_tick);
DECLARE_AFF_FUN(quicksand_pulse_sink);

int	find_door (CHAR_DATA *ch, char *arg);
bool has_key (CHAR_DATA *ch, int key);
void trip_trap (CHAR_DATA *ch, ROOM_INDEX_DATA *room, TRAP_DATA *trap);
void trap_execute (CHAR_DATA *victim, ROOM_INDEX_DATA *room, TRAP_DATA *trap);
bool check_barred (CHAR_DATA *ch, ROOM_INDEX_DATA *to_room);
bool bar_entry (CHAR_DATA *ch, CHAR_DATA *blocker, ROOM_INDEX_DATA *to_room);
void parse_bar (char *buf, const char *str, CHAR_DATA *ch, CHAR_DATA *blocker, ROOM_INDEX_DATA *to_room);
RUNE_DATA *find_rune (void *vo, int target_type, int trigger_type, RUNE_DATA *rune_prev);
AFFECT_DATA *affect_find (AFFECT_DATA *paf, int sn);
bool is_land (ROOM_INDEX_DATA *room);
void add_tracks	(ROOM_INDEX_DATA *room, CHAR_DATA *ch, int direction);
void track_attack (CHAR_DATA *mob, CHAR_DATA *victim);

void drowning_tick (CHAR_DATA *ch, AFFECT_DATA *af);
void check_waterbreath (CHAR_DATA *ch, ROOM_INDEX_DATA *to_room);
void move_char (CHAR_DATA *ch, int door, bool automatic, bool fcharm);
void do_north (CHAR_DATA *ch, char *argument);
void do_east (CHAR_DATA *ch, char *argument);
void do_south (CHAR_DATA *ch, char *argument);
void do_west (CHAR_DATA *ch, char *argument);
void do_up (CHAR_DATA *ch, char *argument);
void do_down (CHAR_DATA *ch, char *argument);
void trip_trap (CHAR_DATA *ch, ROOM_INDEX_DATA *room, TRAP_DATA *trap);
void trap_execute (CHAR_DATA *victim, ROOM_INDEX_DATA *room, TRAP_DATA *trap);
int find_door (CHAR_DATA *ch, char *arg);
void do_open (CHAR_DATA *ch, char *argument);
void do_close (CHAR_DATA *ch, char *argument);
bool has_key (CHAR_DATA *ch, int key);
void do_lock (CHAR_DATA *ch, char *argument);
void do_unlock (CHAR_DATA *ch, char *argument);
void do_pick (CHAR_DATA *ch, char *argument);
void do_stand (CHAR_DATA *ch, char *argument);
void do_rest (CHAR_DATA *ch, char *argument);
void do_sit (CHAR_DATA *ch, char *argument);
void do_sleep (CHAR_DATA *ch, char *argument);
void do_wake (CHAR_DATA *ch, char *argument);
void do_sneak (CHAR_DATA *ch, char *argument);
void do_cloak (CHAR_DATA *ch, char *argument);
void do_acute_vision (CHAR_DATA *ch, char *argument);
void do_camp (CHAR_DATA *ch, char *argument);
void do_camouflage (CHAR_DATA *ch, char *argument);
/* Creep - Camo sneak -- Dioxide */
void do_creep (CHAR_DATA *ch, char *argument);
void do_hide (CHAR_DATA *ch, char *argument);
void un_camouflage (CHAR_DATA *ch, char *argument);
void un_blackjack (CHAR_DATA *ch, char *argument);
void un_strangle (CHAR_DATA *ch, char *argument);
void un_hide (CHAR_DATA *ch, char *argument);
void un_invis (CHAR_DATA *ch, char *argument);
void un_sneak (CHAR_DATA *ch, char *argument);
void un_earthfade (CHAR_DATA *ch, char *argument);
void un_blade_barrier (CHAR_DATA *ch, char *argument);
void un_watermeld (CHAR_DATA *ch, char *argument);
void un_shroud (CHAR_DATA *ch, char *argument);
void do_visible (CHAR_DATA *ch, char *argument);
void do_recall (CHAR_DATA *ch, char *argument);
void do_train (CHAR_DATA *ch, char *argument);
void do_bear_call (CHAR_DATA *ch, char *argument);
void do_animal_call (CHAR_DATA *ch,char *argument);
void track_char (CHAR_DATA *ch, CHAR_DATA *mob);
void smart_track (CHAR_DATA *ch, CHAR_DATA *mob);
void walk_to_room (CHAR_DATA *mob, ROOM_INDEX_DATA *goal);
void find_path (PATHFIND_DATA *path, ROOM_INDEX_DATA *goal);
void do_aura_of_sustenance (CHAR_DATA *ch,char *argument);
void do_vanish (CHAR_DATA *ch,char *argument);
void do_door_bash (CHAR_DATA *ch,char *argument);
/* For selecting new home */
void do_hometown (CHAR_DATA *ch, char *argument);
bool check_barred (CHAR_DATA *ch, ROOM_INDEX_DATA *to_room);
bool bar_entry (CHAR_DATA *ch, CHAR_DATA *blocker, ROOM_INDEX_DATA *to_room);
void parse_bar (char *buf, const char *str, CHAR_DATA *ch, CHAR_DATA *blocker, ROOM_INDEX_DATA *to_room);
bool is_land (ROOM_INDEX_DATA *room);
void add_tracks (ROOM_INDEX_DATA *room, CHAR_DATA *ch, int direction);
void clear_tracks (ROOM_INDEX_DATA *room);

#endif /* ACT_MOVE_H */
