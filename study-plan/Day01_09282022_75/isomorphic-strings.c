/*
 * Given two strings s and t, determine if they are isomorphic.
 * Two strings s and t are isomorphic if the characters in s can be replaced to get t.
 * All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
 *
 */



#include <stdlib.h>


bool isIsomorphic(char* s, char* t)
{
   int m[256] = {0}, n[256] = {0}, i = 0;

   while(s[i] != 0)
   {
       if (m[s[i]] != n[t[i]]) 
	  return false;

       m[s[i]]++;
       n[t[i]]++;

       i++;
   }

   return true;
}
