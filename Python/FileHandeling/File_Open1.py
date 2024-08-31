import os.path

def main():
    print("Enter name of the file for reading purpose: ")
    File_name=input()

    if os.path.exists(File_name):
        fobj=open(File_name,"r")
        if fobj:
            print("File sucessfully opened")
            fobj.close()
        else:
            print("Unable to open the file")
        
        fobj.readline(File_name)
    
    else:
        print("There is no such file")


if __name__ == "__main__":
    main()