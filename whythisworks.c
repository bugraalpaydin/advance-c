#include <stdio.h> 

int main(int argc, char* argv[])
{ 
  int arr[5] = {31, 32, 33, 34, 35};

  for (int i = 0; i<5; i++)
  {
    //printf("%d", arr[i]);
    printf("\n%d", i[arr]);       //The definition of the subscript operator [] is that arr[i] is identical to (*((arr) + (i)), and i[arr] is identical to (*((i) + (arr)))   
  }
  
  return 0;
}
