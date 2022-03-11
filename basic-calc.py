#Prompt user for operation
user = int(input("Choose the operation:\n 1) Add\n 2) Subtract\n 3) Multiply\n 4) Divide\n"))

#Take in the two values
uinput1 = int(input("Please enter your first number "))
uinput2 = int(input("Please enter your second number "))
result = 0 #Make sure result doesn't throw an error if never assigned

#Find operation
if user == 1:
  result = uinput1 + uinput2
elif user == 2:
  result = uinput1 - uinput2
elif user == 3:
  result = uinput1 * uinput2
elif user == 4:
  if uinput2 == 0:
    print("That's illegal lmao")
  else:
    result = uinput1 / uinput2 
else:
  print("You chose an operation that does not exist!")
  
print(result)
