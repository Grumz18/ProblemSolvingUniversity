# Задать два вопроса, на которые можно ответить да или нет. 
# Обработать возможность ошибочного ввода. На основе полученных ответов выдать 
# один из 4 вариантов “описания личности”.

class PersonalityTest:
    def __init__(user):
        user.answers = []
        user.descriptions = {
            "00": "Вы сдержанный человек. А еще вы интроверт.",
            "01": "Вы вдумчивый и интроспективный человек.",
            "10": "Вы уверенный в себе и общительный человек.",
            "11": "Вы динамичный и предприимчивый человек."
        }

    def answerToQuestion(user, question):
        while True:
            answer = input(question + " (Да = 1, Нет = 0): ")
            if answer == "1" or answer == "0":
                return answer
            else:
                print("Введено неверное значение. Повторите попытку.")

    def test(user):
        user.answers.append(user.answerToQuestion("Вам нравится проводить время в одиночестве?"))
        user.answers.append(user.answerToQuestion("Вам нравится рисковать?"))
        key = "".join(user.answers)
        if key in user.descriptions:
            print(user.descriptions[key])

pt = PersonalityTest()
pt.test()