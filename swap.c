#include <struct.h>
#include<HEADER.h>
///¥æ´«¼Æ­È
void swap( int *element1Ptr, int *element2Ptr )

{

   int hold = *element1Ptr;

   *element1Ptr = *element2Ptr;

   *element2Ptr = hold;

}
