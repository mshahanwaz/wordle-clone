#ifndef UTILS_H
#define UTILS_H

#include <bits/stdc++.h>
using namespace std;

string getRandomWord() {
    return "SIMPLE";
}

bool checkWord(string a, string b) {
    int n = a.length();
    int m = b.length();
    bool isEqual = (n == m);
    for (int i = 0; i < n && isEqual; ++i)
        if (a[i] != b[i])
            isEqual = false;
    return isEqual;
}

#endif
