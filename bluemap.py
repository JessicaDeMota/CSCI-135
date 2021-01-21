# Name: Jessica De Mota Munoz
# Email:jessica.demotamunoz86@myhunter.edu
# Date: October 16 2019 
# Takes elevation data of NYC and displays using the default color map


#Import the libraries for arrays and displaying images:
import numpy as np
import matplotlib.pyplot as plt


#Read in the data to an array, called elevations:
elevations = np.loadtxt('elevationsNYC.txt')

#Take the shape (dimensions) of the elevations
#  and add another dimension to hold the 3 color channels:
mapShape = elevations.shape + (3,)

#Create a blank image that's all zeros:
floodMap = np.zeros(mapShape)

colorblue=float(input())

for row in range(mapShape[0]):
    for col in range(mapShape[1]):
        if elevations[row,col] <= 0:
            #Below sea level
           floodMap[row,col,2] = colorblue
           floodMap[row,col,0] = 0
           floodMap[row,col,1] = 0 
           
        elif elevations[row,col] %10 == 0:
            floodMap[row,col,:] = 0 
        else:
            #Above the 6 foot storm surge and didn't flood
            floodMap[row,col,:] = 1.0   #Set the green channel to 100%

#Load the flood map image into matplotlib.pyplot:
plt.imshow(floodMap)

#Display the plot:
plt.show()

#Save the image:
plt.imsave('floodMap.png', floodMap)
