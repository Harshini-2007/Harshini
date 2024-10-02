K = 5
word = "a"
operations = [1, 1, 1]

for i in range(len(operations)):
    if operations[i] == 0:
        word = word * len(word)
    elif operations[i] == 1:
        for char in word:
            new_char = chr(ord(char) + 1)
            word+=new_char


print(word)
