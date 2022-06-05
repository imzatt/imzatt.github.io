
infile=open('data.txt','r')
lines=infile.read()
print(lines)
mydata=lines.split()
print(mydata)
infile.close()

string="Banana;Mango:Papaya;Orange"
fruits=string.split(';')  
print(fruits)