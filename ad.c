#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

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
    new->ad = strdup(ad);
    new->businessName = strdup(businessName);

    return new;
}

// Frees an Ad — INCOMPLETE
void FreeAd(Ad a) {
    assert(a != NULL);

    free(a->ad);
    free(a->businessName);

    free(a);

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

int getPFromAd(Ad a) {
    return a->p;
}

Ad getNextAd(Ad a) {
    return a->next;
}

void changeNextPointer(Ad a, Ad newNext) {
    a->next = newNext;
}
