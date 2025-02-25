// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open input file
    FILE *input = fopen(argv[1], "rb");
    if (input == NULL)
    {
        printf("Could not open input file.\n");
        return 1;
    }

    // Open output file
    FILE *output = fopen(argv[2], "wb");
    if (output == NULL)
    {
        printf("Could not open output file.\n");
        fclose(input);
        return 1;
    }

    // Convert scaling factor
    float factor = atof(argv[3]);

    // Copy header using memcpy
    uint8_t header[HEADER_SIZE];
    fread(header, HEADER_SIZE, 1, input);
    fwrite(header, HEADER_SIZE, 1, output);

    // Read audio samples, modify volume, and write back
    int16_t sample;
    while (fread(&sample, sizeof(int16_t), 1, input))
    {
        // Create a copy of the sample and scale it
        int16_t modifiedSample;
        memcpy(&modifiedSample, &sample, sizeof(int16_t));
        modifiedSample = (int16_t)(modifiedSample * factor);

        // Write modified sample to output
        fwrite(&modifiedSample, sizeof(int16_t), 1, output);
    }

    // Close files
    fclose(input);
    fclose(output);

    return 0;
}