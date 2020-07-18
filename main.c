#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Tree.h"
#include "ad.h"
#include "Postcode.h"

#define MAX_LINE_SIZE 1000
#define MAX_WORD_SIZE 100

int main(void) {

    int usr_post;
	printf("Please Enter Your Postcode: ");
	scanf("%d", &usr_post);


	char line[MAX_LINE_SIZE];
	char word[MAX_WORD_SIZE];
	FILE *in = fopen("random.txt", "r");

    int i = 0;
    char *postcode;
    char *businessName;
    char *ad;

    while(fgets(line, MAX_LINE_SIZE, in) != NULL){
        // Get postcode — will need to convert to int, though
        while(line[i] != ' ') {
            word[i] = line[i];
            i++;
        }
        // line[i] is currently the first space
        word[i] = '\0';

        postcode = strdup(word);

        // Now get businessName

        // if we only incremented once, we would be at the second space!
        i += 2;
        int found_space = 0;
        int j = 0;
        // We know what our input looks like, so make some assumptions
        while (1) {
            if (line[i] == ' ') {
                if (found_space == 0) {
                    word[j] = line[i];
                    found_space = 1;
                } else {
                    // line[i] is a space, so was line[j - 1] and
                    // word [j - 1]
                    // so but the null terminator at word[j -1]
                    word[j - 1] = '\0';
                    businessName = strdup(word);
                    break;
                }
            } else {
                word[j] = line[i];
                found_space = 0;
            }
            i++;
            j++;
        }


        // Now get ad
        j = 0;
        while(line[i] != '\n') {
            word[j] = line[i];
            i++;
            j++;
        }

        // line[i] is currently a newline
        word[j] = '\0';
        ad = strdup(word);
    }


    int p = atoi(postcode);
	AdNew(ad, businessName, p);



	fclose(in);

    return 0;
}
