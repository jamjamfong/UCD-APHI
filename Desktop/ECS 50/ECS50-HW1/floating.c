/*
 * Standard IO and file routines.
 */
#include <stdio.h>

#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include "floating.h"

/* This function is designed to provide information about
   the IEEE floating point value passed in.  Note that this
   ONLY works on systems where sizeof(float) == 4.

   For a normal floating point number it it should have a + or -
   depending on the sign bit, then the significand in binary in the
   format of the most significant bit, a decimal point, and then the
   remaining 23 bits, a space, and then the exponent as 2^ and then a
   signed integer.  As an example, the floating point number .5 is
   represented as "+1.00000000000000000000000 2^-1" (without the
   quotation marks).

   There are a couple of special cases: 0 should be "+0" or "-0"
   depending on the sign.  An infinity should be "+INF" or "-INF", and
   a NAN should be "NaN".

   For denormalized numbers, write them with a leading 0. and then the
   bits in the denormalized value.

   It should be safe: The output should be truncated if the buffer is
   not sufficient to include all the data.
*/
char *floating_info(union floating f, char *buf, size_t buflen){
  fprintf(stderr, "Need to implement\n");
  if(buflen >= 1) buf[0] = '\0';
  return buf;
}

/* This function is designed to provide information about
   the 16b IEEE floating point value passed in with the same exact format.  */
char *ieee_16_info(uint16_t f, char *buf, size_t buflen){
  fprintf(stderr, "Need to implement\n");
  if(buflen >= 1) buf[0] = '\0';
  return buf;
}



/* This function converts an IEEE 32b floating point value into a 16b
   IEEE floating point value.  As a reminder: The sign bit is 1 bit,
   the exponent is 5 bits (with a bias of 15), and the significand is
   10 bits.

   There are several corner cases you need to make sure to consider:
   a) subnormal
   b) rounding:  We use round-to-even in case of a tie.
   c) rounding increasing the exponent on the significand.
   d) +/- 0, NaNs, +/- infinity.
 */
uint16_t as_ieee_16(union floating f){
  fprintf(stderr, "Need to implement\n");
  return 0;
}



