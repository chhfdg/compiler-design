#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

#define TRUE  1
#define FALSE 0
#define LEFT_ANGLE_BRACKET '<'
#define RIGHT_ANGLE_BRACKET '>'
#define SPACE ' '
#define MAX_LENGTH 100

// Function Prototypes
int detectTags(void);
void displayPurpose(char *tag);


// #############################################################
int main(void)
{
int tagCount;

printf("\n*** START OF HTML TAGS ***\n\n");

tagCount = detectTags();

printf("\nTOTAL NUMBER OF HTML TAGS FOUND: %d \n", tagCount);

return 0;
} // End main


// #############################################################
int detectTags(void)
{
char tag[10];
char tagElem;
int count = 0; // count of tags
do { //
for (int i = 0; i < 10; i++) {

scanf("%c", &tagElem);

tag[i] = tagElem; // add element to its place in the tag
count++; // increment count
}
} while(tagElem != '>'); 
do{
printf(&tagElem); // print tag character by character
} while(tagElem != '>'); // tag end condition
printf(">");

} // End detectTags


// #############################################################
void displayPurpose(char tag[])
{
      
      
      int choice = 0;
      if (tag == "<HTML>") {
         choice = 1;
         }
      else if (tag == "<HEAD>") {
         choice = 2;
         }
      else if (tag == "<TITLE>") {
         choice = 3;
         }
      else if (tag == "</TITLE>") {
         choice = 4;
         }
      else if (tag == "</HEAD>") {
         choice = 5;
         }
      else if (tag == "<BODY>") {
         choice = 6;
         }
      else if (tag == "<UL>") {
         choice = 7;
         }
      else if (tag == "<P>") {
         choice = 8;
         }
      else if (tag == "</UL>") {
         choice = 9;
         }
      else if (tag == "</HTML>") {
         choice = 10;
         }
      
      switch (choice) {
         case (1) :
            printf("Start of HTML file \n");
            break;
            
         case (2) :
            printf("Start of HTML header \n");
            break;
            
         case (3) :
            printf("Start of document title \n");
            break;
            
         case (4) :
            printf("End of document title \n");
            break;
            
         case (5) :
            printf("End of HTML header \n");
            break;
            
         case (6) :
            printf("Unknown HTML tag \n");
            break;
            
         case (7) :
            printf("Start of unnumbered list \n");
            break;
            
         case (8) :
            printf("Start of a new paragraph \n");
            break;
            
         case (9) :
            printf("End of unnumbered list \n");
            break;
            
         case (10) :
            printf("End of HTML file \n");
            break;
            
         default :
            printf("Unknown HTML tag \n");
            break;
            
      }
      

} // End displayPurpose
