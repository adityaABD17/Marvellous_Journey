import os.path

def main():
    print("Enter name of the file you want to open for writing purpose: ")
    File_name=input()

    if os.path.exists(File_name):
        fobj=open(File_name,"r") #append mode

        if fobj:
            print("File sucessfully opened in read mode")

            Data=fobj.read()
            print("Data from file is : ",Data)

            fobj.close()

            
    else:
        print("There is no such file")


if __name__ == "__main__":
    main()