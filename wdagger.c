#include <stdio.h>
#include <string.h>

#define SIZE 500

char *networkUser(char host[], char usr[], char pass[]) {
	
char netuse[SIZE] = "net use \\\\"; //for recreate "net use" command
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

int main(int argc, char *argv[]) { //need to inserting arguments on terminal

int *inpf;
int *inpf2;
FILE *f = fopen("wli.txt", "r"); //for open and reading file
char buffer[SIZE];

for (int i = 0; i < argc; i++)
{    //with this method, we can adding more arguments after flag
    if(strcmp(argv[i], "-u") && i + 1 < argc) { //specifies the username
    inpf = argv[i++];   
    }
    if(strcmp(argv[i], "-h") && i + 1 < argc) { //specifies the hostname
    inpf2 = argv[i++];
    }
}


if(inpf && inpf2 && buffer) {
         system(networkUser(inpf, inpf2, buffer));
    
}


}
