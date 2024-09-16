a=10234567980548204840
add=0
c=str(a)
b=c[0:11]
d=c[11:20]
def addition(number):
  return sum(int (digit) for digit in number)
    
sum1=addition(b)
sum2=addition(d)
print(sum1)
print(sum2)    