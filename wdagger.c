#include <stdio.h>
#include <string.h>

#define SIZE 500

char *networkUser(char host[], char usr[], char pass[]) {
	
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

char *hostname(char c[]) {
    return c;
}

char *username(char c[]) {
    return c;
}

char *password(char c[]) {
return c;
}

int main(int argc, char *argv[]) {

int *inpf;
int *inpf2;
FILE *f = fopen("wli.txt", "r");
char buffer[SIZE];

for (int i = 0; i < argc; i++)
{
    if(strcmp(argv[i], "-u") && i + 1 < argc) {
    inpf = argv[i++];   
    }
    if(strcmp(argv[i], "-h") && i + 1 < argc) {
    inpf2 = argv[i++];
    }
}


if(inpf && inpf2) {
         system(networkUser(inpf, inpf2, buffer));
    
}


}