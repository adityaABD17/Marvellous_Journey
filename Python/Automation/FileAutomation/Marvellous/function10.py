#function accepts parameter and call another parameter from it and return multiple values
def Add(A ,B):
    return A+B

def Sub(A , B):
    return A-B

def Marvellous(FPTR1,FPTR2):
    print(type(FPTR1))
    Ans=FPTR1(11, 7)
    print("Addition is : ",Ans)
    # Ans=FPTR2()


def main():
    Marvellous(Add,Sub)

if __name__ == "__main__":
    main()