#ifndef pstring_h
#define pstring_h

#ifndef stdio_h
#include<stdio.h>
#endif
#ifndef stdbool_h
#include<stdbool.h>
#endif

#ifndef pchar_h
#include<pchar.h>
#endif

#ifndef PSOS
#define PSOS 0
#endif

bool		pstartswith	(char *string, char character);
bool		pendswith	(char *string, char character);
bool		pisalpha	(char *string);
bool		pisdigit	(char *string);

int		plen		(char *string);
int		pcount		(char *string, char *substring);
int		pfind		(char *string, char *substring, unsigned int start, unsigned int end);
char		*plower		(char *string);
char		*pupper		(char *string);
char		*pcapitalize	(char *string);
char		*pswapcase	(char *string);
char		*ptitle		(char *string);

#endif // pstring_h
