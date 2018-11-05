#include <stdio.h>
#include <stdlib.h>
#include "foret.h"

int main()
{
	Foret foret;

	initialiserForet(foret);

	initialiserArbre(foret);

    afficherForet(foret);

	return 0;
}
