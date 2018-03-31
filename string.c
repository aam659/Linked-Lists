#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "string.h"

struct string 
    {
    char *value;
    };

STRING *
newSTRING(char *x)
    {
    STRING *p = malloc(sizeof(STRING));
    if (p == 0) { fprintf(stderr,"out of memory\n"); exit(1); }
    p->value = x;
    return p;
    }

char * 
getSTRING(STRING *v)
    {
    return v->value;
    }

char * 
setSTRING(STRING *v,char *x)
    {
    char *old = v->value;
    v->value = x;
    return old;
    }

int
compareSTRING(void *v,void *w)
    {
    return getSTRING(v) - getSTRING(w);
    }

void 
displaySTRING(void *v,FILE *fp)
    {
    fprintf(fp,"%s",getSTRING(v));
    }

void
freeSTRING(void *v)
    {
    free((STRING *) v);
    }
