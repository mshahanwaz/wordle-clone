#include "interface.hpp"
#include "utils.hpp"

#define CLEAR_CONSOLE system("clear")
#define WORDS_FILE "wordlist.txt"

int main() {
  ifstream file;
  map<string, bool> dictionary;
  vector<string> wordlist;
  string tempword;

  file.open(WORDS_FILE);
  while (file >> tempword) {
    dictionary[tempword] = true;
    wordlist.push_back(tempword);
  }
  string randomWord = getRandomWord(wordlist);
  vector<string> attempts(randomWord.length() + 1);
  int turns = randomWord.length() + 1;

  for (int i = 0; i < turns; ++i) {
    bool valid = true;
    do {
      CLEAR_CONSOLE;
      if (!valid)
        attempts[i] = "";
      printResults(attempts, randomWord);
      if (!valid)
        cout << endl << "\t\033[41mDISCARDED\033[0m";
      cout << endl << "\tGuess the word :: ";
      getline(cin >> ws, attempts[i]);
      valid = checkValidity(attempts[i], randomWord, dictionary);
    } while (!valid);

    if (checkWord(attempts[i], randomWord)) {
      CLEAR_CONSOLE;
      printResults(attempts, randomWord);
      cout << endl << "\t🎉️ -- W I N N E R -- 🎉️" << endl;
      return 0;
    }
  }
  CLEAR_CONSOLE;
  printResults(attempts, randomWord);
  cout << endl << "\t👎️ LOSER - \"" << randomWord << "\"" << endl;
  return 0;
}
