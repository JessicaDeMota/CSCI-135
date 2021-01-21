/*
Author: Jessica De Mota Munoz 
Course: CSCI-136
Instructor: G Maryash
Assignment: Quiz 10 
.*/
  for(int col = 0; col < w/2; col++) 
{
  if((row+col) % 2 == 0)
            {
                out[row][col] = img[255];
            }
            else 
            
                out[row][col]= img[0]; 
}