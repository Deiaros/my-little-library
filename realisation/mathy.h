#ifndef MATHY_H
#define MATHY_H

#define DEBUT {
#define FIN }
#define NUMERO int
#define TANT_QUE while
#define SI if
#define POUR for
#define IMPRIM printf
#define SCAN scanf

#define UNE 1
#define DEUX 2
#define TROIS 3

#define add(x, y) ((x)+(y))
#define sub(x, y) ((x)-(y))
#define div(x, y) ((x)/(y))
#define mul(x, y) ((x)*(y))

#define eq(x, y) ((x)==(y))
#define neq(x, y) ((x)!=(y))
#define gr(x, y) ((x)>(y))
#define ls(x, y) ((x)<(y))
#define greq(x, y) ((x)>=(y))
#define lseq(x, y) ((x)<=(y))

#define sqr(x) ((x)*(x))

#if !defined (ERROR)
	#define ERROR "ERROR: quelque chose s'est mal passe"

#if !defined (MEAING_OF_LIFE)
	#define MEAING_OF_LIFE 42

#if !defined (GOODBY)
	#define GOODBY "Goodby my lover, goodby my friend"

#if !defined (LOVE)
	#define LOVE "What is love!"

int lcf(int x, int y)

int expo(int x, int)

#endif
