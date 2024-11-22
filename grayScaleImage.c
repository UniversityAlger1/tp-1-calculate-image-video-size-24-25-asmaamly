#include "config/grayScaleImage.h"
#include <stdio.h>

// Parameters:
//   w: width of the image
//   h: height of the image
// Return value
//   grayScale size of the image Bitmap (in byte)
float grayScaleImage(int w, int h) {
   // YOUR CODE HERE - BEGIN
 float Taille = (8 * w * h)/8 ;
 printf("Taille de limage en bits: %f\n", Taille);
   // YOUR CODE HERE - END
   return Taille;
}