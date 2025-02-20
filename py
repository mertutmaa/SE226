#1
name = input("Can you enter your name: ")
print("hello " + name)
id = input("Can you enter your ID: ")
print("Your ID is: " + id)

#2
var1 = int(input("Enter variable 1:  "))
var2 = int(input("Enter variable 2:  "))
sum = var1 + var2
diff = var1 - var2
prod = var1 * var2

print("var1: " , var1 , "var2: " , var2 , "sum: " , sum , "diff: " , diff , "prod: " , prod)

#3
name = input("Can you enter your name: ")
lab = int(input("Can you enter your lab score: "))
mt = int(input("Can you enter your midterm score: "))
fn = int(input("Can you enter your final score: "))
ls = (lab / 4) + (mt*35/100) + (fn*40/100)
print("NAME: ", name , "\nLAB: " , lab , "\nMIDTERM: " , mt , "\nFINAL: " , fn , "LAST SCORE: ", ls )

#4
print("*\n**\n***\n**\n*")
