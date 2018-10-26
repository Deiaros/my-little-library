#define DEBUT {
#define FIN }
#define NUMERO int
#define TANT_QUE while
#define SI if
#define IMPRIM printf
#define SCAN scanf

NUMERO i = 0;
NUMERO trouve = rand(); 
NUMERO choix;

IMPRIM ("Choisir un numéro:");
SCAN ("%ff", &choix);
TANT_QUE (choix != trouve)
DEBUT
	IMPRIM ("Perdu, choisir un nouveau numéro:");
	SCAN ("%d", &choix);
	SI (choix == trouve)
	DEBUT
		IMPRIM ("Tu es si proche!");
		trouve = trouve + i++; //feels bad man
	FIN
FIN

#if !defined (ERROR)
	#define ERROR "ERROR: quelque chose s'est mal passe"

#define comp(x, y) ((x) == (y)

#define sqr(x) ((x) * (x))

#define domath(x, y) (((x) + (y)) + ((x) / (y)) + ((x) * (y)))
