### Задача 01-Первый класс
```python
import math

n = int(input())

k = math.ceil(n / 25)

min_size = n // k

print(f"{k} {min_size}")
```

### Задача 02-Двоичная запись
```python
import sys

data = sys.stdin.read().split()

if data:
    t = int(data[0])
    idx = 1
    
    for _ in range(t):
        n = int(data[idx])
        p = int(data[idx+1])
        q = int(data[idx+2])
        idx += 3
        
        bits = []
        for _ in range(n):
            p *= 2
            bits.append(str(p // q))
            p %= q
            
        print("0." + "".join(bits))
```

### Задача 03-Сравнение
```python
import sys

data = sys.stdin.read().split()

if data:
    t = int(data[0])
    idx = 1
    
    results = []
    
    for _ in range(t):
        a = int(data[idx])
        b = int(data[idx+1])
        c = int(data[idx+2])
        d = int(data[idx+3])
        e = int(data[idx+4])
        f = int(data[idx+5])
        g = int(data[idx+6])
        h = int(data[idx+7])
        idx += 8
        
        left_side = (a * d + c * b) * (f * h)
        
        right_side = (e * h + g * f) * (b * d)
        
        if left_side > right_side:
            results.append("1")
        elif left_side < right_side:
            results.append("-1")
        else:
            results.append("0")
            
    print(" ".join(results))
```

### Задача 4 – Универсальный префиксный код
```python
import sys

data = sys.stdin.read().split()

if data:
    n = int(data[0])
    result_bits = []
    
    for i in range(1, n + 1):
        x = int(data[i])
        
        x_bin = bin(x)[2:]
        y = len(x_bin)
        
        y_bin = bin(y)[2:]
        z = len(y_bin)
        
        zeros = "0" * (z - 1)
        x_tail = x_bin[1:]
        
        result_bits.append(zeros + y_bin + x_tail)
        
    print("".join(result_bits))
```

### Задача 05-Декодирование универсального префиксного кода
```python
import sys

s = sys.stdin.read().strip()

if s:
    decoded_numbers = []
    i = 0
    n = len(s)
    
    while i < n:
        zeros_count = 0
        while i < n and s[i] == '0':
            zeros_count += 1
            i += 1
            
        z = zeros_count + 1
        
        y_bin = s[i : i + z]
        y = int(y_bin, 2)
        i += z
        
        x_tail = s[i : i + y - 1]
        i += y - 1
        
        x_bin = "1" + x_tail
        x = int(x_bin, 2)
        
        decoded_numbers.append(str(x))
        
    print(len(decoded_numbers))
    print(" ".join(decoded_numbers))
```
