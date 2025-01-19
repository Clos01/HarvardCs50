  #include <stdio.h>
  #include <string.h>
  
  char* invitedGuest[] = {"Carlos", "Will", "Tita", "David"};                                                                                                                                         
                                                                                                                                             
int main()
{
  int sizeOfInvitedGuest = sizeof(invitedGuest) / sizeof(invitedGuest[0]);  
for(int i =0; i < sizeOfInvitedGuest; i++)
  {
  printf("%s\n", invitedGuest[i]);
  }
  return 0;
}                                                                                                                                             
                                                                                                                                          
