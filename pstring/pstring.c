#ifndef pstring_h
#include<pstring.h>

bool pstartswith(char *string, char character)
{
	return string[0] == character ? TRUE : FALSE;
}

bool pendswith(char *string, char character)
{
	int iterator = 0;
	while (string[iterator + 1] != '\0') {
		iterator++;
	}

	return string[iterator] == character ? TRUE : FALSE;
}

bool pisalpha(char *string)
{
	int iterator = 0;

	while (true) {
		if (string[iterator] == '\0') return TRUE;
		if (!pisletter(string[iterator])) return FALSE;

		iterator++;
	}
}

bool pisdigit(char *string)
{
	int iterator = 0;

	while (true) {
		if (string[iterator] == '\0') return TRUE;
		if (!pisnumber(string[iterator])) return FALSE;
	
		iterator++;
	}
}

int pcount(const char *string, char character)
{
	int count = 0;

	int iterator = 0;
	while (true) {
		if (string[iterator] == character) {
			count++;
		}
		else if (string[iterator] == '\0') {
			return count;
		}

		iterator++;
	}
}

char *pupper(char *string)
{
	int iterator = 0;
	while (true) {
		if (string[iterator] == '\0') return string;
		string[iterator] = ptoupper(string[iterator]);
		iterator++;
	}
}

char *plower(char *string)
{
	int iterator = 0;
	while(true) {
		if (string[iterator] == '\0') return string;
		string[iterator] = ptolower(string[iterator]);
		iterator++;
	}
}

char *pcapitalize(char *string)
{
	string[0] = ptoupper(string[0]);

	int iterator = 1;
	while(true) {
		if (string[iterator] == '\0') return string;
		string[iterator] = ptolower(string[iterator]);
		iterator++;
	}
}

char *pswapcase(char *string)
{
	int iterator = 0;
	while(true) {
		if (string[iterator] == '\0') return string;
		string[iterator] = pflipcase(string[iterator]);
		iterator++;
	}
}

char *ptitle(char *string)
{
	int iterator = 0;
	bool isspace = TRUE;

	while (true) {
		if (string[iterator] == '\0') {
			return string;
		}
		else if (string[iterator] == ' ') {
			isspace = TRUE;
		}
		else if (isspace == TRUE) {
			if (pisletter(string[iterator])) {
				string[iterator] = ptoupper(string[iterator]);
				isspace = FALSE;
			}
		}

		iterator++;
	}
}

#endif // pstring_h
