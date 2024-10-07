indent=0
inc=True
while(inc==True):
    print(' '*indent,end=' ')
    print("*****")
    indent+=1
    if indent==20:
        inc=False
while(inc==False):
    print(' '*indent,end=' ')
    print("*****")
    indent-=1
    if(indent==0):
        break
