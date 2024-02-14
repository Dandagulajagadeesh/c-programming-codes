#include <stdio.h>

void countLinesWordsChars(FILE *file) {
    int lines = 0, words = 0, characters = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n') {
            lines++;
        }

        // Count words
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            words++;
        }
    }

    // If the last word is not followed by space or newline
    if (characters > 0) {
        words++;
    }

    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);
}

int main() {
    FILE *file;
    char filename[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    countLinesWordsChars(file);

    fclose(file);

    return 0;
}




    
    
	
 


