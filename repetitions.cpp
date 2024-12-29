#include <bits/stdc++.h>
using namespace std;

int main() {
    string DNA;
    cin >> DNA;

    int max_freq = 1;   // At least one character in the string, so minimum length is 1
    int current_freq = 1;

    for (int i = 1; i < DNA.size(); i++) {
        if (DNA[i] == DNA[i - 1]) {
            current_freq++;
        } else {
            max_freq = max(max_freq, current_freq); // Update max_freq if needed
            current_freq = 1; // Reset current frequency for the new character
        }
    }

    // Final update in case the longest repetition is at the end of the string
    max_freq = max(max_freq, current_freq);
    
    cout << max_freq << endl;
    return 0;
}
