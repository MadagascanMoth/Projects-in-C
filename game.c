#include <stdio.h>
#include <stdlib.h>

int main (){

    char color[20];
    char pluralNoun[20];
    char celebrity[20];

    printf("Enter your favorite color: ");
    scanf("%s",color);
    printf("Enter a plural noun: ");
    scanf("%s",pluralNoun);
    printf("Enter your favorite celebrity: ");
    scanf("%s",celebrity);

    printf("Roses are %s\n",color);
    printf("%s are red\n",pluralNoun);
    printf("I love %s\n",celebrity);
}