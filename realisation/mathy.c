/* -------------------------------------------------------------------
Le code source (*.c) pour la bibliotheques de plusier fonction mathematique
- Created by Thomas Varjavandi (Deiaros)
--------------------------------------------------------------------*/

#include "mathy.h"

int lcf(int x, int y)
{
	for(int i = 0; i < x; i++)
	{
		if((x % i) == 0 && (y % i) == 0)
		{
			return i;
		}
	}
}

int expo(int x, int y)
{
	int tempx = x;
	for(int i = 0; i < y; i++)
	{
		tempx *= x;
		return tempx;
	}
}
