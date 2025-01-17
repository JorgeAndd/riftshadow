#ifndef MPROG_H
#define MPROG_H

#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "merc.h"
#include "magic.h"
#include "interp.h"
#include "recycle.h"
#include "tables.h"

DECLARE_MPROG_FUN_BRIBE( bribe_prog_cityguard );
DECLARE_MPROG_FUN_FIGHT( fight_prog_priest  );

DECLARE_MPROG_FUN_GREET( greet_prog_profteacher );
DECLARE_MPROG_FUN_GREET( greet_prog_knight );
DECLARE_MPROG_FUN_GREET( greet_prog_arangird);
DECLARE_MPROG_FUN_AGGRESS( aggress_prog_arangird_demon);
DECLARE_MPROG_FUN_AGGRESS( aggress_prog_arangird_regthor);
DECLARE_MPROG_FUN_AGGRESS( aggress_prog_ilopheth_hermit);
DECLARE_MPROG_FUN_GREET( greet_prog_ruins_spirit);
DECLARE_MPROG_FUN_GREET( greet_prog_ruins_mouth);
DECLARE_MPROG_FUN_GREET( greet_prog_cimar_dollgirl);
DECLARE_MPROG_FUN_GREET( greet_prog_cimar_sorcgm);
DECLARE_MPROG_FUN_GREET(greet_prog_drow_scribe);
DECLARE_MPROG_FUN_GREET(greet_prog_tower_shopkeeper);
DECLARE_MPROG_FUN_GREET(greet_prog_headmaster);
DECLARE_MPROG_FUN_GREET(greet_prog_opening_greet);
DECLARE_MPROG_FUN_GREET(greet_prog_pay_char);
DECLARE_MPROG_FUN_GREET(greet_prog_starvin_pete);

DECLARE_MPROG_FUN_SPEECH( speech_prog_ruins_mouth);
DECLARE_MPROG_FUN_SPEECH( speech_prog_testmob);
DECLARE_MPROG_FUN_SPEECH( speech_prog_cimar_dollgirl);
DECLARE_MPROG_FUN_SPEECH( speech_prog_ilopheth_hermit);

DECLARE_MPROG_FUN_GIVE( give_prog_cimar_dollgirl);
DECLARE_MPROG_FUN_GIVE( give_prog_ilopheth_hermit);
DECLARE_MPROG_FUN_GIVE( give_prog_starvin_pete);

DECLARE_MPROG_FUN_SPEECH( speech_prog_sailor );
DECLARE_MPROG_FUN_GREET( greet_prog_sailor );

DECLARE_MPROG_FUN_PULSE(pulse_prog_demon);
DECLARE_MPROG_FUN_PULSE(pulse_prog_tahlu_mist_ward);
DECLARE_MPROG_FUN_PULSE(pulse_prog_arangird_patrol);
DECLARE_MPROG_FUN_PULSE(pulse_prog_cornogun);
DECLARE_MPROG_FUN_PULSE(pulse_prog_ilopheth_hermit);
DECLARE_MPROG_FUN_PULSE(pulse_prog_ilopheth_piranha);
DECLARE_MPROG_FUN_PULSE(pulse_prog_ilopheth_weatherbeaten);
DECLARE_MPROG_FUN_PULSE(pulse_prog_alstea_ehrlouge);
DECLARE_MPROG_FUN_PULSE(pulse_prog_formian_queen);


/* Law stuff */
DECLARE_MPROG_FUN_BEAT(beat_prog_law_track);
DECLARE_MPROG_FUN_FIGHT(fight_prog_law_subdue);
DECLARE_MPROG_FUN_PULSE(pulse_prog_troopers);

/* AP Demon Summoning Progs */
DECLARE_MPROG_FUN_ATTACK(attack_prog_lesser_demon);
DECLARE_MPROG_FUN_BEAT(beat_prog_barbas);
DECLARE_MPROG_FUN_DEATH(death_prog_barbas);
DECLARE_MPROG_FUN_SPEECH(speech_prog_aamon);
DECLARE_MPROG_FUN_GREET(greet_prog_furcas);
DECLARE_MPROG_FUN_GIVE(give_prog_malaphar);
DECLARE_MPROG_FUN_GIVE(give_prog_drow_scribe);
DECLARE_MPROG_FUN_BRIBE(bribe_prog_malaphar);
DECLARE_MPROG_FUN_SPEECH(speech_prog_ipos);
DECLARE_MPROG_FUN_SPEECH(speech_prog_oze);
DECLARE_MPROG_FUN_SPEECH(speech_prog_gamygyn);
DECLARE_MPROG_FUN_SPEECH(speech_prog_orobas);
DECLARE_MPROG_FUN_SPEECH(speech_prog_geryon);
DECLARE_MPROG_FUN_SPEECH(speech_prog_cimeries);
DECLARE_MPROG_FUN_SPEECH(speech_prog_drow_scribe);

//DECLARE_MPROG_FUN_FIGHT(fight_prog_warrior_mercenary);
DECLARE_MPROG_FUN_GREET(greet_prog_outer_guardian);
DECLARE_MPROG_FUN_GREET(greet_prog_inner_guardian);
DECLARE_MPROG_FUN_GREET(greet_prog_guild_recruiter);

DECLARE_MPROG_FUN_DEATH(death_prog_outer_guardian);
DECLARE_MPROG_FUN_DEATH(death_prog_inner_guardian);
DECLARE_MPROG_FUN_ATTACK(attack_prog_outer_guardian);

DECLARE_MPROG_FUN_MOVE(move_prog_horde_shrine_ward);
DECLARE_MPROG_FUN_MOVE(move_prog_theatre_guard);
DECLARE_MPROG_FUN_AGGRESS(aggress_prog_anchor);
DECLARE_MPROG_FUN_DEATH(death_prog_glass);
DECLARE_MPROG_FUN_GREET(greet_prog_necro_skull);
DECLARE_MPROG_FUN_DEATH(death_prog_necro_skull);
DECLARE_MPROG_FUN_PULSE(pulse_prog_necro_skull);
DECLARE_MPROG_FUN_PULSE(pulse_prog_shopkeeper);
DECLARE_MPROG_FUN_PULSE(pulse_prog_being_watched);
DECLARE_MPROG_FUN_PULSE(pulse_prog_imp);

DECLARE_MPROG_FUN_ENTRY(entry_prog_cornogun);

DECLARE_MPROG_FUN_FIGHT(fight_prog_geulgon);
DECLARE_MPROG_FUN_FIGHT(fight_prog_gking);
DECLARE_MPROG_FUN_FIGHT(fight_prog_ilopheth_druid);

DECLARE_MPROG_FUN_GIVE(give_prog_minotaur);

DECLARE_MPROG_FUN_PULSE(pulse_prog_diurnal_mob);
DECLARE_MPROG_FUN_PULSE(pulse_prog_nocturnal_mob);
DECLARE_MPROG_FUN_PULSE(pulse_prog_wizard_summon);
DECLARE_MPROG_FUN_PULSE(pulse_prog_fisherman);
DECLARE_MPROG_FUN_PULSE(pulse_prog_area_echo_ward);
DECLARE_MPROG_FUN_PULSE(pulse_prog_shade);
DECLARE_MPROG_FUN_PULSE(pulse_prog_banshee);
DECLARE_MPROG_FUN_PULSE(pulse_prog_phantasm);
DECLARE_MPROG_FUN_PULSE(pulse_prog_ravghoul);
DECLARE_MPROG_FUN_PULSE(pulse_prog_behemoth);
DECLARE_MPROG_FUN_PULSE(pulse_prog_glass);
DECLARE_MPROG_FUN_PULSE(pulse_prog_night_creeps);

DECLARE_MPROG_FUN_GREET(greet_prog_face_sucker);
DECLARE_MPROG_FUN_DEATH(death_prog_cim);

void mprog_tell (int inc, char *arg, CHAR_DATA *mob, CHAR_DATA *ch);
void mprog_say (int inc, char *arg, CHAR_DATA *mob, CHAR_DATA *ch);
void mprog_emote (int inc, char *arg, CHAR_DATA *mob, CHAR_DATA *ch);
int mprog_drop (int inc, char *arg, OBJ_DATA *obj, CHAR_DATA *mob, CHAR_DATA *ch);
int mprog_give (int inc, char *arg, OBJ_DATA *obj, CHAR_DATA *mob, CHAR_DATA *ch);
bool mprog_unset (MOB_INDEX_DATA *mobindex,const char *progtype, const char *name);
void mprog_set (MOB_INDEX_DATA *mobindex,const char *progtype, const char *name);
/******************  Functions *********************/
void bribe_prog_cityguard (CHAR_DATA *mob, CHAR_DATA *ch, int amount);
void greet_prog_arangird (CHAR_DATA *mob, CHAR_DATA *ch);
void pulse_prog_arangird_patrol (CHAR_DATA *mob);
void greet_prog_profteacher (CHAR_DATA *mob, CHAR_DATA *ch);
void greet_prog_ruins_spirit (CHAR_DATA *mob, CHAR_DATA *ch);
void greet_prog_ruins_mouth (CHAR_DATA *mob, CHAR_DATA *ch);
void speech_prog_testmob (CHAR_DATA *mob, CHAR_DATA *ch, char *speech);
void speech_prog_ruins_mouth (CHAR_DATA *mob, CHAR_DATA *ch, char *speech);
void greet_prog_sailor (CHAR_DATA *mob, CHAR_DATA *ch);
void speech_prog_sailor (CHAR_DATA *mob, CHAR_DATA *ch, char *speech);
void greet_prog_knight (CHAR_DATA *mob, CHAR_DATA *ch);
void fight_prog_priest (CHAR_DATA *mob, CHAR_DATA *ch);
void pulse_prog_formian_queen (CHAR_DATA *mob);
/* Not really an mprog, but hey, it MAKES a mob, so.... */
void formian_egg_hatch (OBJ_DATA *obj, OBJ_AFFECT_DATA *af);
void greet_prog_outer_guardian (CHAR_DATA *mob, CHAR_DATA *ch);
void pulse_prog_demon (CHAR_DATA *mob);
bool aggress_prog_arangird_demon (CHAR_DATA *mob, CHAR_DATA *attacker);
bool aggress_prog_arangird_regthor (CHAR_DATA *mob, CHAR_DATA *attacker);
void fight_prog_ilopheth_druid (CHAR_DATA *mob, CHAR_DATA *victim);
void pulse_prog_ilopheth_piranha (CHAR_DATA *mob);
void pulse_prog_ilopheth_weatherbeaten (CHAR_DATA *mob);
void pulse_prog_alstea_ehrlouge (CHAR_DATA *mob);
void attack_prog_outer_guardian (CHAR_DATA *mob, CHAR_DATA *attacker);
void greet_prog_inner_guardian (CHAR_DATA *mob, CHAR_DATA *ch);
bool death_prog_outer_guardian (CHAR_DATA *mob, CHAR_DATA *killer);
bool death_prog_inner_guardian (CHAR_DATA *mob, CHAR_DATA *killer);
void pulse_prog_tahlu_mist_ward (CHAR_DATA *mob);
bool move_prog_horde_shrine_ward (CHAR_DATA *ch, CHAR_DATA *mob, ROOM_INDEX_DATA *from, int direction);
bool aggress_prog_anchor (CHAR_DATA *mob, CHAR_DATA *attacker);
bool death_prog_glass (CHAR_DATA *mob, CHAR_DATA *killer);
void pulse_prog_being_watched (CHAR_DATA *mob);
void pulse_prog_shopkeeper (CHAR_DATA *mob);
bool move_prog_theatre_guard (CHAR_DATA *ch, CHAR_DATA *mob, ROOM_INDEX_DATA *from, int direction);
void greet_prog_necro_skull (CHAR_DATA *mob, CHAR_DATA *ch);
bool death_prog_necro_skull (CHAR_DATA *mob, CHAR_DATA *killer);
void pulse_prog_necro_skull (CHAR_DATA *mob);
void attack_prog_lesser_demon (CHAR_DATA *mob, CHAR_DATA *attacker);
void beat_prog_barbas (CHAR_DATA *mob);
bool death_prog_barbas (CHAR_DATA *mob, CHAR_DATA *killer);
void speech_prog_aamon (CHAR_DATA *mob, CHAR_DATA *ch, char *speech);
void give_prog_malaphar (CHAR_DATA *mob, CHAR_DATA *ch, OBJ_DATA *obj);
void bribe_prog_malaphar (CHAR_DATA *mob, CHAR_DATA *ch, int amount);
void greet_prog_furcas (CHAR_DATA *mob, CHAR_DATA *ch);
void speech_prog_ipos (CHAR_DATA *mob, CHAR_DATA *ch, char *speech);
void speech_prog_oze (CHAR_DATA *mob, CHAR_DATA *ch, char *speech);
void speech_prog_gamygyn (CHAR_DATA *mob, CHAR_DATA *ch, char *speech);
void speech_prog_orobas (CHAR_DATA *mob, CHAR_DATA *ch, char *speech);
void speech_prog_geryon (CHAR_DATA *mob, CHAR_DATA *ch, char *speech);
void speech_prog_cimeries (CHAR_DATA *mob, CHAR_DATA *ch, char *speech);
void pulse_prog_cornogun (CHAR_DATA *mob);
void entry_prog_cornogun (CHAR_DATA *mob);
void pulse_prog_imp (CHAR_DATA *mob);
void fight_prog_geulgon (CHAR_DATA *mob, CHAR_DATA *victim);
void give_prog_minotaur (CHAR_DATA *mob, CHAR_DATA *ch, OBJ_DATA *obj);
/*
void fight_prog_minotaur (CHAR_DATA *mob, CHAR_DATA *victim);
*/
void fight_prog_gking (CHAR_DATA *mob, CHAR_DATA *victim);
void pulse_prog_nocturnal_mob (CHAR_DATA *mob);
void pulse_prog_diurnal_mob (CHAR_DATA *mob);
bool death_prog_cim (CHAR_DATA *mob, CHAR_DATA *killer);
void greet_prog_tower_shopkeeper (CHAR_DATA *mob, CHAR_DATA *ch);
void pulse_prog_wizard_summon (CHAR_DATA *mob);
void greet_prog_notescribe (CHAR_DATA *mob, CHAR_DATA *ch);
/* I blame a loss of inspiration 
void speech_prog_notescribe (CHAR_DATA *mob, CHAR_DATA *ch, char *speech);
*/
CHAR_DATA* check_sector (int min, int max);
void set_aggressor_hunt (CHAR_DATA *mob);
bool verify_aggressor (CHAR_DATA *mob, CHAR_DATA *ch, int min, int max);
void beat_prog_law_track (CHAR_DATA *mob);
bool verify_aggressor (CHAR_DATA *mob, CHAR_DATA *ch, int min, int max);
CHAR_DATA* check_sector (int min, int max);
void set_aggressor_hunt (CHAR_DATA *mob);
void pulse_prog_fisherman (CHAR_DATA *mob);
void greet_prog_guild_recruiter (CHAR_DATA *mob, CHAR_DATA *ch);
void wake_up (CHAR_DATA *ch);
char *get_insult (CHAR_DATA *ch);
void fight_prog_law_subdue (CHAR_DATA *mob, CHAR_DATA *ch);
void pulse_prog_troopers (CHAR_DATA *mob);
void pulse_prog_area_echo_ward (CHAR_DATA *mob);
void pulse_prog_shade (CHAR_DATA *mob);
void pulse_prog_banshee (CHAR_DATA *mob);
void pulse_prog_phantasm (CHAR_DATA *mob);
void pulse_prog_ravghoul (CHAR_DATA *mob);
void pulse_prog_behemoth (CHAR_DATA *mob);
void pulse_prog_glass (CHAR_DATA *mob);
void pulse_prog_night_creeps (CHAR_DATA *mob);
void sucker_pulse (CHAR_DATA *ch, AFFECT_DATA *af);
void greet_prog_face_sucker (CHAR_DATA *mob, CHAR_DATA *ch);

#endif /* MPROG_H */
