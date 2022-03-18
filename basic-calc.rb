print "Choose the operation:\n 1) Add\n 2) Subtract\n 3) Multiply\n 4) Divide\n"

user = gets.chomp.to_i

print "Please enter your first number: ";

uinput1 = gets.chomp.to_i

print "Please enter your second number: ";

uinput2 = gets.chomp.to_i

if user == 1
  result = uinput1 + uinput2
elsif user == 2
  result = uinput1 - uinput2
elsif user == 3
  result = uinput1 * uinput2
elsif user == 4
  if not uinput2
    print "That's illegal lmao"
  else
    result = uinput1 / uinput2
  end
end

print "#{result}\n"
