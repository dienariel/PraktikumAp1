#include <iostream>

using namespace std;

int main() {
    int n = 26;

    for (int i = 0; i < n; i++) {
        char current_char = 'A' + i;
        for (int j = i; j < n; j++) {
            cout << current_char << " ";
            current_char++;
        }
        cout << endl;
    }

    return 0;
}
