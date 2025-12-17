#include "guassonFilter.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
    const char *inputFilename = "input_images/african_safari.png";
    const char *outputFilename = "output_images/african_safari.png";
    int blurRadius = 5;

    Image *inputImage = loadImage(inputFilename);
    if (inputImage == NULL) {
        printf("Failed to load image\n");
        return -1;
    }

    Image *outputImage = createBlurredImage(blurRadius, inputImage);
    saveImage(outputFilename, outputImage);

    free(inputImage->pixels);
    free(inputImage);
    free(outputImage->pixels);
    free(outputImage);

    return 0;
}