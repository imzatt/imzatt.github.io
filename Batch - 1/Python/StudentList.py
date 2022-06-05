#1 ask_student
#2 save in file
#3 show student list
#4 delete student info from list
# CRUD => Create => Read => Update => Delete
# rollNo,Name,Address,Email,Phone


import json
import sys


class Student:
    def __init__(self,rollNo,name,address,email,phone):
        self.rollNo=rollNo
        self.name=name
        self.address=address
        self.email=email
        self.phone=phone

def ask_student_info():
    rollNo=input('Enter RollNo: ')
    name=input('Enter Name: ')
    address=input('Enter address: ')
    email=input('Enter email: ')
    phone=input('Enter Phone: ')
    student=Student(rollNo,name,address,email,phone)
    add_student(student.__dict__)

def add_student(student):
    #1 infile open json
    infile=open('studentlist.json','r')
    lines=infile.readlines()
    infile.close()
    #2 convert string to json
    myjson=json.loads(lines[0]) # string to json
    # print(type(myjson['studentlist']))
    # print(myjson)
    #3 add one student into studentlist
    myjson['studentlist'].append(student)
    #4 conver studentlist json to string
    file=open('studentlist.json','w')
    file.write(json.dumps(myjson)) # json to string
    file.close()

def show_student_list():
    file=open('studentlist.json','r')
    lines=file.readlines()
    file.close()
    myjson=json.loads(lines[0])
    for student in myjson['studentlist']:
        print(' %s \t%s \t%s \t%s\t%s ' %(student['rollNo'],student['name'],student['address'],student['email'],student['phone']))

def delete_student(rollNo):
    file=open('studentlist.json','r')
    lines=file.readlines()
    file.close()
    myjson=json.loads(lines[0])
    index=0
    found=False
    for student in myjson['studentlist']:
        if(student['rollNo']==rollNo):
            found=True
            break
        else:
            index +=1

    if(found):
        del myjson['studentlist'][index]
        file=open('studentlist.json','w')
        file.write(json.dumps(myjson)) # json (dictionary) to string
        file.close()
        print('One student deleted!')
    else:
        print('Roll No not found!')

def main():
    print('Please choice : ')
    print(' 1: Add New Student')
    print(' 2: Show studentlist')
    print(' 3: Delete One Student')
    print(' 4: Exit from program ')
    ans=int(input('Enter your choice: '))
    if ans==1:
        ask_student_info()
        show_student_list()
    elif ans==2:
        show_student_list()
    elif ans==3:
        rollNo=input('Enter Roll No: ')
        delete_student(rollNo)
        show_student_list()
    else:
        print('Terminating from Program .....!')
        sys.exit(1)
main()
