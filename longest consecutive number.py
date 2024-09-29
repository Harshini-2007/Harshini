x=[1,1,0,0,1,1,1]
z=set(x)
y=list(z)
b=0
def calculate(value):
   max_count = 0
   current_count = 0 
   for num in x:
        if num ==value:
            current_count += 1
            max_count = max(max_count, current_count)
        else:
            current_count = 0
   return(max_count) 
for j in range(len(y)):
 a=calculate(y[j])
 if(a>b):
    b=a
print(b)    




    
    