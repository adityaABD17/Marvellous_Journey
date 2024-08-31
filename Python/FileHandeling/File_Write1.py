import os.path

def main():
    print("Enter name of the file you want to open for writing purpose: ")
    File_name=input()

    if os.path.exists(File_name):
        fobj=open(File_name,"w") #append mode

        if fobj:
            print("File sucessfully opened in write mode")

            print("Enter the data you want to write in the file :")
            Data=input()

            fobj.write(Data) #Write data into the file

            fobj.close()

            
    else:
        print("There is no such file")


if __name__ == "__main__":
    main()