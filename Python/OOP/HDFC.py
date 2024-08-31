class HDFC:
    ROI = 9.5   #Class Variable
    def __init__(self,Name,Amount):    #Constructor
        self.Balance=Amount       #Instance variable
        self.AccountHolder=Name
        print("Welcome,",self.AccountHolder)
        print("Account gets sucessfully created with initial balance : ",self.Balance)

    def DisplayBalance(self):       #Instance Method
        print("Hello",self.AccountHolder)
        print("Your account balance is : ",self.Balance)
    
    @classmethod
    def DisplayBankInfo(cls):       #Class method
        print("Welcome to HDFC bank portal...")
        print("Our bank is PVT LTD bank")
        print("We provide Rate Of Intrest on saving account : ",cls.ROI)

    @staticmethod
    def DisplayKYCInfo():
        print("According to the rules of RBI you should provide below documents for KYC")
        print("Your Adhar Card")
        print("Your PAN card")
        print("Your Passport sized photo")

    def Withdraw(self,Amount):      #Instance Method
        if(self.Balance<Amount):
            print("There is no sufficient balance..")
        else:
            self.Balance= self.Balance - Amount
            print("Amount withdrawl sucessful")
    
    def Deposite(self,Amount):  #Instance Method
        self.Balance=self.Balance+Amount
        print("Amount deposited sucessfully...")



def main():
    print("ROI of HDFC bank is : ",HDFC.ROI)

    HDFC.DisplayBankInfo()
    HDFC.DisplayKYCInfo()

    print("Creating new account...")
    Amit= HDFC('Amit',5000)  #__init__==(100,5000)
    print("Creating new account...")
    Sagar = HDFC('Aditya',3000)  #__init__==(200,3000)

    print("Performing operations on {}'s account".format(Amit.AccountHolder))
    
    Amit.Deposite(2000)
    Amit.DisplayBalance()

    Amit.Withdraw(1000)
    Amit.DisplayBalance()


if __name__ == "__main__":
    main()