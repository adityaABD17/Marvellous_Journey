from sys import *
import os
import time

def DirectoryTravel(DirName):
    print("We are going to scan the Dirctory : ",DirName)

    flag=os.path.isabs(DirName)

    if flag == False:
        Dirname=os.path.abspath(DirName)

    exist = os.path.isdir(DirName)

    if exist:
        for foldername,subfoldername,filename in os.walk(DirName):
            
            print("Current directory name: ",foldername)

            for subname in subfoldername:
                print("Subfolder Name is: ",subname)

            for fname in filename:
                print("File name is: ",fname)
                print(fname, ":",os.path.getsize(os.path.isabs(fname))," bytes")

    else:
        print("Invalid path")

def main():
    print("Automation script demo")

    print("Automation script name : ",argv[0])

    if (len(argv) != 2):
        print("Invalid Number of arguments")
        exit()

    if (len(argv)==2):
        if (argv[1]== "-h" or argv[1]=="-H"):       
            print("This automation script is used to perform file automation")
        
            exit()
        elif (argv[1]== "-U" or argv[1] == "-u"):
            print("Usage: Name_of_script First_argument Second_arugument")
            print("Example: Demo.py Marvellous")
            exit()

        else:
            startTime=time.time()
            DirectoryTravel(argv[1])
            endTime=time.time()

            print("The script took time to execute : ",endTime-startTime)


if __name__ == "__main__":
    main()