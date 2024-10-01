#how many burgers can we make!?
#ingredients to make 1 burger: 2bun,3cheese,2lettuce,4tomato

bun=int(input("Enter no. of bun available")) 
cheese=int(input("Enter no. of cheese available")) 
lettuce=int(input("Enter no. of lettuce available")) 
tomato=int(input("Enter no. of tomato available")) 
bun=bun/2
cheese=cheese/3
lettuce=lettuce/2
tomato=tomato/4
number=min(bun,cheese,lettuce,tomato)
print(number)