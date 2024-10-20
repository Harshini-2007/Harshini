a=[2,3,5,1,0,1]
n=len(a)
c=-1
d=-1

for i in range(n-1,-1,-1):
    if(a[i]<a[n-1]):
        c=i
        break
if(c==-1):
   a.reverse()
   for i in range(n):
     print(a[i],end=' ')
else:
 for i in range(n-1,-1,-1):
    if(a[i]>a[c]):
        d=i
        break
a[c],a[d]=a[d],a[c]
if(c>0):
 for i in range(n):
  print(a[i],end=' ')
