#function accepts parameter and call another parameter from it and return multiple values
def Add(A ,B):
    return A+B

def Sub(A , B):
    return A-B

def Marvellous(FPTR):
    print(type(FPTR))
    print(FPTR)
    Ans=FPTR(11, 7)
    print("Addition is : ",Ans)




def main():
    Marvellous(Add)

if __name__ == "__main__":
    main()