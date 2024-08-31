def CheckEvenX(No):
    if(No%2 == 0):
        return No
    else:
        pass
    
def IncreaseX(No):
    return No+2

def AddX(A,B):
    return A+B

def main():
    Data = []
    Size=int(input("Enter elements of the list"))

    print("Enter the elements: ")

    for i in range(Size):
        Value=int(input())
        Data.append(Value)

    Filter=[]

    Map=[]

    for i in range(Size):
        result=CheckEvenX(Data[i])
        Filter.append(result)
    
    for i in range(len(Filter)):
        result=IncreaseX(Filter[i])
        Map.append(result)

    print(Filter)
    print(Map)



        



if __name__ == "__main__":
    main()