a=[-1,2,3,-4] 
n=len(a)
c=a.copy()
j=0
k=1
for i in range(0,n):
    if(c[i]>0):
        a[j]=c[i]
        j+=2
    else:
        a[k]=c[i]
        k+=2
for x in range(n):
    print(a[x],end='\t')
        
        

