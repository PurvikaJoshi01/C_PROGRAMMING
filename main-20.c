//Design a structure ‘subject’ to store the details of the subject like subject name and subject code. 

#include <stdio.h>
#include <stdlib.h>
struct course {              //structure declaration 
  int code;                  //structure variables
  char subject[25];
};

int main() {
  struct course *ptr;     //structure members
  int nsub;
  printf("no. of subjects : ");
  scanf("%d", &nsub);
  //memory allocation for number of subjects
  ptr = (struct course *)malloc(nsub * sizeof(struct course));
  for (int i = 0; i < nsub; ++i) { 
    printf(" please enter subject name and subject code:\n");
    scanf("%s %d", (ptr + i)->subject, &(ptr + i)->code); 
  }

  printf("Subject Subject code\n");
  for (int i = 0; i < nsub; ++i) {
    printf("%s\t%d\n", (ptr + i)->subject, (ptr + i)->code);
  }



  return 0;
}
