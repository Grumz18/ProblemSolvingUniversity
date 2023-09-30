# Список строк (any и all)
lines = []
while True:
    line = input("Введите строку (пустая строка для остановки): ")
    if line == "":
        break
    lines.append(line)

allUpper = True
for line in lines:
    words = line.split()
    hasUpper = False
    for word in words:
        if word.isupper():
            hasUpper = True
            break
    if not hasUpper:
        allUpper = False
        break

if allUpper:
    print("Все строки содержат хотя бы одно слово в верхнем регистре.")
else:
    print("Не все строки содержат хотя бы одно слово в верхнем регистре.")
