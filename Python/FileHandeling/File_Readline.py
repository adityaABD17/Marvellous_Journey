import os.path

def main():
    print("Enter name of the file you want to open for writing purpose: ")
    File_name=input()

    if os.path.exists(File_name):
        fobj=open(File_name,"r") #append mode

        if fobj:
            print("File sucessfully opened in read mode")

            Line1= fobj.readline()
            Line2=fobj.readline()
            Line3= fobj.readline()

            print("First line is : ",Line1)
            print("Second line is : ",Line2)
            print("Third line is : ",Line3)
            

            fobj.close()

            
    else:
        print("There is no such file")


if __name__ == "__main__":
    main()