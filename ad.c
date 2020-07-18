#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ad.h"

struct ad {
    char *ad;
    char *businessName;
    int p;
    Ad next;
};

// Creates a new ad — INCOMPLETE
Ad AdNew(char *ad, char *businessName, int p) {

    Ad new = malloc(sizeof(struct ad));
    new->p = p;
    // Any SEGFAULTS that arise here are because of not using strdup()?
    new->ad = strcpy(ad);
    new->businessName = strcpy(businessName);

    return new;
}

// Frees an Ad — INCOMPLETE
void FreeAd(Ad a) {
    assert(a != NULL);
    // if we change AdNew so it uses strdup, we have to free the strings
    // here

    free(ad);

    return;
}

// prints an ad — INCOMPLETE
void printAd(Ad a) {
    assert(a != NULL);

    printf("Postcode: %d\n", a->p);

    fputs(a->businessName, stdout);
    printf("\n");

    fputs(a->ad, stdout);
    printf("\n");

    return;
}
