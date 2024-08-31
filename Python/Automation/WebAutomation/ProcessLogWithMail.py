from sys import *
import schedule
import time
import os
import psutil
# import urllib3.request
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.base import MIMEBase
from email import encoders
import smtplib
import requests


# def is_connected():
#     try:
#         urllib3.urlopen('http://216.58.192.142',timeout=1)
#         return True
#     except urllib3.URLError as err:
#         return False

def is_connected():
    try:
        # Try to send a GET request to a reliable website
        response = requests.get("http://www.google.com", timeout=5)
        # If the request was successful (status code 200), return True
        return True
    except requests.ConnectionError:
        # If an exception is raised, return False
        return False


    
def MailSender(fileName,time):
    try:
        fromaddr="adityavyavahare54@gmail.com"
        toaddr="sharmaruby747@gmail.com"

        msg=MIMEMultipart()

        msg['From']=fromaddr
        msg['To']=toaddr

        body="""
        Hello %s,
        Welcome to automatic process log sender of Mr.Aditya Milind Vyavahare (Elementa)
        Please Find Attached Document which contains Log of Running processes.
        Log File is Created At: %s

        This is auto generated mail.

        Thanks.
        !!!!!--Please inform the sender that this email is recieved--!!!!!
        """%(toaddr,time)

        Subject="""
        Elementa process log generated at:%s
        """%(time)

        msg['Subject']=Subject

        msg.attach(MIMEText(body,'plain'))

        attachment=open(fileName,"rb")

        p=MIMEBase('application','octet-stream')

        p.set_payload((attachment).read())

        encoders.encode_base64(p)

        p.add_header('Content-Disposition',"attachment;filename= %s"%fileName)

        msg.attach(p)

        s=smtplib.SMTP('smtp.gmail.com',587)

        s.starttls()

        s.login(fromaddr,"lmav wgqg otir qgiw")

        text=msg.as_string()

        s.sendmail(fromaddr,toaddr,text)

        s.quit()

        print("Log file sucessfully sent through mail")

    except Exception as E:
        print("Unable to send the mail.",E)


def ProcessLog(log_dir="Marvellous"):
    listProcess=[]

    if not os.path.exists(log_dir):
        try:
            os.mkdir(log_dir)
        except:
            pass
    
    seperator="-"*80
    timestamp = time.strftime("%Y-%m-%d_%H-%M-%S")
    log_path = os.path.join(log_dir, "MarvellousLog%s.log" % timestamp)

    f=open(log_path,'w')
    f.write(seperator+"\n")
    f.write("Marvellous Infosystem Process Logger: "+time.ctime()+"\n")
    f.write(seperator+"\n")

    for proc in psutil.process_iter():
        try:
            pinfo=proc.as_dict(attrs=['pid','name','username'])
            vms=proc.memory_info().vms/(1024*1024)
            pinfo['vms']=vms
            listProcess.append(pinfo)
        except (psutil.NoSuchProcess,psutil.AccessDenied,psutil.ZombieProcess):
            pass

    for element in listProcess:
        f.write("%s\n"%element)
    
    print("Log file is successfully generated at location %s"%(log_path))
    
    connected=is_connected()

    if connected:
        startTime=time.time()
        MailSender(log_path,time.ctime())
        endTime=time.time()

        print("Took %s seconds to send mail"%(endTime-startTime))
    else:
        print("There is no internet connection")




def main():
    print("-----------Process log With Automatic Mail Sender-----------")
    print("Application Name: ",argv[0])

    if(len(argv)!=2):
        print("Invalid number of arguments!")
        exit()
    
    if(argv[1]=="-h" or argv[1]=="-H"):
        print("This script is used to record log of running processes")
        exit()
    
    if (argv[1]=="-u" or argv[1]=="-U"):
        print("usage: ApplicationName Absolute_path_of_Directory")
        exit()

    try:
        schedule.every(int(argv[1])).minutes.do(ProcessLog)
        while True:
            schedule.run_pending()
            time.sleep(1)
    
    except ValueError:
        print("Invalid Datatype of input")
    
    except Exception as E:
        print(f"Error:---{E}")

if __name__ == "__main__":
    main()