import time
import multiprocessing

def fun(No):
    sum=0

    for i in range(100000):
        sum=sum+(No*No)
    return sum

def main():
    print("Demonstration of serial execution using single core")

    starttime = time.time()
    p=multiprocessing.Pool()

    Result=[]

    Result= p.map(fun,range(10000))
    p.close()
    p.join()
    
    endtime=time.time()

    print("Time required to print the applcation: ",endtime-starttime)
    
    # print(Result)

if __name__ == "__main__":
    main()