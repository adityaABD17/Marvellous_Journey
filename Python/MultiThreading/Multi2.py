import os
import threading

def Task1(Value):
    print("PID of task1: ",os.getpid())
    print("Thread ID of First thread is: ",threading.get_ident())

def Task2(Value):
    print("PID of Task2: ",os.getpid())
    print("Thread ID of second thread is: ",threading.get_ident())

def main():
    print("Demonstration of MultiProcessing")
    print("PID of parent process is: ",os.getppid())
    print("Thread Id of main thread is: ",threading.get_ident())

    No=5

    t1=threading.Thread(target=Task1,args=(No,))
    t2=threading.Thread(target=Task2,args=(No,))

    t1.start()
    t2.start()

    t1.join()
    t2.join()


if __name__ == "__main__":
    main()