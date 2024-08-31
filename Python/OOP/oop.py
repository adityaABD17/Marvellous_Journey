
class Arithmatic:
    def __init__(self,A,B):
        print("Inside Constructor")
        self.No1=A
        self.No2=B
    
    def Addition(self):
        ans=0
        ans=self.No1+self.No2
        return ans

    def Subtraction(self):
        ans=0
        ans=self.No1-self.No2
        return ans

def main():
    Value1=int(input("Enter first number: "))
    Value2=int(input("Enter second number: "))

    obj1=Arithmatic(Value1,Value2)

    ret= obj1.Addition()
    print("Addition is: ",ret)

    ret=obj1.Subtraction()
    print("Subtraction is: ",ret)

    Value1=int(input("Enter first number: "))
    Value2=int(input("Enter second number: "))

    obj2=Arithmatic(Value1,Value2)

    ret= obj2.Addition()
    print("Addition is: ",ret)

    ret=obj2.Subtraction()
    print("Subtraction is: ",ret)

if __name__ == "__main__":
    main()