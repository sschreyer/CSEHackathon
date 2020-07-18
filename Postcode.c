#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Postcode.h"
#include "ad.h"
#include "Tree.h"

struct postcode {
    Ad firstAd;
    int p;
    int numAds;
};


// new postcode
Postcode PostcodeNew(Ad a) {

    assert(a != NULL);

    Postcode new = malloc(sizeof(struct postcode));
    assert(new != NULL);
    new->firstAd = a;
    new->p = a->postcode;
    new->numAds = 1;

    return Postcode;
}

// compare two postcodes - INCOMPLETE — used for inserting into the tree
// if you need another postcodeCmp function, call it something else

// Compares two postcodes. Returns a negative number if the  first   is
// elower  than  the  second  ,  0 if they're the same, and a
// positive number if the first postcode is larger than the second.

// takes in an Ad and an int because that's what is specified in Tree.c
// this can be changed, but you must change both files
int PostcodeCmp(Node n, Ad a) {
    assert (p != NULL && Ad != NULL);

    // need to get the Postcode from the Node, the
    Postcode postcode = getPostcodeFromNode(n);
    int firstP = postcode->p;
    // need to get the p from the Ad
    int secondP = getPFromAd(a);

    if (firstP < secondP) {
        return -1;
    } else if (firstP > secondP) {
        return 1;
    }

    return 0;
}

// add an Ad to Postcode
void addAdToPostcode(Postcode p, Ad a) {
    assert (p != NULL);

    if (p->firstAd == NULL) {
        p->firstAd = a;
    }

    // We need to loop through the list of ads to find the last
    Ad curr = p->firstAd;
    Ad prev = NULL;

    while (curr != NULL) {
        prev = curr;
        curr = curr->next;
    }

    // add a to the end of the list
    prev->next = a;

    return;
}

// free all memory associated with a Postcode
void PostcodeFree(Postcode p) {
    assert (p != NULL);


    Ad curr = p->firstAd;
    Ad prev = NULL;
    while (curr != NULL) {
        prev = curr;
        curr = curr->next;
        free(prev);
    }

    free(p);

    return;
}

// prints all ads in a postcode - INCOMPLETE
void PostcodePrint(Postcode p) {
    assert (p != NULL);

    Ad curr = p->firstAd;
    while (curr != NULL) {

        printAd(curr);

        curr = curr->next;
    }

    return;
}

int getPfromPostcode(Postcode postcode) {
    return postcode->p;
}
