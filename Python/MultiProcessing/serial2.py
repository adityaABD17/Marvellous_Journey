import time

def fun(No):
    sum=0

    for i in range(100000):
        sum=sum+(No*No)
    return sum

def main():
    print("Demonstration of serial execution using single core")

    starttime = time.time()

    Result=[]
    for no in range(10000):
        Result.append(fun(no))
    
    endtime=time.time()

    print("Time required to print the applcation: ",starttime-endtime)
    
    # print(Result)

if __name__ == "__main__":
    main()