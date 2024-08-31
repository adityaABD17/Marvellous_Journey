from functools import reduce

def main():
    Data = []
    Size=int(input("Enter elements of the list :"))

    print("Enter the elements : ")

    for i in range(Size):
        Value=int(input())
        Data.append(Value)


    print("Input Data: ",Data)

    output=list(filter(lambda No : (No%2==0),Data))
    print("Output after filter :",output)

    moutput = list(map(lambda No: (No+2),output))
    print("Output after map : ",moutput)

    result=reduce(lambda A,B : (A+B),moutput)
    print("Output after reduce : ",result)

if __name__ == "__main__":
    main()