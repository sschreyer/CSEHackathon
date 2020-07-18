#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Postcode.h"
#include <ad.c>

struct postcode {
    Ad *ads;
    int p;
};


// new postcode
Postcode PostcodeNew() {

    return NULL;
}

// compare two postcodes - INCOMPLETE — used for inserting into the tree
// if you need another postcodeCmp function, call it something else

// Compares two postcodes. Returns a negative number if the  first   is
// earlier  than  the  second  ,  0 if they're the same, and a
// positive number if the first time is later than the second.

// takes in an Ad and an int because that's what is specified in Tree.c
// this can be changed, but you must change both files
int postcodeCmp(Ad a, int p) {

    return 0;
}

// add an Ad to Postcode — INCOMPLETE
void addAdToPostcode(Postcode p, Ad a) {

    return;
}

// free all memory associated with a Postcode - INCOMPLETE
void PostcodeFree(Postcode p) {

    return;
}
