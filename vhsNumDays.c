#include <stdio.h>
#include <math.h>
int main (){
    
 int numdays=0, cd=50, vhs =35;
char vid;
 
printf("Please input 'C' for CD, 'V' for VHS: " );
scanf("%c", &vid);

if(vid=='C'){

printf("Please input the number days late: ");
scanf("%d", &numdays);

if (numdays<=2){
printf("your fine is PHP 10.00 ");
}

else if (numdays <= 4){
printf("your fine is PHP 15.00");
}

else if (numdays <= 6){
printf("your fine is PHP 20.00");
}

else if (numdays >= 7){
printf("your fine is %d",cd);
}
else {
printf("INVALID");
}
}


else if(vid=='V'){
printf("Please input the number days late :");
scanf("%d", &numdays);

if (numdays<=2){
printf("your fine is PHP 10.00");
}

else if (numdays <= 4){
printf("your fine is PHP 15.00");
}

else if (numdays <= 6){
printf("your fine is PHP 20.00");
}

else if (numdays >= 7){
printf("your fine is %d",vhs);
}
else {
printf("INVALID");
}
}


return 0;
}