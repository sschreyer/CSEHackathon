// Interface for the Postcode ADT
#ifndef POSTCODE_H
#define POSTCODE_H

#include "ad.h"
#include "Tree.h"

typedef struct postcode *Postcode;

// new postcode
Postcode PostcodeNew();

// compare two postcodes given in a specific form
int PostcodeCmp(Node n, Ad a);

// add an Ad to our postocde
void addAdToPostcode(Postcode p, Ad a);

// free all memory associated with a Postcode

void PostcodeFree(Postcode p);

void PostcodePrint(Postcode p);

void addAdToPostcode(Postcode p, Ad a);

int getPfromPostcode(Postcode postcode);

#endif
