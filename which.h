#ifndef  FILES_H
#define FILES_H

/**
 * main - main program files
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd,h>

extern char **environ;
/***dummy typedef ***/
typedef int make_iso_compilers_happy;

/*********** String functions *************/

char *_strcpy(char *dest, const char *src);
unsigned int _strlen(const char *str);
int _strcmp(char *s1, char *s2);
char *_strdup(const char *str);

/************* Lis Functions **************/

char *get_path(char *str, char *var);
int main(int ac, char **av, char **env);
char *get_path(char *str, char *var);
list_t *split_string(char *str, char *delim);
char *get_full_path(char *filename, char **dir_a);
char *create_path(char *dir, char *filename);
char *_getenv(const char *name);








#endif