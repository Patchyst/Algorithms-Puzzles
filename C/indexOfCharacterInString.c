// This C program is for searching a character array for a character's position (if it exists at all)
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
    // String to match against
    const char str[]="abcdefghigjlmnopqrstuvwxyz";
    char ch;
    printf("\nEnter a character to match for: ");
    scanf("%c", &ch);
    char *pChar = NULL;
    pChar = strchr(str, ch);
    if(pChar == NULL){printf("\n[-] No Matches Found For: %c \n", ch);}
    else{int pos = strlen(str)-strlen(pChar);printf("The character is at index: %d\n", pos);}
}
