 #include "bitmask.h"
 
 int setBit(int num ,int bit)
 {
     return(num | (1 << (bit-1)));
 }