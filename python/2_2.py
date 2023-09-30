# Лабиринт
labyrinth = {
    1: {
        'name': 'Комната 1', 
        'paths': [2, 3, 5]
        },
    2: {'name': 'Комната 2', 'paths': [4, 5]},
    3: {'name': 'Комната 3', 'paths': [2, 5, 6, 8]},
    4: {'name': 'Комната 4', 'paths': [1, 7]},
    5: {'name': 'Комната 5', 'paths': [1]},
    6: {'name': 'Комната 6', 'paths': []},
    7: {'name': 'Комната 7', 'paths': [2, 8]},
    8: {'name': 'Комната 8', 'paths': [3, 4]}
}
currentRoom = 1

while True:
  print('Вы в комнате ', labyrinth[currentRoom]['name'])
  print('Пойти в комнату :', labyrinth[currentRoom]['paths'])

  direction = int(input('Выберите один из путей : '))

  if direction in labyrinth[currentRoom]['paths']:
    currentRoom = direction

    if currentRoom == 6:
      print('Поздравлюя! Вы прошли лабиринт.')
      break
  else:
    print('Неверный путь. Повторите попытку.')
