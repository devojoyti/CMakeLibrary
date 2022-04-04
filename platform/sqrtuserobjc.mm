#import <Foundation/Foundation.h>
#include <stdio.h>
#include "squareroot.h"

int main (int argc, const char * argv[]) {
   NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];

   NSLog (@"hello world");

   int inputValue = atoi(argv[1]);

   mathematics::SquareRoot squareRoot;
  
  float output = squareRoot.squareRoot(inputValue);

   NSLog(@"output value is: %f", output);

   [pool drain];
   return 0;
}
