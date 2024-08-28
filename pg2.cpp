#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1[] = {"hello world"};
    int n = s1[0].length();
    int i = 0, j = 0;
    string result = "";

    while (i<n && s1[0][i] == ' ') {
        i++;
    }
    while (i<n) {
        j = i;
        while (j<n && s1[0][j]!= ' ') {
            j++;
        }
        string sub = s1[0].substr(i,j-i);
        if (result.length() == 0) {
            result = sub;
        } else {
            result = sub + " " + result;
        }
        i = j + 1;
        while (i<n && s1[0][i]==' ') {
            i++;
        }
    }
    cout << result << endl;
    return 0;
}
