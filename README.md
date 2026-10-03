# Longest Palindromic Substring in C

## Problem

Given a string, find the longest contiguous substring that is a palindrome.

## Concepts Used

* Strings
* Two pointers
* Palindrome checking
* Center expansion
* Nested loops

## Approach

The program checks each character as the center of an odd-length palindrome and each adjacent pair as the center of an even-length palindrome. It expands outward while the characters match and stores the longest palindrome found.

## Sample Input

```text
babad
```

## Sample Output

```text
bab
```

## Time Complexity

O(n²)

## Space Complexity

O(1) auxiliary space, excluding the input string.

## Language

C
