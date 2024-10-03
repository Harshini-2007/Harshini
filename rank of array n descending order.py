x=[90,80,10]
y=sorted(x,reverse=True)
j=0
for i in range(3):
    if(y[i]==x[j]):
        x[j]=i+1
        j+=1
for k in range(3):
    print(x[k],end=" ")
    