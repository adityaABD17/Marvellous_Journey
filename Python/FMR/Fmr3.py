import functools

def CheckEven(No):
    return(No%2 == 0)

    
def Increase(No):
    return No+2

def Add(A,B):
    return A+B

def main():
    Data = []
    Size=int(input("Enter elements of the list"))

    print("Enter the elements: ")

    for i in range(Size):
        Value=int(input())
        Data.append(Value)


    print(Data)

    output=list(filter(CheckEven,Data))
    print(output)

    moutput = list(map(Increase,output))
    print(moutput)

    result=functools.reduce(Add,moutput)
    print(result)

if __name__ == "__main__":
    main()