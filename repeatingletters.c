#include <stdio.h>
#include <string.h>

int main() {
    // char sentence for the sentence, and ptr char for the strtok to separate words
    char sentence[128], *repeatingwords[128];
    int i = 0; // used for the word count
    fgets(sentence, sizeof(sentence), stdin); // get the sentence
    sentence[strcspn(sentence, "\n")] = '\0';
    char* ptrSentence = strtok(sentence, " "); // separate each word
    
    while (ptrSentence != NULL) { // count the words inside the sentence
        // printf("%s\n", ptrSentence);
        repeatingwords[i] = ptrSentence; // store those words into another array
        i++; 
        ptrSentence = strtok(NULL, " "); // send null to continue reading through the sentence
    }
    
    for (int j = 0; j < i; j++) { // get each word from the new array
        for (int k = 0; repeatingwords[j][k] != '\0'; k++) { // then get each letter from each word
            if (repeatingwords[j][k] == repeatingwords[j][k + 1]) { // if n array matches n + 1 array, print that word out
                printf("%s\n", repeatingwords[j]);
                break; // skip to the next word
            }
        }
    }
    

    return 0;
}