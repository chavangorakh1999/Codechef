#include<stdio.h>



void Calculator (int Xvar)



{



if (Xvar > 0)



Calculator(--Xvar);



printf("%d, ", Xvar);



}



int main()



{



Calculator(5);



return 0;



}
