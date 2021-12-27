//
// 1.1 Return true if a string has all unique characters.
//

#include <iostream>
#include <limits>

using namespace std;

bool has_unique_characters(string);

int main()
{
    string input;
    while (true) {
        cout << "Input: ";
        if (!(cin >> input)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input invalid." << endl;
        } else {
            bool result;
            result = has_unique_characters(input);
            cout << boolalpha;
            cout << "Output: " << result << endl << "\n";
        }
    }
    return 0;
}

// O(n^2)
bool has_unique_characters(string input) {
    for (int i = 0; i < input.length(); i++) {
        for (int j = i + 1; j < input.length(); j++) {
            if (input.at(i) == input.at(j)) {
                return false;
            }
        }
    }
    return true;
}
