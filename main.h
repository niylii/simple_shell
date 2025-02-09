#ifndef MAIN
#define MAIN

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

/**environ variable**/
extern char **environ;

/**for simple shell versions**/
void simple_shell(void);
void simple_shell02(void);
void simple_shell03(void);
void simple_shell04(void);
void simple_shell10(void);
void simple_shell011(void);
void simple_shell021(void);
void simple_shell041(void);

/**for existance/working check**/
void getline_check(ssize_t stat, char *cmd);
int exit_cmd_check(char *, char **);
int env_cmd_check(char *);
int setenv_check(char *cmd, char *name, char *val);
int unsetenv_check(char *cmd, char *name);

/**for certen cases**/
void e_of(char *);
void exec_process(char *cmd_path, char **args, int *exec_stat);
static ssize_t read_into(int fd, char *buff, ssize_t *bytes,
		ssize_t *pose);

/**for environement variables**/
int env_exists(const char *name);
char *get_env(const char *name);
char *cmd_type(char *pro);

/*for built-in commands**/
int set_env(const char *name, const char *val);
int unset_env(const char *name);

/**for my version of std library functions**/
ssize_t get_line(char **line, size_t *n, int fd);
int a_to_i(char *);
int is_space(const char *);

/**for strings manupilation**/
char *tokenize_pro_name(char **, char **);
char *str_find(char *str, char dil);
char *str_cspn(char *);
char *str_tok(char *str, const char *dil);
char *str_pbrk(char *str, const char *dil);
int str_ncpm(char *s1, char *s2);
int str_cpm(char *s1, char *s2);
int str_len(char *);

#endif
