#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/*void readFile (const char *input_file) {
	char *line;
	FILE *file_stream = NULL;
	ssize_t read;
	size_t len = 0;
	
	file_stream = fopen(input_file, "r");
	
	if (file_stream == NULL) {
		fprintf(stderr, "Couldn't open file\n");
		exit(1);
	}

	while (read = getline(&line, &len, file_stream) != 1) {
	}

} */



// all to be written!
int main(void) {

	int usr_post;
	printf("Please Enter Your Postcode: ");
	scanf("%d", &usr_post);
	
	
	char target[10000];
	char *cut;
	FILE *fp = fopen("random.txt", "r");
    while(fgets(target, 10000, fp) != NULL){
        ch = strtok(target, " ");
        int cur_count = 0;
        while(cut != NULL){
            cur_lib[cur_count] = atoi(cut);
            cut = strtok(NULL, " ");
            cur_count++;
        }
    }

	
	
	AdNew(char *ad, char *businessName, int postcode);		
	
	
	
	
	
	
	fclose(f_op);

    return 0;
}













