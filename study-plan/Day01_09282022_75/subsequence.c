/*
 * Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

 * A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
 *
 *
 */


#include <stdlib.h>

bool isSubsequence(char* s, char* t)
{
  int sub = 0, values = 0, n_trav = 0, i = 0;
 
  while (s[i] != 0) i++;

  while (t[n_trav] != 0)
  {
      if (s[sub] == t[n_trav])
      {
	 sub++;
	 values++;
      }

      n_trav++;
  }

  return (values == i);
}
