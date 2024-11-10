#include <stdio.h>
#include <string.h>

// Function to compress a word
void compress(const char *og, char *compressed) {
    int j = 0; 
    int i;
	for (i = 0; og[i] != '\0'; i++) {
        if (og[i] != og[i - 1]) {
            compressed[j++] = og[i];
        }
    }
    compressed[j] = '\0';
}

int main() {
    char word[10], compressed[10];
    
    // Taking input of a word
    printf("Enter a word: ");
    scanf("%s",word);

    // Compressing the word
    compress(word,compressed);
    
    // Calculating the removed letter
    int og_len = strlen(word);
    int compressed_len = strlen(compressed);
    int removed_letters = og_len - compressed_len;

    // Displaying the results
    printf("Original word: %s\n", word);
    printf("Compressed word: %s\n", compressed);
    printf("Total characters removed: %d\n", removed_letters);

    return 0;
}