#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h> 

void scan_word(char *word);
bool is_anagram(const char *word1, const char *word2);

#define WORD_LEN 100
int main(void) {
    char first_word[WORD_LEN + 1] = {0}, second_word[WORD_LEN + 1] = {0};

    // Reading and converting the first word to uppercase
    printf("Enter first word: ");
    scan_word(first_word);

    // Reading and converting the second word to uppercase
    printf("Enter second word: ");
    scan_word(second_word);

    // Test if words are the same
    if (is_anagram(first_word, second_word))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}


void scan_word(char *word) {
    char c;
    
    while ((c = getchar()) != '\n') {
        if (isalpha(c)){
            *word++ = toupper(c);   // Convert word to uppercase
        }
    }
}


bool is_anagram(const char *word1, const char *word2) {

    int letters[26] = {0};
    int *same = letters;

    /* ASCII characters */
    // count the number of occurrences of each alphabet character in word1
    while (*word1) {
        letters[*word1++ - 'A']++;    //increment same
    }

    // count the number of occurrences of each alphabet character in word2 
    while (*word2) {
        letters[*word2++ - 'A']--;    //decrement same 
    }

    for (int i = 0; i < 26; i++){
        if (same[i] != 0){
            return false;           
        }
    }   
    return true;                    // All letters are the same
}

