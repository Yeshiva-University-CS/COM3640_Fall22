#include "imagehelper.h"

/***************************************************
Expect two arguments in the following order:
Operation
Input file namepath

If less than two arguments were specified
Print: "Missing arguments"
Print: "Usage: imageflip <H|V|HV> <filename>"
Do not continue processing and return an error code of of MISSING_ARGUMENTS

If more than two arguments were specified:
Print: "Warning: Ignoring extra ? arguments"
(Continue processing)

If the operations were not one of {H, V, HV}:
Print: "Invalid operation: ?, must be one of {H, V, HV}"
Return an error code of INVALID_OPERATION
(Note, handle both upper- and lowercase letters)

If the input file could not be found/opened:
Print: "Could not open input file: filename"
Return an error code of INPUT_FILE_ERROR

 If the input file's header is incorrect
 (cannot read HEADER_SIZE byes, or signature is not BM):
 Print: "File is not a valid BMP file"
 Return an error code of INVALID_BMP_FILE

Assume an output file name of "out.bmp"
If the output file could not be opened:
Print: "Could not open output file for writing: out.bmp"
Return an error code of OUTPUT_FILE_ERROR

If multiple errors exist (except in the case of MISSING_ARGUMENTS)
Your return code should incorporate all of the relevant codes
e.g., INVALID_OPERATION, INVALID_BMP_FILE
e.g., INVALID_OPERATION, INVALID_BMP_FILE, OUTPUT_FILE_ERROR
e.g., INPUT_FILE_ERROR, OUTPUT_FILE_ERROR
****************************************************/

int main(void) {

    // TODO: read and check program arguments

    // TODO: open the input file for reading

    // TODO: open the output file for writing

    // TODO: read the header information from the input file

    // TODO: validate the header by checking the signature

    // TODO: if at this point you have errors, go no further and return the errorcode
    // (if operation, input file & output file are good, then continue)

    // TODO: extract the data we need from the header

    // TODO: print the image information to the stdout as below
    //  (note the hex format of data offset)
    /*
     * px width: 256
     * px height: 256
     * bit depth: 24
     * byte width: 768
     * data offset: 0x36
     */

    // TODO: print what you are going to do to stdout
    //  (one of the below, based on the operation)
    /*
     * Flipping the image horizontally
     * Flipping the image vertically
     * Flipping the image horizontally and vertically
     */

    // TODO: write header information to the output file

    // TODO: Read in the image data from the input file

    // TODO: Transform the image data in memory
    // Iterate over the pixel data and transform the image data
    // such that the image is horizontally and/or vertically flipped

    // TODO: Write the transformed data to the output file

    // TODO: Release any memory

    // TODO: Close the file handlers

    printf("Hello world sanity check\n");
    return 0;
}

