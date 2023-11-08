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
int find_builtin(info_t *info);
int hsh(info_t *info, char **av);
void fork_command(info_t *info);
void find_command(info_t *info);
char *_strcpy(char *dest, char *src);
char *_strdup(const char *s);
void _puts(char *s);
int _putchar(char c);
int _strlen(char *str);
int _stringcmp(char *str1, char *str);
char *begin_wth(const char *h, const char *sub);
char *_stringconc(char *to, char *from);
char *_strcpy1(char *d, char *s, int c;)
char *_strconc(char *to, char *from, int bytes);
char *_strchar(char *str, char chr);
int ptr_free(void **ptr);
char **str_word(char *s, char *d);
char *_memset(char *m, char bytes, unsugned int n);
void str_free(char **str);
void *realloc(void *p, unsigned int old, unsigned int nw);
int interact(info_t *);
<<<<<<< HEAD
int is_delimiter(char d, char *del);
int _isalphabet(int d);
int _atoi(char *s);
int _atoierror(char *s);
void delete_comment(char *buffer);
int print_delimiter(int input, int filedesc);
char *convert_number(long int num, int base, int flags);
void print_error(info_t *info, char *spec);
int shell_quit(info_t *info);
int change_dir(info_t *info);
int change_dir1(info_t *info);
void sigintHandler(__attribute__((unused))int signal);
ssize_t get_input(info_t *info);
ssize_t input_buffer(info_t *info, char **buffer, size_t *length);
int _getline(info_t *info, char **ptr, size_t *length);
ssize_t read_buffer(info_t *info, char *buffer, size_t *a);
=======
int is_delimiter(char, char *);
int _isalphabet(int);
int _atoi(char *);
int _atoierror(char *);
void delete_comments(char *);
int print_delimiter(int, int);
char *convert_number(long int, int, int);
void print_error(info_t *, char *);
int shell_quit(info_t *)i;
int change_dir(info_t *);
int change_dir1(info_t *);
int hist_display(info_t *his);
int unset_alias(info_t *info, char *s);
int set_alias(info_t *info, char *s);
int _print_alias(list_t *index);
int myalias(info_t *info);
void _clear_info(info_t *info);
void _set_info(info_t *info, char **av);
void _free_info(info_t *info, int a);
>>>>>>> d4b415ae84cedae08a3ea7d94ff4aab30586bffb
#endif
