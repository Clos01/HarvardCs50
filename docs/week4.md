# Week 4: File I/O and Audio Processing

## Overview
Week 4 focused on file input/output operations in C, with a practical application in audio processing. The main project involves modifying the volume of WAV audio files.

## Volume Manipulation Program

### Purpose
The program modifies the volume of a WAV audio file by scaling its audio samples while preserving the file header.

### Implementation Details
Location: `week4/volume/volume.c`

#### Key Components
1. **WAV File Structure Handling**
   - Preserves the 44-byte WAV header
   - Processes 16-bit audio samples

2. **File Operations**
   - Binary file reading (`rb` mode)
   - Binary file writing (`wb` mode)
   - Proper file handling with error checking

3. **Audio Processing**
   - Reads audio samples as 16-bit integers
   - Applies a scaling factor to modify volume
   - Writes modified samples to output file

### Usage
```bash
./volume input.wav output.wav factor
```
- `input.wav`: Source audio file
- `output.wav`: Destination for modified audio
- `factor`: Volume scaling factor (float)
  - 1.0: Original volume
  - 0.5: Half volume
  - 2.0: Double volume

### Technical Implementation
1. **Header Processing**
   ```c
   const int HEADER_SIZE = 44;
   uint8_t header[HEADER_SIZE];
   fread(header, HEADER_SIZE, 1, input);
   fwrite(header, HEADER_SIZE, 1, output);
   ```

2. **Sample Processing**
   ```c
   int16_t sample;
   while (fread(&sample, sizeof(int16_t), 1, input))
   {
       int16_t modifiedSample = (int16_t)(sample * factor);
       fwrite(&modifiedSample, sizeof(int16_t), 1, output);
   }
   ```

### Error Handling
- Validates command-line arguments
- Checks for successful file operations
- Ensures proper file cleanup

## Learning Outcomes
- File I/O operations in C
- Binary file handling
- Audio file structure understanding
- Memory management
- Error handling in file operations
- Command-line argument processing

## Best Practices Demonstrated
- Proper file resource management
- Error checking and handling
- Clear code structure and comments
- Efficient memory usage
- Type-safe operations with explicit casting