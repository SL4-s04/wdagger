#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 500

char *networkUse(char host[], char usr[], char pass[]) {
	
char netuse[SIZE] = "net use \\\\";
char user_arg[SIZE] = " /user:";
char pass_arg[SIZE] = " ";

strcat(netuse, host);
strcat(user_arg, usr);	
strcat(netuse, user_arg);
strcat(pass_arg, pass);
strcat(netuse, pass_arg);
	
system(netuse);	

}

int main(int argc, char *argv[]) {
    int verbose = 0;
    char *inputFile = NULL;
    char *outputFile = NULL;
    FILE *f = fopen("wli.txt", "w");
    char buffer[SIZE];

    for (int i = 1; i < argc; i++) {
    	
    	if (strcmp(argv[i], "-v") == 0) {
            verbose = 1;
    
        } else if ((strcmp(argv[i], "-h") == 0) && i + 1 < argc) {
            inputFile = argv[++i];
        
		} else if ((strcmp(argv[i], "-u") == 0) && i + 1 < argc) {
            outputFile = argv[++i];    
            
        } else {
            printf("command not found: %s\n", argv[i]);
            return 1;
        }
    }

    if(inputFile && outputFile) {
    	
        networkUse(inputFile, outputFile, buffer);
	    
               	
    } else {
    	fprintf(stderr, "wdagger:\n");
        fprintf(stderr, "-h: <hostname>\n");
        fprintf(stderr, "-u: <username>");
        fprintf(stderr, "\n\nexample: -h <hostname> -u <username>");
        return 0;
    }
    return 0;
}
