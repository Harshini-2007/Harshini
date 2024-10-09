#rock paper scisors!
import random
import sys
print("Enter rock (r),paper(p),scisors(s) or quit (q)")
player=input()
while(True):
    if(player=='q'):
        sys.exit()
    else:
        break
if(player=='r'):
    print("Rock vs")
elif(player=='p'):
    print("Paper vs")
elif(player=='s'):
    print("scisors vs")
computer=random.randint(1,4)
if(computer==1):
    print("Rock")
elif(computer==2):
    print("Paper")
elif(computer==3):
    print("scisors")

if(player==computer):
    print("tie")
elif(player=='r'and computer==3):
    print("you win")
elif(player=='s'and computer==2):
    print("you win")
elif(player=='p'and computer==3):
    print("you win")
elif(player=='r'and computer==2):
    print("you loose")
elif(player=='s'and computer==1):
    print("you loose")
elif(player=='p'and computer==3):
    print("you loose")
