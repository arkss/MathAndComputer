class Animal:
    def __init__(self):
        print("1")
        
class Human(Animal):
    def __init__(self):
        
        print("2")
        super().__init__()
        print("3")
class Bird(Animal):
    def __init__(self):
        
        print("4")
        super().__init__()
        print("5")

class ant(Animal):
    def __init__(self):
        
        print("ant1")
        super().__init__()
        print("ant2")
        
class Unknown(Human, Bird, ant):
    def __init__(self):
        print("6")
        super().__init__()
        print("7")


a = Unknown()