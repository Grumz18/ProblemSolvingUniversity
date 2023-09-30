# Удаление из списка
N = int(input("Введите количество целых чисел: "))
lst = []
for i in range(N):
  num = int(input(f"Введите целое число {i+1}: "))
  lst.append(num)

max_elem = max(lst)

while max_elem in lst:
  lst.remove(max_elem)

print(f"Обновлен список после удаления максимального количества элементов: {lst}")
