def CheckEven(Value):

    result= Value%2

    if (result==0):
        print("Number is even..")
    
    else :
        print("Number is odd..")

def main():

    print("Enter a number :")
    No=int(input())

    CheckEven(No)

if __name__ == "__main__" :
    main()