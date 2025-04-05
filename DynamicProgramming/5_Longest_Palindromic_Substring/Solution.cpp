/*
Concept:
    1. Prüfen, ob ein Substring Symmetrisch ist
        - Schleife über String
        - Prüfen, ob String am rechten Rand gleich ist zum Linken Rand
        - Charakter jeweils um eins weiter in die Mitte zählen
        - Wenn einmalig unterschiedlich ist dann return False. Wenn Ende erreicht dann return True.
    2. Über den String iterieren, Substrings generieren und prüfen ob String symmetrisch ist
        - Die Länge der Substrings wird immer kleiner (Beginn bei String-Länge dass so schnell wie möglich returned werden kann)
        
*/
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
    public:
        string longestPalindrome(string s) 
        {
            for (uint32_t u32char_length = s.size(); u32char_length > 0; u32char_length--)
            {
                for (uint32_t start_pos = 0; start_pos <= s.size() - u32char_length; start_pos++)
                {
                    if (isStringSymmetric(s, start_pos, start_pos + u32char_length))
                    {
                        return s.substr(start_pos, u32char_length);
                    }
                }
            }
            return "";
        }
        
        bool isStringSymmetric(string& s_ref, uint32_t start_pos, uint32_t end_pos)
        {
            end_pos--;
            while (start_pos < end_pos) 
            {
                if (s_ref[start_pos] != s_ref[end_pos]) 
                {
                    return false;
                }
                start_pos++;
                end_pos--;
            }
            return true;
        }
    };

int main()
{
    Solution sol = Solution();
    string a = "abba";
    cout << sol.longestPalindrome(a) << endl;
    string b = "abbbbbbbbbbagggg";
    cout << sol.longestPalindrome(b) << endl;
    string c = "vbpgvehmsdocuqfnpzsqqsjbjkvzpqsubqbpjhzojdtkjcambviauhsxqvejgehzrhhvrgulubmirbppvbkftvazscxifsxtoarrdeyuihzcenqendvnthfdpotgpegdlaildigloesnfxkjichsxygazrvgbecuzkcdrgextmysxqerrueecpneynciasevytmatvqgleipwlaxwgajijkuceezmbtiigc";
    cout << sol.longestPalindrome(c) << endl;
}
