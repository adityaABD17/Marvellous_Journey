class Demo:

    def __init__(self,Value1,Value2):   #Constructor
        print("Inside init method")
        self.No1=Value1
        self.No2=Value2
    
    def Display(self):
        print("Value of No1: ",self.No1)
        print("Valuee of No2: ",self.No2)


def main():
    print("Demonstration of object orientation")

    obj1= Demo(10,20)
    obj2= Demo(11,21)

    obj1.Display()
    obj2.Display()

if __name__ == "__main__":
    main()