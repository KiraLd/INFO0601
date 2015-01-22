#ifndef _EDITEUR_H_
#define _EDITEUR_H_

struct zone
{
	int l;
	int h;
	char** map;
}

typedef struct zone zone;

zone* creerZone(int l, int h);
zone* lireZone(int f, int pos);
int ecrireZone(int f, int pos, zone* z);

int lireCarte(char* s);


#endif