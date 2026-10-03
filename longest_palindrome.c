#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int n, start = 0, maxLength = 1;

    printf("Enter a string: ");
    scanf("%999s", str);

    n = strlen(str);

    for (int i = 0; i < n; i++) {
        // Odd-length palindrome
        int left = i, right = i;

        while (left >= 0 && right < n &&
               str[left] == str[right]) {
            if (right - left + 1 > maxLength) {
                maxLength = right - left + 1;
                start = left;
            }
            left--;
            right++;
        }

        // Even-length palindrome
        left = i;
        right = i + 1;

        while (left >= 0 && right < n &&
               str[left] == str[right]) {
            if (right - left + 1 > maxLength) {
                maxLength = right - left + 1;
                start = left;
            }
            left--;
            right++;
        }
    }

    printf("Longest Palindromic Substring: ");

    for (int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
