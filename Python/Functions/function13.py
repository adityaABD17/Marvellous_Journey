# Function defines another function inside it and return as its return value

def Marvellous():
    def Add(A, B):
        return A+B
    
    return Add

def main():
    Ret= Marvellous()
    Ans=Ret(11,7)
    print("Addition is : ",Ans)

if __name__ == "__main__":
    main()