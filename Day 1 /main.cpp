#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int combineDigit(int f_digit, int l_digit) {
  /* int final = f_digit + l_digit;  */
  /* return final; */
  return f_digit * 10 + l_digit;
}

/* <leader>co */
void calculateNum(int n) {


}

int main () {

  /* string challenge; */

  ifstream mfiles("calibrate.txt");

  if (!mfiles.is_open()) {
    cerr << "Failed in opening files.\n";
    return 1;
  } else {
    std::vector<std::string> lines;
    string line;
    while (getline(mfiles, line)) {
      lines.push_back(line);
    }
    int finalResult = 0;
    for (const auto& l : lines) {
      if (!l.empty()) {
        // Find the first digit
        size_t firstDigitPos = 0;
        while (firstDigitPos < l.size() && !isdigit(l[firstDigitPos])) {
          ++firstDigitPos;
        }

        // Find the last digit
        size_t lastDigitPos = l.size() - 1;
        while (lastDigitPos > firstDigitPos && !isdigit(l[lastDigitPos])) {
          --lastDigitPos;
        }

        // Ensure both positions are valid and point to digits
        if (firstDigitPos < l.size() && isdigit(l[firstDigitPos]) &&
          lastDigitPos < l.size() && isdigit(l[lastDigitPos])) {
          int firstDigit = l[firstDigitPos] - '0'; // Convert char to int
          int lastDigit = l[lastDigitPos] - '0';   // Convert char to int

          // Call the combineDigit function
          int result = combineDigit(firstDigit, lastDigit);

          finalResult += result;

          // For demonstration, print the result
        }
      }
      cout << "Total Sum of combineDigit results :" << finalResult << "\n";
    }


  }


  return 0;
}
