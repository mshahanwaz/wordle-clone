#include "interface.h"
#include "utils.h"

int main() {
    string word = getRandomWord();
    vector<string> attempts(word.length() + 1);
    int turns = word.length() + 1;

    for (int i = 0; i < turns; ++i) {
        system("clear");
        printResults(attempts, word);

        cout << endl << "Guess the word :: ";
        getline(cin >> ws, attempts[i]);

        if (checkWord(attempts[i], word)) {
            system("clear");
            cout << "WINNER" << endl << endl;
            printResults(attempts, word);
            return 0;
        }
    }
    system("clear");
    cout << "LOSER" << endl << endl;
    printResults(attempts, word);
    return 0;
}
