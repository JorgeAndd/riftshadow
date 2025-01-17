#ifndef CABAL_H
#define CABAL_H

#include <sys/types.h>
#include <sys/time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "merc.h"
#include "recycle.h"
#include "tables.h"
#include "lookup.h"
#include "magic.h"


DECLARE_DO_FUN(do_goto);
DECLARE_DO_FUN(do_yell);
DECLARE_DO_FUN(do_murder);
DECLARE_DO_FUN(do_look);
DECLARE_DO_FUN(do_flee);

bool check_horde (CHAR_DATA *ch);
void update_cskills (CHAR_DATA *ch);
void do_storytell (CHAR_DATA *ch, char *argument);
void spell_epic (int sn, int level, CHAR_DATA *ch, void *vo,int target);
void spell_calm (int sn, int level, CHAR_DATA *ch, void *vo,int target);
void spell_rage (int sn, int level, CHAR_DATA *ch, void *vo,int target);
void spell_scourge (int sn, int level, CHAR_DATA *ch, void *vo, int target);
void spell_hunters_vision (int sn, int level, CHAR_DATA *ch, void *vo, int target);
void spell_hire_mercenary (int sn, int level, CHAR_DATA *ch, void *vo, int target);
void spell_hunters_strength (int sn, int level, CHAR_DATA *ch, void *vo, int target);
char * get_room_description (ROOM_INDEX_DATA *room);
void spell_hunters_awareness (int sn, int level, CHAR_DATA *ch, void *vo, int target);
void spell_web (int sn, int level, CHAR_DATA *ch, void *vo, int target);
void spell_informant (int sn, int level, CHAR_DATA *ch, void *vo, int target);
void do_howl (CHAR_DATA *ch, char *argument);
void spell_mana_transfer (int sn, int level, CHAR_DATA *ch, void *vo, int target );
void spell_scribe (int sn, int level, CHAR_DATA *ch, void *vo, int target );
void spell_deny_magic (int sn, int level, CHAR_DATA *ch, void *vo, int target );
bool check_deny_magic (CHAR_DATA *ch);
void spell_bane (int sn, int level, CHAR_DATA *ch, void *vo, int target );
void spell_repose (int sn, int level, CHAR_DATA *ch, void *vo, int target );
void spell_medicine (int sn, int level, CHAR_DATA *ch, void *vo, int target );
void spell_horde_communion (int sn, int level, CHAR_DATA *ch, void *vo, int target);
void communion_tick (CHAR_DATA *ch, AFFECT_DATA *af);
void do_exile (CHAR_DATA *ch, char *argument );
void spell_piety (int sn,int level,CHAR_DATA *ch,void *vo,int target);
void spell_fervor (int sn, int level, CHAR_DATA *ch, void *vo, int target);
void spell_spiritual_healing (int sn, int level, CHAR_DATA *ch, void *vo, int target);
void spell_shroud_of_light (int sn, int level, CHAR_DATA *ch, void *vo, int target);
void spell_crimson_martyr (int sn, int level, CHAR_DATA *ch, void *vo, int target);
void retribution_tick (CHAR_DATA *ch, AFFECT_DATA *af);
void spell_retribution (int sn, int level, CHAR_DATA *ch, void *vo, int target);
void do_phalanx (CHAR_DATA *ch, char *argument);
void spell_safehaven (int sn, int level, CHAR_DATA *ch, void *vo, int target);

#endif /* CABAL_H */
