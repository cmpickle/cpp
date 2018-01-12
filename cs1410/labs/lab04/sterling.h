#pragma once

struct sterling
{
	int pounds;
	int shillings;
	int pence;
};

sterling make_sterling(int pnd, int s, int p);
sterling make_sterling(int p);
sterling add(sterling s1, sterling s2);
void print(sterling& s);
void read(sterling* s);