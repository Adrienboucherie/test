#include <string.h>
#define MAX 10

#define true 1
#define false 0

typedef int bool;



bool anagramme(char *mot1, char *mot2){

  int i,j;
  bool echec = false;

  if(strlen(mot1) != strlen(mot2)){
    return false;
  }

  for ( i = 0; mot1[i]!= '\0' && !echec ; ++i)
  {
      for ( j = 0; mot2[j]!= '\0' && mot1[i] != mot2[j]; ++j);
      
        if(mot1[i] != mot2[j]){
          echec = true;
        }
        else{
          mot2[j]= '0';
        }
      
  }
  return !echec;

}
