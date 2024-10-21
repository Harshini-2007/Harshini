a=[-1,20,1]
curr=a[0]
maxi=a[0]
for i in range(1,len(a)):
    curr=max(curr,curr+a[i],a[i])
    maxi=max(curr,maxi)
print(maxi)
