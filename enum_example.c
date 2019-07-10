/* ###################################################
 * <Author>: Paul Picheca
 * <Data>: 2019-06-19
 * <Purpose>: This is program will demonstrate how 
 *            to use enums and display their values
 * 
 * <Remarks>: The program should do the following:
 *            1) Create an enum of a named company:
 *              e.g.: { GOOGLE, FACEBOOK, XEROX, 
 *                      YAHOO,  EBAY,     MICROSOFT }
 *            2) Create three variables from the enum
 *            3) Display their values using printf(...)
 * ################################################### */

#include <stdio.h>
typedef enum _COMPANY { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT } COMPANY;

int main( int argc, char *argv[] ) {
  COMPANY facebook = FACEBOOK;
  COMPANY google = GOOGLE;
  COMPANY ebay = EBAY;

  printf( "Comany Values\n****************************\n--> FACEBOOK is: %2d\n--> GOOGLE   is: %2d\n--> EBAY     is: %2d\n", 
    facebook, google, ebay 
  ); 
  return 0;
}