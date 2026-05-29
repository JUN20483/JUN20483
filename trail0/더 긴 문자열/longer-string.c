#include <stdio.h>
#include <string.h>

int main() {

    char string1[21], string2[21];

    scanf(" %s %s", string1, string2);

    int len1 = strlen(string1);
    int len2 = strlen(string2);

    if(len1 != len2) {
        if(len1 < len2) {
            printf("%s %d", string2, len2);
        }
        else {
            printf("%s %d", string1, len1);
        }
    }
    else {
        printf("same");
    }

    // Please write your code here.
    return 0;
}