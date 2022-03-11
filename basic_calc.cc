#include <iostream>

using namespace std;

int main() {
  int user = 0, uinput1 = 0, uinput2 = 0, result = 0;
  
  cout << "Choose the operation:\n 1) Add\n 2) Subtract\n 3) Multiply\n 4) Divide\n";

  cin >> user;
  
  cout << "Please enter your first number: ";
  cin >> uinput1;
  cout << "Please enter your second number: ";
  cin >> uinput2;

  if(user == 1){
    result = uinput1 + uinput2;
  } else if (user == 2){
    result = uinput1 - uinput2;
  } else if (user == 3){
    result = uinput1 * uinput2;
  } else if (user == 4){
    if(!uinput2){
      cout << "That's illegal lmao\n";
    } else {
      result = uinput1 / uinput2;
    }
  } else {
    cout << "You chose an operation that does not exist!\n";
  }

  cout << result << endl;
}
