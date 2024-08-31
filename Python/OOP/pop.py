def Addition(No1,No2):
    Ans = 0
    Ans=No1+No2
    return Ans
    #7588945488

def Subtraction(No1,No2):
    return No1-No2
def main():
    Value1=int(input("Enter first number: "))
    Value2=int(input("Enter second number: "))

    add=Addition(Value1,Value2)
    sub=Subtraction(Value1,Value2)

    print("Addition is : ",add)
    print("subtraction is: ",sub)

if __name__ =="__main__":
    main()