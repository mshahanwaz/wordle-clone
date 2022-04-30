#ifndef INTERFACE_H
#define INTERFACE_H

#include <bits/stdc++.h>
using namespace std;

void printBorders(int n) {
    for (int i = 0; i < n; ++i) 
        cout << "+---";
    cout << "+" << endl;
}

void printSeparators(string s, int n) {
    int m = s.length();
    for (int i = 0; i < n; ++i) {
        char ch = ' ';
        if (i < m)
            ch = s[i];
        cout << "| " << ch << " ";
    }
    cout << "|" << endl;
}

void printResults(vector<string> a, string b) {
    int n = a.size();
    int m = b.length();
    for (int i = 0; i < n; ++i) {
        printBorders(m);
        printSeparators(a[i], m);
    }
    printBorders(m);
}

#endif
