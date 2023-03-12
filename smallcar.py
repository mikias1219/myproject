import random

print("Welcome to the Car Game!")
car_started = False
while True:
    command = input("Enter 'start' to start the car, 'stop' to stop the car or 'quit' to exit the game: ").lower()

    if command == 'start':
        if car_started:
            print("Car is already started!")
        else:
            car_started = True
            print("Car started, ready to go!")
    elif command == 'stop':
        if not car_started:
            print("Car is already stopped!")
        else:
            car_started = False
            print("Car stopped.")
    elif command == 'quit':
        print("Thanks for playing! Goodbye!")
        break
    else:
        print("Sorry, I didn't understand that command.")
