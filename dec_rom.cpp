#include <iostream>

using namespace std;

// https://www.geeksforgeeks.org/converting-decimal-number-lying-between-1-to-3999-to-roman-numerals/

string dec_to_rom(const int& val)
{
    string res = "";
    int number = val;
   
    const int count = 13;
    int num[count] = { 1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000 };
    string sym[count] = { "I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M" };
    int i = count - 1;
   
    while(number > 0) {
      int div = number / num[i];
      number = number % num[i];
      while(div--) {
        res += sym[i];
      }
      --i;
    }
   
    return res;
}

int main()
{
    // "CIX" 109
    // "MCMIV" 1904
    int val = 1904;
    cout << "Dec is " << val << " | " << "Rom is " << dec_to_rom(val) << endl;

    return 0;
}
