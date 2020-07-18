// Interface for the AD ADT

#ifndef AD_H
#define AD_H

typedef struct ad *Ad;


// Creates a new ad
Ad AdNew(char *ad, char *businessName, int postcode);

// Frees an Ad
Ad AdFree(Ad a);

// prints an ad
void printAd(Ad a);


#endif
