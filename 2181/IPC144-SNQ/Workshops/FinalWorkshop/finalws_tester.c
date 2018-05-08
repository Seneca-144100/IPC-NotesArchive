/*
Write the function: void printPhones(const char* fname, char beginsWith)
in the files finalws.c and finalws.h


This function opens the file named in "fname" for reading. If it can not open it, it will print the message:
"file not found!\n"
If the file opens successfuly then the functions will do one of the two things below;
(choose one of the two or the third option if incomplete and the fourth one if it doesn't even compile)
(Note that the fourth one is almost worth nothing!)


1 (easy one):
Ignore the argument "beginsWith" (do not use it for this option, but let it be in the funciton as an unused argument)
Prints all the names and phone numbers stored in the file line by line in following format:
Name LastName: (999) 5559999
See the buttom for the sample output


Submit your work using:
~fardad.soleimanloo/submit finalwseasy


2 (normal version):
Prints all the names and phone numbers stored in the file that begins with the character "beginsWith"
in following format:
Name LastName: (999) 5559999
See below for sample output

Submit your work using:
~fardad.soleimanloo/submit finalws


3- compiled but not working right
If you could not be done submit whatever you have (it must successfuly compile only) using:
~fardad.soleimanloo/submit finalws_compiled


4- does not even compile
If you could not be done submit whatever you have using:
~fardad.soleimanloo/submit finalws_incomplete


*/


#include "finalws.h"
int main(void) {
  printPhones("phonenumbers.txt", 'M');
  return 0;
}



/*
The Output for easy version for 70% of the mark

Gloria Jailbird: (213) 5551234
Homer Simpson: (323) 5554321
Manjula Nahasapeemapetilon: (213) 5554567
Marge Simpson: (323) 5553456
Herbert Powell: (213) 5559876
Bart Simpson: (323) 5552345
Herman Hermann: (213) 5550193
Lisa Simpson: (323) 5552295
Mary Bailey: (213) 5551111


The Output for normal version for 100% of the mark

Manjula Nahasapeemapetilon: (213) 5554567
Marge Simpson: (323) 5553456
Mary Bailey: (213) 5551111


*/