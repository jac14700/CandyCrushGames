#include <struct.h>
#include<HEADER.h>
///�洫�ƭ�
void swap( int *element1Ptr, int *element2Ptr )

{

   int hold = *element1Ptr;

   *element1Ptr = *element2Ptr;

   *element2Ptr = hold;

}
