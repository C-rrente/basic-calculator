#include <stdio.h>

int main() {
  int user = 0;
  int uinput1 = 0;
  int uinput2 = 0;
  int result = 0;
  
  printf("Choose the operation:\n 1) Add\n 2) Subtraction\n 3) Multiply\n 4) Divide\n");
  
  scanf("%d", &user);
  
  printf("Please enter your first number: ");
  
  scanf("%d", &uinput1);
  
  printf("Please enter your first number: ");

   scanf("%d", &uinput2);
 
  if(user == 1){
    result = uinput1 + uinput2;
  } else if(user == 2){
    result = uinput1 - uinput2;
  } else if(user == 3){
    result = uinput1 * uinput2;
  } else if(user == 4){
    if(!uinput2){
      printf("That's illegal lmao\n");
    } else {
      result = uinput1 / uinput2;
    }
  }

  printf("%d\n", result);
  
  return 0;
}
