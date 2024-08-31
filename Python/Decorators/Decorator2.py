# Inbuilt functions (we cannot modify contents)
def Sub(A, B):
    return A-B

def SmartSub(FPTR):
    def Inner(A,B):
        if(A < B):
            A,B = B,A
        return FPTR(A,B)
    return Inner

def main():
    SubX=SmartSub(Sub)
    Ret= SubX(10,7)
    print("Subraction is: ",Ret)

    SubX=SmartSub(Sub)
    Ret=SubX(7,10)
    print("Subtraction is: ",Ret)

if __name__ == "__main__":
    main()