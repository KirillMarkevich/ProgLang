### Задача 01-Маршрутка
```python
n = int(input())

left_people = n % 15

departed_people = n - left_people

print(departed_people, left_people)
```

### Задача 02-Сумма половин
```python
s = input()

mid = len(s) // 2

first_half = int(s[:mid])

second_half = int(s[mid:])

print(first_half + second_half)
```

### Задача 03-Жажда
```python
n = int(input())

result = n / 3

print(f"{result:.3f}")
```

### Задача 4 – Строка в рамке
```python
s = input().strip()

price = float(s)

total_kop = round(price * 100)

rub = total_kop // 100
kop = total_kop % 100

print(f"{rub} rub {kop} kop")
```

### Задача 05-Отчет
```python
import math

n, m, c, k = map(int, input().split())

total_needed = n * m

needed_to_buy = total_needed - k

if needed_to_buy <= 0:
    packs_to_buy = 0
else:
    packs_to_buy = math.ceil(needed_to_buy / 200)

total_cost = packs_to_buy * c
print(total_cost)
```

### Задача 06-Подарки
```python
import math

n, m, k = map(int, input().split())

total_candies = n * m

boxes_to_open = math.ceil(total_candies / k)

print(boxes_to_open)
```

### Задача 07-Датчик пульса
```python
import math

n_str, t_str = input().split()
n = int(n_str)
t = float(t_str)

beats_per_minute = (n / t) * 60

result = math.ceil(beats_per_minute)

print(result)
```

### Задача 08-Точки на прямой
```python
import math

x, y = map(float, input().split())

first_integer = math.ceil(x)

last_integer = math.floor(y)

if first_integer > last_integer:
    print(0)
else:
    print(last_integer - first_integer + 1)
```

### Задача 09-Буквы и цифры
```python
s = input()

digit_sum = 0

for char in s:
    if char.isdigit():
        digit_sum += int(char)

print(digit_sum)
```

### Задача 10-Скобки в зазеркалье
```python
s = input().strip()

reversed_s = s[::-1]

result = []

for char in reversed_s:
    if char == '(':
        result.append(')')
    else:
        result.append('(')

print("".join(result))
```

### Задача 11-Разворот слов
```python
words = input().split()

reversed_words = [word[::-1] for word in words]

print(" ".join(reversed_words))
```

### Задача 12-Минимальные делители
```python
numbers = map(int, input().split())

answers = []

for num in numbers:
    d = 2
    while num % d != 0:
        d += 1
    answers.append(d)

print(*answers)
```

### Задача 13-Сумма делителей
```python
n = int(input())

total_sum = 1

d = 2
while d * d <= n:
    if n % d == 0:
        total_sum += d
        if d * d != n:
            total_sum += n // d
    d += 1

print(total_sum)
```

### Задача 14-Игра в пробке
```python
n = int(input())

masha_points = 0
dasha_points = 0

for _ in range(n):
    car_number = int(input())
    
    if car_number % 3 == 0:
        masha_points += 2
    else:
        dasha_points += 1

print(f"{masha_points}:{dasha_points}")
```

### Задача 15-Прибыль
```python
n = int(input())

max_profit = 0

for _ in range(n):
    price, cost = map(int, input().split())
    
    current_profit = price - cost
    
    if current_profit > 0:
        max_profit += current_profit

print(max_profit)
```
