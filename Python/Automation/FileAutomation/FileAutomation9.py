from sys import *
import os
import time

def DirectoryTravel(DirName):
    print("We are going to Scan the Directory : ",DirName)

    flag = os.path.isabs(DirName)

    if flag == False:
        DirName = os.path.abspath(DirName)

    exist = os.path.isdir(DirName)

    maxSize=0
    MaxfileName=""

    if exist:
        for foldername, subfoldername, filename in os.walk(DirName):
            for fname in filename:
                filePath=os.path.join(foldername,fname)
                if(os.path.getsize(filePath)>maxSize):
                    maxSize=os.path.getsize(filePath)
                    MaxfileName=filePath
        print("Max sized file Name is :",MaxfileName)
        print(f"With size of {maxSize} bytes")

        flag=os.remove(MaxfileName)
    else:
        print("Invalid path")

def main():
    print("-------------- Automation Script --------------")

    print("Automation Script Name : ",argv[0])

    if(len(argv) != 2):
        print("Invalid number of arguments")
        exit()

    if(argv[1] == "-h" or argv[1] == "-H"):    # Flag for displaying help
        print("This automation script is used to perform File Automations")
        exit()
    
    elif(argv[1] == "-u" or argv[1] == "-U"):    # Flag for displaying the usage of script
        print("Usage : Name_Of_Script First_Argument")
        print("Example : Demo.py Marvellous")
        exit()

    else:
        starttime = time.time()
        DirectoryTravel(argv[1])
        endtime = time.time()

        print("The script took time to execute as : ",endtime-starttime)

if __name__ == "__main__":
    main()

# python FileAutomation.py Directory_Name