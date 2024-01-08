/*
Author: Alistair Chambers
Date: 01/08/24
Project Description: This program converts plain english to morse code and vice versa.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "morse.h"





int main(){
    //Dec;are selections for either english to morse or morse to english
    int selection;
    //Declare string to hold user input
    char input[150];
    //Declare string to hold output
    char output[100];
    

    //Prompt user for selection
    printf("Please select an option:\n");
    printf("1. English to Morse Code\n");
    printf("2. Morse Code to English\n");
    scanf("%d", &selection);

    //If user selects 1, prompt for english input

    if(selection == 1){
        printf("Please enter a string to convert to morse code:\n");
        scanf("%s", input);
        //Convert input to morse code
        englishToMorse(input, output);
        //Print output
        printf("%s\n", output);
    }
    //If user selects 2, prompt for morse input
    else if(selection == 2){
        printf("Please enter a string to convert to english:\n");
        //scanf("%s", input); doesnt work due to spaces
        fflush(stdin);//clear input buffer
        fgets(input, 150, stdin);//get input from user
        input[strcspn(input, "\n")] = '\0'; //remove newline character

        //printf("%s\n", input); test input for consistency

        //Convert input to english
        morseToEnglish(input, output);
        //Print output
        printf("%s\n", output);
    }
    //If user selects anything else, print error message
    else{
        printf("Invalid selection.\n");
    }

    return 0;


}

