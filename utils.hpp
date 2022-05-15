#ifndef UTILS_H
#define UTILS_H

#include <bits/stdc++.h>
using namespace std;

inline string getRandomWord(vector<string> wordlist) {
  srand(time(0));
  int len = wordlist.size();
  int idx = rand() % len;
  return wordlist[idx];
}

inline bool checkWord(string a, string b) {
  int n = a.length();
  int m = b.length();
  bool isEqual = (n == m);
  for (int i = 0; i < n && isEqual; ++i)
    if (a[i] != b[i])
      isEqual = false;
  return isEqual;
}

inline bool checkValidity(string a, string b, map<string, bool> dictionary) {
  int n = a.length();
  if (n == b.length()) {
    for (int i = 0; i < n; ++i) {
      if (a[i] == ' ')
        return false;
    }
    return dictionary[a];
  }
  return false;
}

#endif
