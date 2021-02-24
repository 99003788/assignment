 #include "bitmask.h"
 
 int reset ( int num ,int bit)
 {
     return( num & (~(1 << bit))) ;
 }