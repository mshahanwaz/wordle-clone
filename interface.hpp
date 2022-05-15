#ifndef INTERFACE_H
#define INTERFACE_H

#include <bits/stdc++.h>
using namespace std;

inline void printBorders(int n) {
  for (int i = 0; i < n; ++i)
    cout << "+---";
  cout << "+" << endl;
}

inline void printChar(char ch, int idx, string s) {
  cout << "|";
  if (ch == s[idx])
    cout << "\033[42;30m";
  else if (s.find(ch) != string::npos)
    cout << "\033[43;30m";
  cout << " " << ch << " \033[0m";
}

inline void printSeparators(string a, string s, int n) {
  int m = s.length();
  for (int i = 0; i < n; ++i) {
    char ch = ' ';
    if (i < m)
      ch = s[i];
    printChar(ch, i, a);
  }
  cout << "|" << endl;
}

inline void printBanner() {
  cout << "██╗    ██╗ ██████╗ ██████╗ ██████╗ ██╗     ███████╗" << endl;
  cout << "██║    ██║██╔═══██╗██╔══██╗██╔══██╗██║     ██╔════╝" << endl;
  cout << "██║ █╗ ██║██║   ██║██████╔╝██║  ██║██║     █████╗  " << endl;
  cout << "██║███╗██║██║   ██║██╔══██╗██║  ██║██║     ██╔══╝  " << endl;
  cout << "╚███╔███╔╝╚██████╔╝██║  ██║██████╔╝███████╗███████╗" << endl;
  cout << " ╚══╝╚══╝  ╚═════╝ ╚═╝  ╚═╝╚═════╝ ╚══════╝╚══════╝" << endl;
  cout << endl;
  cout << "\t Made by - M. Shahanawaz" << endl;
  cout << endl;
}

inline void printResults(vector<string> a, string b) {
  int n = a.size();
  int m = b.length();
  printBanner();
  for (int i = 0; i < n; ++i) {
    cout << "\t";
    printBorders(m);
    cout << "\t";
    printSeparators(b, a[i], m);
  }
  cout << "\t";
  printBorders(m);
}

#endif
