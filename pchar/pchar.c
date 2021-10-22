
#ifndef pchar_h
#include<pchar.h>

bool pisalpha(char character)
{
	/* If character is inclusively between the ranges of 65 and 90 OR between 97 and 122, return TRUE
	 * */
	return (((character >= 65) && (character <= 90)) || ((character >= 97) && (character <= 122))) ? TRUE : FALSE;
}

bool pislarger(char character, char comparer)
{
	return character > comparer ? TRUE : FALSE;
}

bool pissmaller(char character, char comparer)
{
	return character < comparer ? TRUE : FALSE;
}

bool pisupper(char character)
{
	return (character >= 65) && (character <= 90) ? TRUE : FALSE;
}

bool pislower(char character)
{
	return (character >= 97) && (character <= 122) ? TRUE : FALSE;
}

char ptoupper(char character)
{
	return ((character >= 97) && (character <= 122)) ? character - 32 : character;
}

char ptolower(char character)
{
	return ((character >= 65) && (character <= 90)) ? character + 32 : character;
}

char pflipcase(char character)
{
	if (pisupper(character)) {
		character = ptolower(character);
	}
	else if (pislower(character)) {
		character = ptoupper(character);
	}

	return character;
}

#endif // pchar_h
