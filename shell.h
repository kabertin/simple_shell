#ifndef SHELL_H
#define SHELL_H


#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd>
#include <string.h>
#include <limits.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

#define COMMAND_NORMAL 0
#define COMMAND_AND 2
#define COMMAND_OR 1
#define COMMAND_CHAIN 3
#define WRITE_BUFFER_SIZE 1024
#define BUFFER_FLASH -1
#define READ_BUFFER_SIZE 1024
#define CON_UN 2
#define CONV_LOW 1
#define HISTORY_MAX 4096
#define HISTORY_FILE ".sshistory"
#define GET_U 0
#define TOK_U 0
#define INFO_START {NULL, NULL, NULL, 0, 0, 0, 0, NULL,\
	NULL, NULL, NULL, NULL, 0, 0, NULL, 0, 0, 0}

extern char **environ;

/**
 * struct strli - singly linked list
 * @number: field number
 * @str: a string
 * @next: pointer to the next node
 */
typedef struct strli
{
	int number;
	char *str;
	struct strli *next;
} list_t;

/**
 * struct builtin - it has buildin functions
 * @bu_cmd: builtin commands
 * @func: the function pointer
 */
typedef struct builtin
{
	char *bu_cmd;
	int (*func)(info_t*);
} builtin_table;

/**
 * struct arginfo - contains information ta pass as arguments
 * @arg: argument string from the user input
 * @ac: number of arguments
 * @av: input in array pf strings
 * @line_c: error count
 * @path: current command path
 * @error_nbr: printed number when exit error
 * @stat: the latest command status
 * @line_cf: line count
 * @history_c: number of history lines
 * @env_new: environ change
 * @fname: filename
 * @readfiledesc: file descriptor from input
 * @envir: customized environ
 * @env: copy of environ
 * @buffer_cmd_type: the type of command
 * @history: the history node
 * @buffer_cmd: pointer to command
 * @alias: alias node
 */

typedef struct arginfo
{
	char *arg;
	int ac;
	char **av;
	unsigned int line_c;
	char *path;
	int error_nbr;
	int stat;
	int line_cf;
	int history_c;
	int env_new;
	char *fname;
	int readfiledesc;
	char **envir;
	list_t *env;
	int buffer_cmd_type;
	list_t *history;
	char **buffer_cmd;
	list_t *alias;
} info_t;



int is_command(info_t *info, char *path);
char *duplicate_chars(char *paths, int begin, int end);
char *get_path(info_t *info, char *paths, char *command);
int loophsh(char **);
void _errorputs(char *c);
int _errorputchar(char c);
int _putfiledes(char c, int fd);
int _putsfile(char *c, int fd);



#endif
