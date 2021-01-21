#Jessica De Mota Munoz
#jessica.demotamunoz86@myhunter.cuny.edu
#October,3rd,2019 

#import a turtle to be able to draw and do a graphic
#get user input
#ask user for 5 whole integers
#for each number turn the turtle left and the turtle move toward 100 
import turtle
jd = turtle.Turtle()
#we have to create a for loop that allows our turtle to be able to turn left and go forward
#we want this to run 5 times because it is 5 different numbers
#we must turn jdm left because we are taking whatever our input is and making it turn left
for i in range(5) :
    jdm = int(input(" Enter 5 whole numbers:"))
    jd.left(jdm)
    jd.forward(100)
