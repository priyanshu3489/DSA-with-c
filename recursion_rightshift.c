#include<stdio.h>
#define SIZE 5

int a[]  = { 1,2,3,4,5};
void rightShift(int shiftCount)
{
    int tmp;
    int i,j;
    tmp = a[SIZE-1];
    for(i=SIZE-1;i>0;i--)
    {
        a[i] = a[i-1];
    }
    a[0] = tmp;
    shiftCount--;
    if(shiftCount != 0 )
        rightShift(shiftCount);

}
void print(){
    int i;
    printf("\n");
    for(i=0;i<SIZE;i++)
    {
        printf(" %d",a[i]);
    }
}
int main(){
    print();
    rightShift(4);
    print();
    return 0;
}