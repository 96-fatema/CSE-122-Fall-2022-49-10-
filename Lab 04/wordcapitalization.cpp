//codeforces problem no:281A
//codeforces problem name: Word Capitalization

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
  string s;
  cin >> s;
  putchar(toupper(s[0]));
  for(int i = 1; i < s.size();++i){
    cout << s[i];
  }
}
