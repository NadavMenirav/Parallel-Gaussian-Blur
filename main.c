#include "guassonFilter.h"
#include <stdlib.h>
#include <stdio.h>
#include <omp.h>

int main() {
    const char *inputFilename = "input_images/windows.png";
    const char *outputFilename = "output_images/windows.png";
    int blurRadius = 5;

    Image *inputImage = loadImage(inputFilename);
    if (inputImage == NULL) {
        printf("Failed to load image\n");
        return -1;
    }

    double start = omp_get_wtime();
    Image *outputImage = createBlurredImage(blurRadius, inputImage);
    double end = omp_get_wtime();

    saveImage(outputFilename, outputImage);

    free(inputImage->pixels);
    free(inputImage);
    free(outputImage->pixels);
    free(outputImage);

    printf("The time is:%f", end - start);
    return 0;
}