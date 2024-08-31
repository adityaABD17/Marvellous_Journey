import os
import threading

def Task1(Value):
    print("PID of task1: ",os.getpid())

def Task2(Value):
    print("PID of Task2: ",os.getpid())

def main():
    print("Demonstration of MultiProcessing")
    print("PID of parent process is: ",os.getppid())

    No=5

    t1=threading.Thread(target=Task1,args=(No,))
    t2=threading.Thread(target=Task2,args=(No,))

    t1.start()
    t2.start()

    t1.join()
    t2.join()


if __name__ == "__main__":
    main()