# Обработчик строк
stateGlasnyh = ['а','я','у','ю','о','е','ё','э','и','ы']
count = 0
str = input("Введите строку : ")
while True:
    answer = int(input("1) показать текущую строку в двойных кавычках и в скобках её длину\n2) заменить текущую строку, прочитав новую\n3)перевести текст в верхний регистр и дописать в конец строки её первую букву\n4) заканчивается ли строка заданной подстрокой\n 5) гласных русских букв в текущей строке\n 6) Завершить работу\n Выберите одно из действий : "))
    if answer == 6:
        print("Работа завершена")
        break
    elif answer >=1 & answer < 6:
        if answer == 1:
            print(f'\"{str}\" ({len(str)})')
            pass
        elif answer == 2:
            newStr = input("Новая строка : ")
            str = newStr
            print(f"{str}")
            pass
        elif answer == 3:
            print(f'{str.upper() + str[0]}')
            pass
        elif answer == 4:
            endStr = input("Введите строку проверки: ")
            print(f"{str.endswith(endStr)}")
            pass
        elif answer == 5:
            for i in range(len(stateGlasnyh)):
                for j in range(len(str)):
                    if stateGlasnyh[i] == str[j] :
                        count += 1
            print(f'{count}')
            count = 0
            pass
        continue