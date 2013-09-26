
#include "stdafx.h"
#include "routines.h"
#include "resource.h"
#include <time.h>

extern HBITMAP Cat;
extern HBITMAP *particles;
void initPRNG()
{
	srand(uint32_t(time(NULL)));
}
int random(int min, int max)
{
	return min+int(rand()/double(RAND_MAX)*(max-min));
}

void loadBitmaps(HINSTANCE instance)
{
	int i=0;
	Cat = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP1));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP2));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP3));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP4));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP5));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP6));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP7));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP8));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP9));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP10));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP11));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP12));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP13));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP14));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP15));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP16));
	particles[i++] = LoadBitmap(instance, MAKEINTRESOURCE(IDB_BITMAP17));
	std::random_shuffle(particles, &particles[i-1]);
}
