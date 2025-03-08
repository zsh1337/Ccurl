#include <stdio.h>
#include <stdlib.h>

int main(){
    char command[256];
    char url[BUFSIZ];
    printf("Enter Url:\n");
    scanf("%s", &url);
    // Formater la commande avec l'URL
    snprintf(command, sizeof(command), "curl %s", url);
    system(command);
}