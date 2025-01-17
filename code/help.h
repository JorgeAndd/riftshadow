#ifndef HELP_H
#define HELP_H

#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <mysql.h>
#include <ctype.h>
#include "merc.h"
#include "db.h"
#include "lookup.h"
#include "tables.h"
#include "interp.h"

int can_see_help (CHAR_DATA *ch, MYSQL_ROW row, bool fOnlyResult);
void show_helpfile (CHAR_DATA *ch, MYSQL_ROW row);
void modhelp_end_fun (CHAR_DATA *ch, char *argument);
void do_modhelp (CHAR_DATA *ch, char *argument);
void do_help (CHAR_DATA *ch, char *argument);
void do_delhelp (CHAR_DATA *ch, char *argument);
void addhelp_end_fun (CHAR_DATA *ch, char *argument);
void do_addhelp (CHAR_DATA *ch, char *argument);
void do_listhelp (CHAR_DATA *ch, char *argument);
MYSQL * do_conn (char *host_name, char *user_name, char *password, char *db_name, unsigned int port_num, char *socket_name, unsigned int flags);
void do_disc (MYSQL *conn);
void print_error (MYSQL *conn, char *message);
void process_query (MYSQL *con, char *query);

#endif /* HELP_H */
