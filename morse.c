#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "morse.h"


//function to convert english to morse
void englishToMorse(char *input, char *output){
    //Declare array of strings to hold morse code
    char *morse[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-",
                        ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-",
                        ".--", "-..-", "-.--", "--.."};
    //Declare array of strings to hold alphabet
    char *alphabet[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
                            "k", "l", "m", "n", "o", "p", "q", "r", "s", "t",
                            "u", "v", "w", "x", "y", "z"};
    
    //map english to morse
    for(int i = 0; i < strlen(input); i++){
        for(int j = 0; j < 26; j++){
            if(tolower(input[i]) == *alphabet[j]){
                strcat(output, morse[j]);
                strcat(output, " ");
            }
        }
    }


}

//function to convert morse to english
void morseToEnglish(char *input, char *output){
    //Declare array of strings to hold morse code
    char *morse[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-",
                        ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-",
                        ".--", "-..-", "-.--", "--.."};
    //Declare array of strings to hold alphabet
    char *alphabet[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
                            "k", "l", "m", "n", "o", "p", "q", "r", "s", "t",
                            "u", "v", "w", "x", "y", "z"};
    
    //map  morse to english, each letter is separated by a space
    char *token = strtok(input, " ");
    printf("%s\n", input);
    while(token != NULL){
        for(int i = 0; i < 26; i++){
            if(strcmp(token, morse[i]) == 0){
                strcat(output, alphabet[i]);
            }
        }
        token = strtok(NULL, " ");
    }
    //.- .-.. .. ... - .- .. .-.

    

}


