# Прочитать число. Предложить три варианта действий: 
# 1) найти процент от введённого числа 
# 2) увеличить число на какой-то процент 
# 3) уменьшить число на какой-то процент. 
# Если действие выбрано неверно, сообщить об этом. Иначе прочитать значение процента. 
# Если оно введено корректно, вывести подробный ответ, иначе сообщить об ошибочном значении процентов.

while True:
    try:
        userNum = float(input("Введите число: "))
        print("Выберите действие :\n1. Найти процент от введеного числа\n2. Увеличить число на какой-то процент\n3. Уменьшить число на какой-то процент")
        action = int(input("Введите номер действия: "))
        if action < 1 or action > 3:
            print("Неверное действие. Повторите попытку.")
            continue
        userPercent = float(input("Число процента: "))
        while True:
            if userPercent < 0:
                print("Неверное значение процента. Повторите попытку.")
                continue
            if action == 1:
                result = userNum * (userPercent / 100)
                print(f"{userPercent}% от {userNum} = {result}")
                break
            elif action == 2:
                result = userNum * (1 + (userPercent / 100))
                print(f"Увеличение {userNum} на {userPercent}% = {result}")
                break
            else:
                result = userNum * (1 - (userPercent / 100))
                print(f"Уменьшение {userNum} на {userPercent}% = {result}")
                break
        break
    except ValueError:
        print("Введено недопустимое значение. Повторите попытку.")
