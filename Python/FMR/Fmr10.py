import MarvellousFmr

CheckEven=lambda No : (No%2==0)
Increase = lambda No: (No+2)
Add = lambda A,B : (A+B)

def main():
    Data = []
    Size=int(input("Enter elements of the list :"))

    print("Enter the elements : ")

    for i in range(Size):
        Value=int(input())
        Data.append(Value)


    print("Input Data: ",Data)

    output=list(MarvellousFmr.FilterX(CheckEven,Data))
    print("Output after filter :",output)

    moutput = list(MarvellousFmr.mapX(Increase,output))
    print("Output after map : ",moutput)

    result=MarvellousFmr.reduceX(Add,moutput)
    print("Output after reduce : ",result)

if __name__ == "__main__":
    main()