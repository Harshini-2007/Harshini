s = "hello"
r = "world"
l = "hweolrllde"
combined = s + r
if len(l) != len(combined):
    print("Not a shuffle of the strings")
else:
    is_shuffle = True
    for i in range(len(combined)):
        if l.count(combined[i]) != combined.count(combined[i]):
            is_shuffle = False
            break
    if is_shuffle:
        print("Shuffle of string")
    else:
        print("Not a shuffle of the strings")


        