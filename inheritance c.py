class Person:
    def __init__(self,fname,lname):
        self.fname=fname
        self.lname=lname
    def printname(self):
         print(self.fname,self.lname) 
class  child(Person):
    pass
    
x = child("hello", "hi")    
x.printname()
