#include "decoder.h"

char * rot(const char * original, int times_left, size_t max_len)
{
  if(strlen(original) > max_len)
  {
    printf("uh oh! stinky! poop!");
  }

  char * result = (char *)calloc(strlen(original), sizeof(char));
  
  for(size_t i = 0; i < strlen(original); i++)
  {
    const size_t magic_number = (i-times_left)%strlen(original);
    //printf("Magic number is %zu\n", magic_number);
    result[magic_number] = original[i];
  }
  //free(original);
  return result;
}

char * exor(const char * a, const char * b)
{
  if(strlen(a) != strlen(b)){
    printf("ah shit, here we go again");
  }

  size_t length = strlen(a);
  char * result = (char *)calloc(length, sizeof(char));

  for(size_t i = 0; i < length; i++){
    if(a[i] != b[i]){
      result[i] = '1';
    }
  }

  //free(a);
  //free(b);
  return result;
}
