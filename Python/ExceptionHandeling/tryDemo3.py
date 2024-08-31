
def main():
    print("Enter first number : ")
    no1=int(input())

    print("Enter second number: ")
    no2=int(input())
    Ans=0

    try:
        Ans= no1/no2
        
    except ZeroDivisionError as zobj:
        print("Divide by zero is not allowed",zobj)
        return
#function returned
    print("Division is : ",Ans)#function returned

if __name__ == "__main__":
    main()