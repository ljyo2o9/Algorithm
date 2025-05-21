#include <iostream>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

string input;

int eval(const string& s) {
  stack<int> nums;
  stack<int> sics;
  int num = 0, sic = 1, i = 0, result = 0;

  while(i < s.length()) {
    char current = s[i];

    if(isdigit(current)) {
      while(i < s.length() && isdigit(s[i])) {
        num = num * 10 + (s[i]-'0');
        i++;
      }
      result = result + (num * sic);
      num = 0;
      i--;
    } else if (current == '+') {
      sic = 1;
    } else if (current == '-') {
      sic = -1;
    } else if (current == '(') {
      nums.push(result);
      sics.push(sic);
      result = 0;
      sic = 1;
    } else if (current == ')'){
      result = nums.top() + (sics.top() * result);
      nums.pop();
      sics.pop();
    }

    i++;
  }

  return result;
}

void generateGalho() {
  int tmp = 0;
  string tmp_str = "";
  for(int i=0; i<input.length(); i++){
    char current = input[i];
    
    if(current == '-') {
      if(tmp > 0) {
        tmp_str += ")-(";
      } else {
        tmp_str += "-(";
        tmp++;
      }
    } else {
      tmp_str += current;
    }
  }
  while(tmp) {
    tmp--;
    tmp_str += ')';
  }
  input = tmp_str;
}

int main() {
    cin >> input;
    generateGalho();
    cout << eval(input) << '\n';
    return 0;
}
