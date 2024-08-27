/*#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Define asterisk patterns for each letter
const char *letterPatterns[26][5] = {
    {"  *  ", " * * ", "", "   ", "   *"},
    {"**** ", "*   ", "*** ", "*   ", "*** "},
    {" ***", "    ", "*    ", "*    ", " ****"},
    {"**** ", "*   ", "   ", "   ", "*** "},
    {"", "    ", "", "    ", "*"},
    {"", "    ", "", "    ", "*    "},
    {" ***", "    ", "*  *", "   *", " ****"},
    {"*   ", "   ", "", "*   ", "   *"},
    {"", "  *  ", "  *  ", "  *  ", ""},
    {"", "    *", "    *", "   *", " *** "},
    {"*   ", "  * ", "***  ", "*  * ", "*   *"},
    {"*    ", "*    ", "*    ", "*    ", "*"},
    {"*   ", "* *", " * ", "   ", "   *"},
    {"*   ", "*  ", " * ", "  *", "   *"},
    {" *** ", "*   ", "   ", "   *", " *** "},
    {"**** ", "*   ", "*** ", "*    ", "*    "},
    {" *** ", "*   ", " * ", "  **", " *** "},
    {"**** ", "*   ", "*** ", "*  * ", "*   *"},
    {" ***", "    ", " *** ", "    ", "*** "},
    {"*", "  *  ", "  *  ", "  *  ", "  *  "},
    {"*   ", "   ", "   ", "   *", " *** "},
    {"*   ", "   ", "   *", " * * ", "  *  "},
    {"*   ", "   ", " * ", "* *", "   *"},
    {"*   ", " * * ", "  *  ", " * * ", "   *"},
    {"*   *", " * * ", "  *  ", "  *  ", "  *  "},
    {"", "   * ", "  *  ", " *   ", ""}
};

// Function to print name using asterisks
void printNameAsterisk(const char *name) {
    char result[5][100] = {""};

    // Iterate through each character in the name
    for (int i = 0; i < strlen(name); ++i) {
        char letter = toupper(name[i]);
        if (letter == ' ') { // If the character is a space, add spaces to each line to create a space between words
            for (int j = 0; j < 5; ++j) {
                strcat(result[j], "  ");
            }
        } else { // If the character is not a space
            const char **pattern = letterPatterns[letter - 'A']; // Retrieve the corresponding pattern from the array
            for (int j = 0; j < 5; ++j) {
                strcat(result[j], pattern[j]);
                strcat(result[j], " ");
            }
        }
    }

    // Print each line of the resulting name
    for (int i = 0; i < 5; ++i) {
        printf("%s\n", result[i]);
    }
}

int main() {
    const char *name = "angha";
    printNameAsterisk(name);
    return 0;
}*/




//incorrect
/*#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Define asterisk patterns for each letter
const char *letterPatterns[26][5] = {
    {"  *  ", " * * ", "", "   ", "   *"},
    {"**** ", "*   ", "*** ", "*   ", "*** "},
    {" ***", "    ", "*    ", "*    ", " ****"},
    {"**** ", "*   ", "   ", "   ", "*** "},
    {"", "    ", "", "    ", "*"},
    {"", "    ", "", "    ", "*    "},
    {" ***", "    ", "*  *", "   *", " ****"},
    {"*   ", "   ", "", "*   ", "   *"},
    {"", "  *  ", "  *  ", "  *  ", ""},
    {"", "    *", "    *", "   *", " *** "},
    {"*   ", "  * ", "***  ", "*  * ", "*   *"},
    {"*    ", "*    ", "*    ", "*    ", "*"},
    {"*   ", "* *", " * ", "   ", "   *"},
    {"*   ", "*  ", " * ", "  *", "   *"},
    {" *** ", "*   ", "   ", "   *", " *** "},
    {"**** ", "*   ", "*** ", "*    ", "*    "},
    {" *** ", "*   ", " * ", "  **", " *** "},
    {"**** ", "*   ", "*** ", "*  * ", "*   *"},
    {" ***", "    ", " *** ", "    ", "*** "},
    {"*", "  *  ", "  *  ", "  *  ", "  *  "},
    {"*   ", "   ", "   ", "   *", " *** "},
    {"*   ", "   ", "   *", " * * ", "  *  "},
    {"*   ", "   ", " * ", "* *", "   *"},
    {"*   ", " * * ", "  *  ", " * * ", "   *"},
    {"*   *", " * * ", "  *  ", "  *  ", "  *  "},
    {"", "   * ", "  *  ", " *   ", ""}
};

// Function to print name using asterisks
void printNameAsterisk(const char *name) {
    char result[5][100] = {""};

    // Iterate through each character in the name
    for (int i = 0; i < strlen(name); ++i) {
        char letter = toupper(name[i]);
        if (letter == ' ') { // If the character is a space, add only one space to each line
            for (int j = 0; j < 5; ++j) {
                strcat(result[j], " ");
            }
        } else { // If the character is not a space
            const char **pattern = letterPatterns[letter - 'A']; // Retrieve the corresponding pattern from the array
            for (int j = 0; j < 5; ++j) {
                strcat(result[j], pattern[j]);
                strcat(result[j], " ");
            }
        }
    }

    // Print each line of the resulting name
    for (int i = 0; i < 5; ++i) {
        printf("%s\n", result[i]);
    }
}

int main() {
    const char *name = "angha";
    printNameAsterisk(name);
    return 0;
}*/

