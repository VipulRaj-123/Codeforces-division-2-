/* You are given a string s consisting of the characters '0', '1', and '?'. You need to replace all the characters with '?' in the string s by '0' or '1' so that the string becomes a palindrome and has exactly a characters '0' and exactly b characters '1'. Note that each of the characters '?' is replaced independently from the others.

A string t of length n is called a palindrome if the equality t[i]=t[n-i+1] is true for all i (1=i=n).

For example, if s="01?????0", a=4 and b=4, then you can replace the characters '?' in the following ways:

"01011010";
"01100110".
For the given string s and the numbers a and b, replace all the characters with '?' in the string s by '0' or '1' so that the string becomes a palindrome and has exactly a characters '0' and exactly b characters '1'.

Input
The first line contains a single integer t (1=t=104). Then t test cases follow.

The first line of each test case contains two integers a and b (0=a,b=2·105, a+b=1).

The second line of each test case contains the string s of length a+b, consisting of the characters '0', '1', and '?'.

It is guaranteed that the sum of the string lengths of s over all test cases does not exceed 2·105.

Output
For each test case, output:

"-1", if you can't replace all the characters '?' in the string s by '0' or '1' so that the string becomes a palindrome and that it contains exactly a characters '0' and exactly b characters '1';
the string that is obtained as a result of the replacement, otherwise.
If there are several suitable ways to replace characters, you can output any.

Example
inputCopy
9
4 4
01?????0
3 3
??????
1 0
?
2 2
0101
2 2
01?0
0 1
0
0 3
1?1
2 2
?00?
4 3
??010?0
outputCopy
01011010
-1
0
-1
0110
-1
111
1001
0101010 */

#include <bits/stdc++.h>
using namespace std;

void no() {
  cout << "-1" << endl;
}

void solve() {
  int a, b;
  cin >> a >> b;
  string s;
  cin >> s;
  for (int times = 0; times < 2; times++) {
    for (int i = 0; i < (int) s.size(); i++) {
      int j = (int) s.size() - i - 1;
      if (s[i] != '?') {
        if (s[j] == '?') {
          s[j] = s[i];
        } else if (s[i] != s[j]) {
          no();
          return;
        }
      }
    }
    reverse(s.begin(), s.end());
  }
  a -= count(s.begin(), s.end(), '0');
  b -= count(s.begin(), s.end(), '1');
  int ques = count(s.begin(), s.end(), '?');
  bool emptyMid = (s.size() % 2 == 1 && s[s.size() / 2] == '?');
  if (a < 0 || b < 0 || a + b != ques || (emptyMid && a % 2 == 0 && b % 2 == 0)) {
    no();
    return;
  }
  if (a % 2 == 1 || b % 2 == 1) {
    int i = s.size() / 2;
    if (s[i] != '?') {
      no();
      return;
    }
    s[i] = (a % 2 == 1 ? '0' : '1');
    if (a % 2 == 1) {
      a--;
    } else {
      b--;
    }
  }
  if (a % 2 == 1 || b % 2 == 1) {
    no();
    return;
  }
  for (int i = 0; i < (int) s.size(); i++) {
    if (s[i] == '?') {
      int j = s.size() - i - 1;
      if (a > 0) {
        a -= 2;
        s[i] = s[j] = '0';
      } else {
        b -= 2;
        s[i] = s[j] = '1';
      }
    }
  }
  cout << s << endl;
}

int main() {
  int tests;
  cin >> tests;
  while (tests-- > 0) {
    solve();
  }
  return 0;
}
