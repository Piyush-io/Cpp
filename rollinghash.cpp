#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to calculate the hash of a string
int calculateHash(const string& s) {
    int hashValue = 0;
    for (char c : s) {
        hashValue += c - 'a' + 1;
    }
    return hashValue;
}

vector<pair<string, int>> findHashMatches(const string& S, const string& P) 
{
    int patternHash = calculateHash(P);
    int patternLength = P.length();
    
    vector<pair<string, int>> matches;
    for (int i = 0; i <= S.length() - patternLength; ++i) 
    {
        if (i + patternLength <= S.length()) {  // Check if the substring is within bounds
            string substring = S.substr(i, patternLength);
            if (calculateHash(substring) == patternHash) {
                matches.push_back(make_pair(substring, i));
            }
        }
    }
    
    return matches;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S, P;
        cin >> S >> P;

        vector<pair<string, int>> matches = findHashMatches(S, P);

        if (matches.empty()) {
            cout << -1 << endl;
        } else {
            for (const auto& match : matches) {
                cout << match.first << " " << match.second << endl;
            }
        }
    }

    return 0;
}