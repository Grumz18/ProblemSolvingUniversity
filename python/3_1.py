# Списки
# 3.1 Подсчёт количества и суммы
lst = input("Введите список целых чисел, разделенных запятыми: ").split(",")
print(lst)
lst = [int(x) for x in lst]

print(lst)

a = int(input("Введите A: "))
b = int(input("Введите B: "))

count = 0
for num in lst:
    if (a <= num <= b) and int(num**0.5)**2 == num:
        count += 1

print(f"Количество квадратов в диапазоне [{a}, {b}]: {count}")

start = int(input("Введите start значение: "))
stop = int(input("Введите stop значение: "))

sumPowersOfThree = 0
for i in range(start, stop):
    if (lst[i] > 0) and (lst[i] % 3 == 0) and (lst[i] // 3) % 3 == 0:
        print(lst[i])
        sumPowersOfThree += lst[i]

print(f"Сумма элементов с номерами от {start} до {stop} представляющие собой степень тройки: {sumPowersOfThree}")

