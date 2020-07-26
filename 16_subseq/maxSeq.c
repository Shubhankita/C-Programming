#include<stdio.h>
#include<stdlib.h>
size_t maxSeq (int * array,size_t n)
{

  if (array == NULL || n==0)
    {
      return 0;}
  if (n == 1)
    return 1;

  size_t size =1, max =1;

  for(size_t i=0; i<n-1; i++)
    {
      if(array[i]>=array[i+1])
	{
	  size =1;}
      else{
	size++;}
      if(size>max){
	max= size;}
    }
  return max;
  
}
