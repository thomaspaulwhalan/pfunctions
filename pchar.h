#ifndef pchar_h
#define pchar_h

#ifndef stdio_h
#include<stdio.h>
#endif
#ifndef stdbool_h
#include<stdbool.h>
#endif

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

bool		pisalpha		(char character);
bool		pislarger		(char character, char comparer);
bool		pissmaller		(char character, char comparer);

char		ptoupper		(char character);
char		ptolower		(char character);
char		pflipcase		(char character);

#endif // pchar_h
