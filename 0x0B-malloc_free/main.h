#ifndef _main_h_
#define _main_h_

/*
 *main.h file for the project header files 
 *Declarations of all the processes and loop functions
 *used in the 0x0B-malloc_free
 */

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

#endif
