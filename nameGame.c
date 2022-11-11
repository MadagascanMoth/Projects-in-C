#include <stdio.h>
#include <stdlib.h>


int main(void){

    char firstName[20];
    char lastName[20];
    char answer[20];
    printf("What's your first name?");
    scanf("%s",firstName);
    printf("What's your last name?");
    scanf("%s",lastName);    
    printf("It's nice to meet you %s %s\n", firstName, lastName);
    printf("Let's build a game,%s",firstName);      
   
} 
