import Marvellous
def main():
    Value1=int(input("Enter first number : "))
    Value2=int(input("Enter second number: "))

    Result=0
    Result=Marvellous.Addition(Value1,Value2)

    print("Addition is: ",Result)

    Result=0
    Result=Marvellous.Subtraction(Value1,Value2)

    print("Subtraction is: ",Result)

    Result=0
    Result=Marvellous.Multiplication(Value1,Value2)

    print("Multiplication is: ",Result)

if __name__ == "__main__":
    main()

