#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int longestKSubstr(string s, int k) {
    if (k <= 0) return -1;
    if (s.empty()) return -1;

    int left = 0, max_length = -1;
    unordered_map<char, int> char_count;

    for (int right = 0; right < s.length(); ++right) {
        char_count[s[right]]++;

        while (char_count.size() > k) {
            char_count[s[left]]--;
            if (char_count[s[left]] == 0)
                char_count.erase(s[left]);
            left++;
        }

        max_length = max(max_length, right - left + 1);
    }

    return (max_length != -1) ? max_length : -1;
}

int main() {
    string S1 = "aabacbebebe";
    int K1 = 3;
    cout << longestKSubstr(S1, K1) << endl;  // Output: 7

    string S2 = "aaaa";
    int K2 = 2;
    cout << longestKSubstr(S2, K2) << endl;  // Output: -1

    return 0;
}
