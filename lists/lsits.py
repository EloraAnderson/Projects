import random
siblings = ["Ember", "Ashlyn", "Elora", "Cole"]
num = random.randint(1, 11)
for x in range(10, 21, 10):
    if x == num:
        print("goose")
        break
    else:
        print("duck")



