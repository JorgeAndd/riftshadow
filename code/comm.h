#ifndef COMM_H
#define COMM_H

#include <sys/types.h>
#include <sys/time.h>
#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>

#ifdef _WIN32
  #include <windows.h>
  #include <wincrypt.h>
  #include <ws2tcpip.h>
#else
  #include <crypt.h>
#endif

#include "merc.h"
#include "recycle.h"
#include "tables.h"
#include "olc.h"
#include "interp.h"

/* command procedures needed */
DECLARE_DO_FUN(easy_induct);
void announce_login (CHAR_DATA *ch);
void announce_logout (CHAR_DATA *ch);

/*
 * Malloc debugging stuff.
 */

#ifdef MALLOC_DEBUG
extern	int	malloc_debug	args( ( int  ) );
extern	int	malloc_verify	args( ( void ) );
#endif

bool bDebug = FALSE;

/*
 * Signal handling.
 *   I dance around it.
 */


/*
 * Socket and TCP/IP stuff.
 */
#include <fcntl.h>
#ifdef _WIN32
  #include <windows.h>
  #include <winsock.h>
  #include <winsock2.h>
#else 
  #include <netdb.h>
  #include <netinet/in.h>
  #include <sys/socket.h>
#endif
#include "telnet.h"
const char echo_off_str[] = { IAC, WILL, TELOPT_ECHO, '\0' };
const char echo_on_str[] = { IAC, WONT, TELOPT_ECHO, '\0' };
const char go_ahead_str[] = { IAC, GA, '\0' };

/*
 * OS-dependent declarations.
 */

#ifdef _WIN32
  int	accept (int s, struct sockaddr *addr, int *addrlen);
  int	bind (int s, struct sockaddr *name, int namelen);

  /*
   * If we were in linux, this would be declared for us, 
   * but sadly we're not. This is a stopgap for signal
   * processing until a better option is created.  
   */
  #ifndef SIGFPE
    #define SIGFPE  8
  #endif
  #ifndef SIGPIPE
  #define SIGPIPE 13
  #endif
  #ifndef F_SETFL
  #define F_SETFL 4
  #endif
  #ifndef O_NDELAY
  #define O_NDELAY  04000
  #endif
#elif __linux__
/*
    Linux shouldn't need these. If you have a problem compiling, try
    uncommenting accept and bind.
int	accept (int s, struct sockaddr *addr, int *addrlen);
int	bind (int s, struct sockaddr *name, int namelen);
*/
int	socket (int domain, int type, int protocol);
#endif

int	close (int fd);
//int getpeername (int s, struct sockaddr *name, int *namelen);
//int getsockname (int s, struct sockaddr *name, int *namelen);
int gofday (struct timeval *tp, struct timezone *tzp);
//int listen (int s, int backlog);
//int read (int fd, char *buf, int nbyte);
int	select (int width, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, struct timeval *timeout);
//int write (int fd, char *buf, int nbyte);




#define CHAR_WRAP 85

#ifndef FNDELAY
#define FNDELAY O_NDELAY
#endif

int main (int argc, char **argv);
int init_socket  (int port);
void game_loop_unix (int control);
void init_descriptor (int control);
void close_socket (DESCRIPTOR_DATA *dclose);
bool read_from_descriptor (DESCRIPTOR_DATA *d);
/*
 * Transfer one line from input buffer to input line.
 */
void read_from_buffer (DESCRIPTOR_DATA *d);
const char * get_battle_condition (CHAR_DATA *victim, int percent);
/*
 * Low level output function.
 */
bool process_output (DESCRIPTOR_DATA *d, bool fPrompt);
/*
   Player customizable prompts. -Dev
 */
void bust_a_prompt (CHAR_DATA *ch);
/*
 * output_buffer( descriptor )
 * this function sends output down a socket. Color codes are stripped off
 * is the player is not using color, or converted to ANSI color sequences
 * to provide colored output.
 * When using ANSI, the buffer can become a lot larger due to the (sometimes)
 * lengthy ANSI sequences, thus potentially overflowing the buffer. Therefor
 * *new* buffer is send in chunks.
 * The 'bzero's may seem unnecessary, but i didn't want to take risks.
 *
 * - Wreck
 */
bool output_buffer (DESCRIPTOR_DATA *d);
/*
 * Append onto an output buffer.
 */
void write_to_buffer (DESCRIPTOR_DATA *d, const char *txt, int length);
/*
 * Lowest level output function.
 * Write a block of text to the file descriptor.
 * If this gives errors on very long blocks (like 'ofind all'),
 *   try lowering the max block size.
 */
bool write_to_descriptor (int desc, char *txt, int length);
/*
 * Deal with sockets that haven't logged in yet.
 */
void nanny (DESCRIPTOR_DATA *d, char *argument);
/*
 * Parse a name for acceptability.
 */
bool check_parse_name (char *name);
/*
 * Look for link-dead player to reconnect.
 */
bool check_reconnect (DESCRIPTOR_DATA *d, char *name, bool fConn);
/*
 * Check if already playing.
 */
bool check_playing (DESCRIPTOR_DATA *d, char *name);
void stop_idling (CHAR_DATA *ch);
/*
 * Write to one char.
 */
void send_to_char (const char *txt, CHAR_DATA *ch);
void send_to_chars (const char *txt, CHAR_DATA *ch, int min, ...);
/*
 * Send a page to one char.
 */
void page_to_char (const char *txt, CHAR_DATA *ch);
/* string pager */
void show_string (struct descriptor_data *d, char *input);
/* quick sex fixer */
void fix_sex (CHAR_DATA *ch);
void act (const char *format, CHAR_DATA *ch, const void *arg1, const void *arg2, int type);
void act_area (const char *format, CHAR_DATA *ch, CHAR_DATA *victim);
void act_new (const char *format, CHAR_DATA *ch, const void *arg1, const void *arg2, int type, int min_pos);
void announce_login (CHAR_DATA *ch);
void announce_logout (CHAR_DATA *ch);
void do_rename (CHAR_DATA* ch, char* argument);
void do_renam (CHAR_DATA *ch,char *argument);
int color (char type, CHAR_DATA *ch, char *string );
void colorconv (char *buffer, const char *txt, CHAR_DATA *ch );
int get_allocate_points (CHAR_DATA *ch);
void show_allocate (CHAR_DATA *ch, int finish);
void process_text (CHAR_DATA *ch, char *text);

#endif /* COMM_H */
