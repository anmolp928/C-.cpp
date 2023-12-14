class CoffeeMachine:
    def __init__(self):
        self.water = 400
        self.milk = 540
        self.coffee_beans = 120
        self.disposable_cups = 9
        self.money = 550

    def make_cappuccino(self):
        if self.water < 200:
            print("Sorry, not enough water!")
            return False
        elif self.milk < 100:
            print("Sorry, not enough milk!")
            return False
        elif self.coffee_beans < 12:
            print("Sorry, not enough coffee beans!")
            return False
        elif self.disposable_cups < 1:
            print("Sorry, not enough disposable cups!")
            return False

        print("I have enough resources, making you a cappuccino!")
        self.water -= 200
        self.milk -= 100
        self.coffee_beans -= 12
        self.disposable_cups -= 1
        self.money += 3

        return True

coffee_machine = CoffeeMachine()
coffee_machine.make_cappuccino()
