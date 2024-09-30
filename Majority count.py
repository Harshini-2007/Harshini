x=[1,1,1,2,2,2]
y=x.count(x[1])
sub=0
for i in range (1,len(x)):
 if(x[i]!=x[1]):
    z=x.count(x[i])
    if(z>sub):
     sub=z
if(z>y):
        print(z,x[i])
elif z==y:
    print("equal majority")
else:
        print(y,x[1])
    