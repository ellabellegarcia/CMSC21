#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h> 


void scan_word(int occurrences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);


int main(void) {
    int first_word[26] = {0}, second_word[26] = {0};

    /* Counting the number of occurrences of each alphabet character in the first input */
    printf("Enter first word: ");
    scan_word(first_word);
    
    /* Counting the number of occurrences of each alphabet character in the second input */
    printf("Enter second word: ");
    scan_word(second_word);


    // Test if words are the same
    if (is_anagram(first_word, second_word)){
        printf("The words are anagrams.\n");
    }
    else{
        printf("The words are not anagrams.\n");
    }
    return 0;
}


/* Read user's input word, count number of occurrences of each alphabet character in the 
word and store them in occurences array */
void scan_word(int occurrences[26]) {
    char c;
    while ((c = getchar()) != '\n') {
        if (isalpha(c)){
            occurrences[toupper(c) - 'A']++;
        }
    }
}

/* Check if the elements in the two words are identical */
bool is_anagram(int occurrences1[26], int occurrences2[26]) {
    int i;
    for (i = 0; i < 26; i++) {
        /*if the same number of characters don't appear in each word, then they
        can't be anagrams */
        if (occurrences1[i] != occurrences2[i]){
            return false;
        }
    }
    return true;
}

