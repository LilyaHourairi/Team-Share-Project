#include <stdio.h>

int main() {
    int age; 

    printf("Bonjour");
    printf("Entrez votre âge: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("Vous êtes mineur.\n");
    } 

    return 0; 
}