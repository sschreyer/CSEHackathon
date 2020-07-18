#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Postcode.h"
#include "ad.c"

struct postcode {
    Ad *ads;
    int p;
    int numAds; 
};


// new postcode
Postcode PostcodeNew(Ad a) {

    assert(a != NULL);

    Postcode new = malloc(sizeof(struct postcode));
    assert(new != NULL);
    new->ads = a;
    new->p = a->postcode;
    new->numAds = 1;

    return Postcode;
}

// compare two postcodes - INCOMPLETE — used for inserting into the tree
// if you need another postcodeCmp function, call it something else

// Compares two postcodes. Returns a negative number if the  first   is
// earlier  than  the  second  ,  0 if they're the same, and a
// positive number if the first postcode is later than the second.

// takes in an Ad and an int because that's what is specified in Tree.c
// this can be changed, but you must change both files
int postcodeCmp(Ad a, int p) {

    if (a->postcode < p) {
        return -1;
    } else if (a->postcode > p) {
        return 1;
    } else {
        return 0;
    }

    return 0;
}

// add an Ad to Postcode — INCOMPLETE
void addAdToPostcode(Postcode p, Ad a) {



    return;
}

// free all memory associated with a Postcode - INCOMPLETE
void PostcodeFree(Postcode p) {

    // while loop to free all of the Ads array - to be done



    free(p);

    return;
}
