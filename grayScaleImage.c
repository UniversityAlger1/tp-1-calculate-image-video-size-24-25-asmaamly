#include "config/grayScaleImage.h"
#include <stdio.h>

// Parameters:
//   w: width of the image
//   h: height of the image
// Return value
//   grayScale size of the image Bitmap (in byte)
float grayScaleImage(int w, int h) {
   // YOUR CODE HERE - BEGIN
 int Taille = (w*h*8)/8;

 printf("Taille de limage en bits: %d\n", Taille);
   // YOUR CODE HERE - END
   return 0;
}

//int main(){
  // float taille = grayScaleImage(1,1);
  // printf("La taille d'une image au niveaux de gris est de :%f\n", taille);
 //  return 0;
//}