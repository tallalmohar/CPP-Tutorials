#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string sentence = "This is a sample sentence.";
    vector<string> words;
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    // Print the words in the vector
    for (size_t i = 0; i < words.size(); i++) {
        cout << "words[" << i << "] = " << words[i] << endl;
    }

    return 0;
}