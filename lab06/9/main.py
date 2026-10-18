import string

value = 1
for letter in string.ascii_lowercase:
    for number in range(100):
        globals()[f"{letter}{number}"] = value
        value += 1

print(a0, a99, b0, z99)
print(len([
    name for name in globals()
    if len(name) >= 2
    and name[0] in string.ascii_lowercase
    and name[1:].isdigit()
    and 0 <= int(name[1:]) <= 99
]))