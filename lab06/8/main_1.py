a = "hello"
b = a
c = a[:]

print(a, id(a))
print(b, id(b))
print(c, id(c))

print(a == b == c)