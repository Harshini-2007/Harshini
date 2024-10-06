# Guess the number
import random
number=random.randint(1,20)
for i in range(1,4):
    print("this is",i,"guess")
    guess=int(input())
    if guess > number:
        print("Guessed higher than value")
    elif guess < number:
        print("Guessed lower than value")
    else:
      break
if(number==guess):
    print("correct")
else:
     print("ans",number)




