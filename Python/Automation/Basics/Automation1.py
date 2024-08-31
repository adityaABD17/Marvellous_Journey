from sys import *
from Arithmatic import Addition

def main():
    print("Automation script demo")

    print("Automation script name : ",argv[0])

    if (len(argv)==2):
        if (argv[1 == "-h" or argv[1]]):
            print("This automation script is used to perform addition of two numbers")
        
            exit()
        elif (argv[1]== "-U" or argv[1] == "-u"):
            print("Usage: Name_of_script First_argument Second_arugument")
            print("Example: Demo.py Marvellous")
            exit()
        else:
            print("there no such option to handle")
            exit()

    if (len(argv) != 3):
        print("Invalid Number of arguments")
    
    else:
        Ret=Addition(argv[1],argv[2])
        print("Addition is: ",Ret)





if __name__ == "__main__":
    main()