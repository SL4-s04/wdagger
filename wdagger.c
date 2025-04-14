#include <stdio.h>
#include <string.h>

#define SIZE 500

char *networkUser(char host[], char usr[], char pass[]) {
	
char netuse[SIZE] = "net use \\\\"; //for recreate "net use" command
char user_arg[SIZE] = " /user:";
char pass_arg[SIZE] = " ";
    
strcat(netuse, host); //concat the differents string
strcat(user_arg, usr);	
strcat(netuse, user_arg);
strcat(pass_arg, pass);
strcat(netuse, pass_arg);
        
system(netuse);	//calling the system for execute the created command
    
}

char *hostname(char c[]) {
    return c;
}

char *username(char c[]) {
    return c;
}

char *password(char c[]) {
return c;
}

int main(int argc, char *argv[]) { //need to inserting arguments on terminal

int *inpf;
int *inpf2;
FILE *f = fopen("wli.txt", "r"); //for open and reading file
char buffer[SIZE];

for (int i = 0; i < argc; i++)
{   
    if (strcmp(argv[i], "-v") == 0) {
            verbose = 1;
           //with this method, we can adding more arguments after flag
        } else if ((strcmp(argv[i], "-h") == 0) && i + 1 < argc) { 
            inputFile = argv[++i];
        
	} else if ((strcmp(argv[i], "-u") == 0) && i + 1 < argc) {
            outputFile = argv[++i];    
            
        } else {
            printf("command not found: %s\n", argv[i]);
            return 1;
        }
}


if(inpf && inpf2 && buffer) {
         networkUser(inpf, inpf2, buffer);
    
} else { //if u dont add arguments, will print a message on how to use the command
    	fprintf(stderr, "wdagger:\n");
        fprintf(stderr, "-h: <hostname>\n");
        fprintf(stderr, "-u: <username>");
        fprintf(stderr, "\n\nexample: -h <hostname> -u <username>");
        return 0;
    }
    return 0;
}
