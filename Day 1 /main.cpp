#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void combineDigit(int f_digit, int l_digit) {
  if (f_digit | l_digit) {
  
  } else {
    /* do something  */
  }
}

/* <leader>co */
/* void calculateNum(int n) { */
/*  */
/*  */
/* } */

int main () {

  string challenge;
  string lines;

  ifstream mfiles("calibrate.txt");

  if (!mfiles.is_open()) {
    cerr << "Failed in opening files.\n";
    return 1;
  } else {
    while (mfiles) {
      getline (mfiles, lines);
      cout << lines << '\n';

    }

  }


  return 0;
}
