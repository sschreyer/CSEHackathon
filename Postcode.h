// Interface for the Postcode ADT

#ifndef POSTCODE_H
#define POSTCODE_H

typedef struct postcode *Postcode;

// new postcode
Postcode PostcodeNew();

// compare two postcodes 
int PostcodeCmp(Postcode one, Postcode code two);

// add an Ad to our postocde
void addAdToPostcode(Postcode p, Ad a);

// free all memory associated with a Postcode

void PostcodeFree(Postcode p);