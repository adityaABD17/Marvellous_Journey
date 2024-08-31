import functools

CheckEven=lambda No : (No%2==0)
Increase = lambda No: (No+2)
Add = lambda A,B : (A+B)

#Task:Name of function
#Element:List of data elements

def FilterX(Task,Elements):
    Result=[]
    for No in Elements:
        if (Task(No)==True):
            Result.append(No)
    return Result

def mapX(Task,elements):
    Result=[]
    for No in elements:
        Ret=Task(No)
        Result.append(Ret)
    return Result

def reduceX(Task,Elements):
    Sum=0
    for no in Elements:
        Sum=Sum+Task(Sum,no)
    return Sum
    




def main():
    Data = []
    Size=int(input("Enter elements of the list :"))

    print("Enter the elements : ")

    for i in range(Size):
        Value=int(input())
        Data.append(Value)


    print("Input Data: ",Data)

    output=list(FilterX(CheckEven,Data))
    print("Output after filter :",output)

    moutput = list(mapX(Increase,output))
    print("Output after map : ",moutput)

    result=reduceX(Add,moutput)
    print("Output after reduce : ",result)

if __name__ == "__main__":
    main()