from sys import ps1


class Person:
    def __init__(self,name,office=None,mobile=None,private=None,email=None):
        self.name=name
        self.office=office
        self.mobile=mobile
        self.private=private
        self.email=email
    def add_mobile_phone(self,mobile):
        self.mobile=mobile
    def add_office_phone(self,office):
        self.office=office
    def add_mobile_phone(self,mobile):
        self.mobile=mobile
    def add_mobile_phone(self,mobile):
        self.mobile=mobile

p1=Person('Mg Mg','09234445556')
print(p1.__dict__)