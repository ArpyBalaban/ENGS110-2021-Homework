input("think of a number in range 1-100 and press any key when you are ready")
min = 1
max = 100
while(True):
    computerGuess = ((max-min)//2)+min
    userAnswer = input("Is this your number? "+ str(computerGuess) + "\n please type Y if I guessed right, H if this number is too high, L if this number is too low")
    if (userAnswer == "Y"):
        print("User you'r the looser")
        break
    elif (userAnswer == "H"):
        max = computerGuess
        print( min, max)
    elif (userAnswer == "L"):
        min = computerGuess
        print(min, max)
    else:
        print("Please input a valid answer mentioned in the instruction")
           
print("Bye!")

	
	
	
        
