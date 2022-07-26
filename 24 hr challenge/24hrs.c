#include<stdio.h>
void currency();
void temperature();
void metric();
void weight();
void length();
void area();
void fuel();
void time();
void volume();
void pressure();
void power();

double cur,val,value;
int chh,ch,chhh;
char ans;

int main()
{
do
{
printf("\n###MENU###\n");
printf("\n1.Convert currency");
printf("\n2.Convert Metric");
printf("\n3.Convert Weight");
printf("\n4.Convert length");
printf("\n5.Convert area");
printf("\n6.Convert Fuel");
printf("\n7.Convert time");
printf("\n8.Convert volume");
printf("\n9.Convert temperature");
printf("\n10.Convert pressure");
printf("\n11.Convert Power");
printf("\n999.exit.");
printf("\n:::Enter your choice(1-11):::\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
currency();
break;
case 2:
metric();
break;
case 3:
weight();
break;
case 4:
length();
break;
case 5:
area();
break;
case 6:
fuel();
break;
case 7:
time();
break;
case 8:
volume();
break;
case 9:
temperature();
break;
case 10:
pressure ();
break;
case 11:
power();
break;
case 999:
break;
default:
printf("\nWrong choice\n");
}
printf("\nWant to do something else..(y/n)...???");
scanf("%c",&ans);
scanf("%c",&ans);
}while(ans=='y');
}





void currency ()
{
printf("\nWhat type of currency you want to convert....????\n");
printf("\nenter 1 for rupee\nenter 2 for dollar\nenter 3 for yuan\nenter 4 for pound\nenter 5 for euro");
printf("\nEnter your choice:::1-5\n");
scanf("%d",&chh);
switch(chh)
{
case 1:
printf("Enter the blank value for conversion\n____ rupee\n");
scanf("%lf",&cur);
val=1.3889;
value=val/100*cur;
printf("\nThe value is %lf united states dollar\n",value);
val=9.5090;
value=val/100*cur;
printf("\nThe value is %lf chinese yuan\n",value);
val=1.0567;
value=val/100*cur;
printf("\nThe value is %lf british pound\n",value);
val=1.1896;
value=val/100*cur;
printf("\nThe value is %lf euro\n",value);
break;

case 2:
printf("Enter the blank value for conversion\n____ dollar\n");
scanf("%lf",&cur);
val=7200.0000;
value=val/100*cur;
printf("\nThe value is %lf indian rupee\n",value);
val=684.6500;
value=val/100*cur;
printf("\nThe value is %lf chinese yuan\n",value);
val=76.0840;
value=val/100*cur;
printf("\nThe value is %lf british pound\n",value);
val=85.6500;
value=val/100*cur;
printf("\nThe value is %lf euro\n",value);
break;

case 3:
printf("Enter the blank value for conversion\n____ yuan\n");
scanf("%lf",&cur);
val=14.6060;
value=val/100*cur;
printf("\nThe value is %lf united states dollar\n",value);
val=1051.6322;
value=val/100*cur;
printf("\nThe value is %lf indian rupee\n",value);
val=11.1128;
value=val/100*cur;
printf("\nThe value is %lf british pound\n",value);
val=12.5100;
value=val/100*cur;
printf("\nThe value is %lf euro\n",value);
break;

case 4:
printf("Enter the blank value for conversion\n____ pound\n");
scanf("%lf",&cur);
val=131.4337;
value=val/100*cur;
printf("\nThe value is %lf united states dollar\n",value);
val=899.8907;
value=val/100*cur;
printf("\nThe value is %lf chinese yuan\n",value);
val=9463.2249;
value=val/100*cur;
printf("\nThe value is %lf indian rupee\n",value);
val=112.5729;
value=val/100*cur;
printf("\nThe value is %lf euro\n",value);
break;

case 5:
printf("Enter the blank value for conversion\n____ euro\n");
scanf("%lf",&cur);
val=116.7542;
value=val/100*cur;
printf("\nThe value is %lf united states dollar\n",value);
val=799.3579;
value=val/100*cur;
printf("\nThe value is %lf chinese yuan\n",value);
val=88.8313;
value=val/100*cur;
printf("\nThe value is %lf british pound\n",value);
val=8406.3047;
value=val/100*cur;
printf("\nThe value is %lf rupee\n",value);
break;

default:
printf("/nWrong choice");
}
}





void temperature()
{
printf("\nWhat type of temperature you want to convert....????\n");
printf("\nenter 1 for celcius\nenter 2 for fahrenheit\nenter 3 for kelvin\nenter 4 for delisle\nenter 5 for newton\n");
printf("\nEnter your choice:::1-5\n");
scanf("%d",&chh);
switch(chh)
{
case 1:
printf("Enter the blank value for conversion\n____ celcius\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for fahrenheit\nenter 2 for kelvin \nenter 3 for delisle\nenter 4 for newton\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*1.8+32;
printf("\nThe value is %lf °F",val);
break;
case 2:
val=cur*1+273.15;
printf("\nThe value is %lf K",val);
break;
case 3:
val=(100-cur)*1.5;
printf("\nThe value is %lf °De",val);
break;
case 4:
val=cur/3.030303;
printf("\nThe value is %lf N",val);
break;
default:
printf("\nWrong choice");

}
break;


case 2:
printf("Enter the blank value for conversion\n____ fahrenheit\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for celcius\nenter 2 for kelvin \nenter 3 for delisle\nenter 4 for newton\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=(cur-32)/1.8;
printf("\nThe value is %lf °C",val);
break;
case 2:
val=((cur-32)/1.8)+273.15;
printf("\nThe value is %lf K",val);
break;
case 3:
val=(212-cur)*0.833333;
printf("\nThe value is %lf °De",val);
break;
case 4:
val=(cur-32)/5.454545;
printf("\nThe value is %lf N",val);
break;
default:
printf("\nWrong choice");
}
break;


case 3:
printf("Enter the blank value for conversion\n____ kelvin\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for celcius\nenter 2 for fahrenheit\nenter 3 for delisle\nenter 4 for newton\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur-273.15;
printf("\nThe value is %lf °C",val);
break;
case 2:
val=(cur-273.15)*1.8+32;
printf("\nThe value is %lf °F ",val);
break;
case 3:
val=(373.15-cur)*1.5;
printf("\nThe value is %lf °De",val);
break;
case 4:
val=(cur-273.15)/3.030303;
printf("\nThe value is %lf °N",val);
break;
default:
printf("\nWrong choice");
}
break;



case 4:
printf("Enter the blank value for conversion\n____ Delisle\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for celcius\nenter 2 for fahrenheit\nenter 3 for kelvin\nenter 4 for newton\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=100-cur*0.6666667;
printf("\nThe value is %lf °C",val);
break;
case 2:
val=212-cur*1.2;
printf("\nThe value is %lf °F ",val);
break;
case 3:
val=373.15-cur*0.6666667;
printf("\nThe value is %lf K",val);
break;
case 4:
val=33-cur*0.22;
printf("\nThe value is %lf °N",val);
break;
default:
printf("\nWrong choice");
}
break;

case 5:
printf("Enter the blank value for conversion\n____ Newton\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for celcius\nenter 2 for fahrenheit\nenter 3 for kelvin\nenter 4 for delisle\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*3.030303;
printf("\nThe value is %lf °C",val);
break;
case 2:
val=cur*5.454545+32;
printf("\nThe value is %lf °F ",val);
break;
case 3:
val=cur*3.030303+273.15;
printf("\nThe value is %lf K",val);
break;
case 4:
val=(33-cur)*4.545455;
printf("\nThe value is %lf °De",val);
break;
default:
printf("\nWrong choice");
}
break;

}
}







void area()
{
printf("\nWhat type of temperature you want to convert....????\n");
printf("\nenter 1 for acres\nenter 2 for hectares\nenter 3 for square foot\nenter 4 for square meters\nenter 5 for square kilometers\nenter 6 for square miles\nenter 7 for square inches\nenter 8 for square yards\n");
printf("\nEnter your choice:::1-8\n");
scanf("%d",&chh);
switch(chh)
{
case 1:
printf("Enter the blank value for conversion\n____ acres\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for hectares\nenter 2 for square foot\nenter 3 for square meters\nenter 4 for square kilometers\nenter 5 for square miles\nenter 6 for square inches\nenter 7 for square yards\n");
printf("\nEnter your choice:::1-7\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur/2.471054;
printf("\nThe value is %lf hectares",val);
break;

case 2:
val=cur*43560;
printf("\nThe value is %lf square foot",val);
break;

case 3:
val=cur*4046.856;
printf("\nThe value is %lf square meters",val);
break;

case 4:
val=cur/247.1054;
printf("\nThe value is %lf square kilometers",val);
break;

case 5:
val=cur/640;
printf("\nThe value is %lf square miles",val);
break;

case 6:
val=cur*6272640;
printf("\nThe value is %lf square inches",val);
break;

case 7:
val=cur*4840;
printf("\nThe value is %lf square yards",val);
break;
default:
printf("\nWrong choice\n");
}
break;


case 2:
printf("Enter the blank value for conversion\n____ hectares\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for acres\nenter 2 for square foot\nenter 3 for square meters\nenter 4 for square kilometers\nenter 5 for square miles\nenter 6 for square inches\nenter 7 for square yards\n");
printf("\nEnter your choice:::1-7\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*2.471054;
printf("\nThe value is %lf acres",val);
break;

case 2:
val=cur*107639.1;
printf("\nThe value is %lf square foot",val);
break;

case 3:
val=cur*10000;
printf("\nThe value is %lf square meters",val);
break;

case 4:
val=cur/100;
printf("\nThe value is %lf square kilometers",val);
break;

case 5:
val=cur/258.9988;
printf("\nThe value is %lf square miles",val);
break;

case 6:
val=cur*1550003;
printf("\nThe value is %lf square inches",val);
break;

case 7:
val=cur*11959.9;
printf("\nThe value is %lf square yards",val);
break;
default:
printf("\nWrong choice\n");
}
break;


case 3:
printf("Enter the blank value for conversion\n____ square foot\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for acres\nenter 2 for hectares\nenter 3 for square meters\nenter 4 for square kilometers\nenter 5 for square miles\nenter 6 for square inches\nenter 7 for square yards\n");
printf("\nEnter your choice:::1-7\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur/43560;
printf("\nThe value is %lf acres",val);
break;

case 2:
val=cur/107639.1;
printf("\nThe value is %lf hectares",val);
break;

case 3:
val=cur/10.76391;
printf("\nThe value is %lf square meters",val);
break;

case 4:
val=cur*9.2903/100000000;
printf("\nThe value is %lf square kilometers",val);
break;

case 5:
val=cur*3.587/100000000;
printf("\nThe value is %lf square miles",val);
break;

case 6:
val=cur*144;
printf("\nThe value is %lf square inches",val);
break;

case 7:
val=cur*0.111111;
printf("\nThe value is %lf square yards",val);
break;
default:
printf("\nWrong choice\n");
}
break;


case 4:
printf("Enter the blank value for conversion\n____ square meters\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for hectares\nenter 2 for square foot\nenter 3 for acres\nenter 4 for square kilometers\nenter 5 for square miles\nenter 6 for square inches\nenter 7 for square yards\n");
printf("\nEnter your choice:::1-7\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur/10000;
printf("\nThe value is %lf hectares",val);
break;

case 2:
val=cur*10.7639;
printf("\nThe value is %lf square foot",val);
break;

case 3:
val=cur*0.000247105;
printf("\nThe value is %lf acres",val);
break;

case 4:
val=cur/1000000;
printf("\nThe value is %lf square kilometers",val);
break;

case 5:
val=cur/2589988;
printf("\nThe value is %lf square miles",val);
break;

case 6:
val=cur*1550.003;
printf("\nThe value is %lf square inches",val);
break;

case 7:
val=cur*1.19599;
printf("\nThe value is %lf square yards",val);
break;
default:
printf("\nWrong choice\n");
}
break;

case 5:
printf("Enter the blank value for conversion\n____ square kilometers\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for hectares\nenter 2 for square foot\nenter 3 for square meters\nenter 4 for acres\nenter 5 for square miles\nenter 6 for square inches\nenter 7 for square yards\n");
printf("\nEnter your choice:::1-7\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*100;
printf("\nThe value is %lf hectares",val);
break;

case 2:
val=cur*10760000;
printf("\nThe value is %lf square foot",val);
break;

case 3:
val=cur*1000000;
printf("\nThe value is %lf square meters",val);
break;

case 4:
val=cur*247.1054;
printf("\nThe value is %lf acres",val);
break;

case 5:
val=cur*0.386102;
printf("\nThe value is %lf square miles",val);
break;

case 6:
val=cur*1550003000;
printf("\nThe value is %lf square inches",val);
break;

case 7:
val=cur*1195990;
printf("\nThe value is %lf square yards",val);
break;
default:
printf("\nWrong choice\n");
}
break;

case 6:
printf("Enter the blank value for conversion\n____ square miles\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for hectares\nenter 2 for square foot\nenter 3 for square meters\nenter 4 for square kilometers\nenter 5 for acres\nenter 6 for square inches\nenter 7 for square yards\n");
printf("\nEnter your choice:::1-7\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*258.9988;
printf("\nThe value is %lf hectares",val);
break;

case 2:
val=cur*27878400;
printf("\nThe value is %lf square foot",val);
break;

case 3:
val=cur*2589988;
printf("\nThe value is %lf square meters",val);
break;

case 4:
val=cur*2.589988;
printf("\nThe value is %lf square kilometers",val);
break;

case 5:
val=cur*640;
printf("\nThe value is %lf acres",val);
break;

case 6:
val=cur*4014490000;
printf("\nThe value is %lf square inches",val);
break;

case 7:
val=cur*3097600;
printf("\nThe value is %lf square yards",val);
break;
default:
printf("\nWrong choice\n");
}
break;

case 7:
printf("Enter the blank value for conversion\n____ square inches\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for hectares\nenter 2 for square foot\nenter 3 for square meters\nenter 4 for square kilometers\nenter 5 for square miles\nenter 6 for acres\nenter 7 for square yards\n");
printf("\nEnter your choice:::1-7\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur/15500030;
printf("\nThe value is %lf hectares",val);
break;

case 2:
val=cur/144;
printf("\nThe value is %lf square foot",val);
break;

case 3:
val=cur/1550.003;
printf("\nThe value is %lf square meters",val);
break;

case 4:
val=cur/1550003000;
printf("\nThe value is %lf square kilometers",val);
break;

case 5:
val=cur/4014490000;
printf("\nThe value is %lf square miles",val);
break;

case 6:
val=cur/6272640;
printf("\nThe value is %lf acres",val);
break;

case 7:
val=cur/1296;
printf("\nThe value is %lf square yards",val);
break;
default:
printf("\nWrong choice\n");
}
break;


case 8:
printf("Enter the blank value for conversion\n____ square yards\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for hectares\nenter 2 for square foot\nenter 3 for square meters\nenter 4 for square kilometers\nenter 5 for square miles\nenter 6 for square inches\nenter 7 for acres\n");
printf("\nEnter your choice:::1-7\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur/11959.9;
printf("\nThe value is %lf hectares",val);
break;

case 2:
val=cur*9;
printf("\nThe value is %lf square foot",val);
break;

case 3:
val=cur/1.19599;
printf("\nThe value is %lf square meters",val);
break;

case 4:
val=cur/1195990;
printf("\nThe value is %lf square kilometers",val);
break;

case 5:
val=cur/3097600;
printf("\nThe value is %lf square miles",val);
break;

case 6:
val=cur*1296;
printf("\nThe value is %lf square inches",val);
break;

case 7:
val=cur/4840;
printf("\nThe value is %lf acres",val);
break;
default:
printf("\nWrong choice\n");
}
break;


}
}




void time()
{
printf("\nWhat type of time you want to convert....????\n");
printf("\nenter 1 for seconds\nenter 2 for minutes\nenter 3 for hours\nenter 4 for day\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chh);
switch(chh)
{
case 1:
printf("Enter the blank value for conversion\n____ seconds\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for minutes\nenter 2 for hours\nenter 3 for day\n");
printf("\nEnter your choice:::1-3\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur/60;
printf("\nThe value is %lf minutes",val);
break;
case 2:
val=cur/3600;
printf("\nThe value is %lf hours",val);
break;
case 3:
val=cur/86400;
printf("\nThe value is %lf days",val);
break;
default:
printf("\nWrong choice\n");
}
break;

case 2:
printf("Enter the blank value for conversion\n____ minutes\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for seconds\nenter 2 for hours\nenter 3 for day\n");
printf("\nEnter your choice:::1-3\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*60;
printf("\nThe value is %lf seconds",val);
break;
case 2:
val=cur/60;
printf("\nThe value is %lf hours",val);
break;
case 3:
val=cur/1440;
printf("\nThe value is %lf days",val);
break;
default:
printf("\nWrong choice\n");
}
break;



case 3:
printf("Enter the blank value for conversion\n____ hours\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for seconds\nenter 2 for minutes\nenter 3 for day\n");
printf("\nEnter your choice:::1-3\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*3600;
printf("\nThe value is %lf seconds",val);
break;
case 2:
val=cur*60;
printf("\nThe value is %lf minutes",val);
break;
case 3:
val=cur/24;
printf("\nThe value is %lf day",val);
break;
default:
printf("\nWrong choice\n");
}
break;
case 4:
printf("Enter the blank value for conversion\n____ days\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for seconds\nenter 2 for minutes\nenter 3 for hours\n");
printf("\nEnter your choice:::1-3\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*86400;
printf("\nThe value is %lf seconds",val);
break;
case 2:
val=cur*1440;
printf("\nThe value is %lf minutes",val);
break;
case 3:
val=cur*24;
printf("\nThe value is %lf hours",val);
break;
default:
printf("\nWrong choice\n");
}
break;
default:
printf("\nWrong choice\n");
}
}




void pressure()
{
printf("\nWhat type of pressure you want to convert....????\n");
printf("\nenter 1 for atmosphere\nenter 2 for bar\nenter 3 for pascal\nenter 4 for pound-force per square inch \nenter 5 for torr\n");
printf("\nEnter your choice:::1-5\n");
scanf("%d",&chh);
switch(chh)
{
case 1:
printf("Enter the blank value for conversion\n____ atmosphere\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for bar\nenter 2 for pascal\nenter 3 for pound-force per square inch\nenter 4 for torr \n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*1.01325;
printf("\nThe value is %lf bar",val);
break;
case 2:
val=cur*101325;
printf("\nThe value is %lf Pa",val);
break;
case 3:
val=cur*14.69595;
printf("\nThe value is %lf psi",val);
break;
case 4:
val=cur*759.9999;
printf("\nThe value is %lf torr",val);
break;
default:
printf("\nWrong choice");

}
break;
case 2:
printf("Enter the blank value for conversion\n____ bar\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for atmosphere\nenter 2 for pascal\nenter 3 for pound-force per square inch\nenter 4 for torr \n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur/1.01325;
printf("\nThe value is %lf atmosphere",val);
break;
case 2:
val=cur*100000;
printf("\nThe value is %lf Pa",val);
break;
case 3:
val=cur*14.50377;
printf("\nThe value is %lf psi",val);
break;
case 4:
val=cur*750.0616;
printf("\nThe value is %lf torr",val);
break;
default:
printf("\nWrong choice");

}
break;

case 3:
printf("Enter the blank value for conversion\n____ pascal\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for atmosphere\nenter 2 for bar\nenter 3 for pound-force per square inch\nenter 4 for torr \n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur/101325;
printf("\nThe value is %lf atm",val);
break;
case 2:
val=cur/100000;
printf("\nThe value is %lf bar",val);
break;
case 3:
val=cur/6894.757;
printf("\nThe value is %lf psi",val);
break;
case 4:
val=cur/133.3234;
printf("\nThe value is %lf torr",val);
break;
default:
printf("\nWrong choice");

}
break;

case 4:
printf("Enter the blank value for conversion\n____ Pound-force per square inch\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for atmosphere\nenter 2 for bar\nenter 3 for pascal\nenter 4 for Torr\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur/14.69595;
printf("\nThe value is %lf atm",val);
break;
case 2:
val=cur/14.50377;
printf("\nThe value is %lf bar",val);
break;
case 3:
val=cur*6894.757;
printf("\nThe value is %lf Pa",val);
break;
case 4:
val=cur*51.71492;
printf("\nThe value is %lf Torr",val);
break;
default:
printf("\nWrong choice");

}
break;


case 5:
printf("Enter the blank value for conversion\n____ Torr\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for atmosphere\nenter 2 for bar\nenter 3 for pascal\nenter 4 for pound-force per square inch\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur/759.9999;
printf("\nThe value is %lf atm",val);
break;
case 2:
val=cur/750.0616;
printf("\nThe value is %lf bar",val);
break;
case 3:
val=cur*133.3224;
printf("\nThe value is %lf Pa",val);
break;
case 4:
val=cur/51.71492;
printf("\nThe value is %lf Torr",val);
break;
default:
printf("\nWrong choice");

}
break;


default:
printf("\nWrong choice");



}
}


void fuel()
{
printf("\nWhat type of fuel you want to convert....????\n");
printf("\nenter 1 for US Miles per gallon\nenter 2 for Miles per gallon(imperial)\nenter 3 for kilometre per litre\nenter 4 for litre per 100 kilometres\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chh);
switch(chh)
{
case 1:
printf("Enter the blank value for conversion\n____ US Miles per gallon\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for Miles per gallon(imperial)\nenter 2 for kilometre per litre\nenter 3 for litre per 100 kilometres\n");
printf("\nEnter your choice:::1-3\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*1.20095;
printf("\nThe value is %lf Miles per gallon(imperial)",val);
break;
case 2:
val=cur*0.425144;
printf("\nThe value is %lf kilometre per litre",val);
break;
case 3:
val=cur*235.215;
printf("\nThe value is %lf litre per 100 kilometres",val);
break;
default:
printf("\nWrong choice\n");
}
break;

case 2:
printf("Enter the blank value for conversion\n____ Miles per gallon(imperial)\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for US miles per gallon\nenter 2 for kilometre per litre\nenter 3 for litre per 100 kilometres\n");
printf("\nEnter your choice:::1-3\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*0.832674;
printf("\nThe value is %lf US miles per gallon",val);
break;
case 2:
val=cur*0.354006;
printf("\nThe value is %lf kilometre per litre",val);
break;
case 3:
val=cur*282.481;
printf("\nThe value is %lf litre per 100 kilometres",val);
break;
default:
printf("\nWrong choice\n");
}
break;



case 3:
printf("Enter the blank value for conversion\n____ kilometre per litre\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for US miles per gallon\nenter 2 for Miles per gallon(imperial)\nenter 3 for litre per 100 kilometres\n");
printf("\nEnter your choice:::1-3\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*2.35215;
printf("\nThe value is %lf US miles per gallon",val);
break;
case 2:
val=cur*2.82481;
printf("\nThe value is %lf Miles per gallon(imperial)",val);
break;
case 3:
val=cur*100;
printf("\nThe value is %lf litre per 100 kilometres",val);
break;
default:
printf("\nWrong choice\n");
}
break;
case 4:
printf("Enter the blank value for conversion\n____ litre per 100 kilometres\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for US miles per gallon\nenter 2 for Miles per gallon(imperial)\nenter 3 for kilometre per litre\n");
printf("\nEnter your choice:::1-3\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*86400;
printf("\nThe value is %lf US miles per gallon",val);
break;
case 2:
val=cur*1440;
printf("\nThe value is %lf Miles per gallon(imperial)",val);
break;
case 3:
val=cur*24;
printf("\nThe value is %lf kilometre per litre",val);
break;
default:
printf("\nWrong choice\n");
}
break;
default:
printf("\nWrong choice\n");
}
}




void volume()
{
printf("\nWhat type of volume you want to convert....????\n");
printf("\nenter 1 for US table spoon\nenter 2 for US teaspoon\nenter 3 for cubic metre\nenter 4 for litre\nenter 5 for mililitre\n");
printf("\nEnter your choice:::1-5\n");
scanf("%d",&chh);
switch(chh)
{
case 1:
printf("Enter the blank value for conversion\n____ US table spoon\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for US teaspoon\nenter 2 for cubic metre\nenter 3 for litre\nenter 4 for mililitre");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*3;
printf("\nThe value is %lf US teaspoon",val);
break;
case 2:
val=(cur*1.4787)/100000;
printf("\nThe value is %lf cubic metre",val);
break;
case 3:
val=cur*0.0147868;
printf("\nThe value is %lf litre ",val);
break;
case 4:
val=cur*14.7868;
printf("\nThe value is %lf millilitre ",val);
break;
default:
printf("\nWrong choice\n");
}
break;

case 2:
printf("Enter the blank value for conversion\n____ US teaspoon\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for US table spoon\nenter 2 for cubic metre\nenter 3 for litre\nenter 4 for millilitres");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*0.333333;
printf("\nThe value is %lf US table spoon",val);
break;
case 2:
val=(cur*4.9289)/1000000;
printf("\nThe value is %lf cubic metre",val);
break;
case 3:
val=cur*0.00492892;
printf("\nThe value is %lf litre",val);
break;
case 4:
val=cur*4.92892;
printf("\nThe value is %lf millilitre",val);
break;
default:
printf("\nWrong choice\n");
}
break;



case 3:
printf("Enter the blank value for conversion\n____ cubic metre\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for US table spoon\nenter 2 for US teaspoon\nenter 3 for litre\nenter 4 for millilitre\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*67628;
printf("\nThe value is %lf US table spoon",val);
break;
case 2:
val=cur*202884;
printf("\nThe value is %lf US teaspoon",val);
break;
case 3:
val=cur*1000;
printf("\nThe value is %lf litre",val);
break;
case 4:
val=cur*1000000;
printf("\nThe value is %lf millilitre",val);
break;
default:
printf("\nWrong choice\n");
}
break;
case 4:
printf("Enter the blank value for conversion\n____ litre\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for US table spoon\nenter 2 for US teaspoon\nenter 3 for cubic metre\nenter 4 for millilitre\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*67.628;
printf("\nThe value is %lf US table spoon",val);
break;
case 2:
val=cur*202.884;
printf("\nThe value is %lf US teaspoon",val);
break;
case 3:
val=cur*0.001;
printf("\nThe value is %lf cubic metre",val);
break;
case 4:
val=cur*1000;
printf("\nThe value is %lf millilitre",val);
break;
default:
printf("\nWrong choice\n");
}
break;


case 5:
printf("Enter the blank value for conversion\n____ millilitre\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for US table spoon\nenter 2 for US teaspoon\nenter 3 for cubic metre\nenter 4 for litre\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*0.067628;
printf("\nThe value is %lf US table spoon",val);
break;
case 2:
val=cur*0.202884;
printf("\nThe value is %lf US teaspoon",val);
break;
case 3:
val=cur/1000000;
printf("\nThe value is %lf cubic metre",val);
break;
case 4:
val=cur*0.001;
printf("\nThe value is %lf litre",val);
break;

default:
printf("\nWrong choice\n");
}
break;
default:
printf("\nWrong choice\n");
}
}






void length()
{
printf("\nWhat type of length you want to convert....????\n");
printf("\nenter 1 for US kilometre\nenter 2 for metre\nenter 3 for centimetre\nenter 4 for inch\nenter 5 for foot\n");
printf("\nEnter your choice:::1-5\n");
scanf("%d",&chh);
switch(chh)
{
case 1:
printf("Enter the blank value for conversion\n____ kilometre\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for metre\nenter 2 for centimetre\nenter 3 for inch\nenter 4 for foot");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*1000;
printf("\nThe value is %lf metre",val);
break;
case 2:
val=cur*100000;
printf("\nThe value is %lf centimetre",val);
break;
case 3:
val=cur*39370.1;
printf("\nThe value is %lf inch ",val);
break;
case 4:
val=cur*3280.84;
printf("\nThe value is %lf foot",val);
break;
default:
printf("\nWrong choice\n");
}
break;

case 2:
printf("Enter the blank value for conversion\n____ metre\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for kilometre\nenter 2 for centimetre\nenter 3 for inch\nenter 4 for foot");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*0.001;
printf("\nThe value is %lf kilometres",val);
break;
case 2:
val=cur*100;
printf("\nThe value is %lf centimetre",val);
break;
case 3:
val=cur*39.3701;
printf("\nThe value is %lf inch",val);
break;
case 4:
val=cur*3.28084;
printf("\nThe value is %lf foot",val);
break;
default:
printf("\nWrong choice\n");
}
break;



case 3:
printf("Enter the blank value for conversion\n____ centi metre\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for kilometre\nenter 2 for US metre\nenter 3 for inch\nenter 4 for foot\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur/100000;
printf("\nThe value is %lf kilometre",val);
break;
case 2:
val=cur*0.01;
printf("\nThe value is %lf metre",val);
break;
case 3:
val=cur*0.393701;
printf("\nThe value is %lf inch",val);
break;
case 4:
val=cur*0.0328084;
printf("\nThe value is %lf foot",val);
break;
default:
printf("\nWrong choice\n");
}
break;
case 4:
printf("Enter the blank value for conversion\n____ inch\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for kilometre\nenter 2 for metre\nenter 3 for centi metre\nenter 4 for foot\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=(cur*2.54)/100000;
printf("\nThe value is %lf kilometre",val);
break;
case 2:
val=cur*0.0254;
printf("\nThe value is %lf metre",val);
break;
case 3:
val=cur*2.54;
printf("\nThe value is %lf centi metre",val);
break;
case 4:
val=cur*0.08333333;
printf("\nThe value is %lf foot",val);
break;
default:
printf("\nWrong choice\n");
}
break;


case 5:
printf("Enter the blank value for conversion\n____ foot\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for kilometres\nenter 2 for metres\nenter 3 for centi metre\nenter 4 for inch\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*0.0003048;
printf("\nThe value is %lf kilometre",val);
break;
case 2:
val=cur*0.3048;
printf("\nThe value is %lf metre",val);
break;
case 3:
val=cur*30.48;
printf("\nThe value is %lf centimetre",val);
break;
case 4:
val=cur*12;
printf("\nThe value is %lf inch",val);
break;

default:
printf("\nWrong choice\n");
}
break;
default:
printf("\nWrong choice\n");
}
}



void power()
{
printf("\nWhat type of power you want to convert....????\n");
printf("\nenter 1 for joule\nenter 2 for kilojoule\nenter 3 for gram calorie\nenter 4 for kilocalorie\nenter 5 for watt hour\nenter 6 for kilowatt hour\nenter 7 for electronvolt\n");
printf("\nEnter your choice:::1-7\n");
scanf("%d",&chh);
switch(chh)
{
case 1:
printf("Enter the blank value for conversion\n____ joule\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for kilojoule\nenter 2 for gram calorie\nenter 3 for kilocalorie\nenter 4 for watt hour\nenter 5 for kilowatt hour\nenter 6 for electron volt\n");
printf("\nEnter your choice:::1-6\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*0.001;
printf("\nThe value is %lf kilojoule",val);
break;
case 2:
val=cur*0.239006;
printf("\nThe value is %lf gram calorie",val);
break;
case 3:
val=cur*0.000239006;
printf("\nThe value is %lf kilogram calorie",val);
break;
case 4:
val=cur*0.000277778;
printf("\nThe value is %lf watt hour ",val);
break;
case 5:
val=(cur*2.7778)/10000000;
printf("\nThe value is %lf kilowatt hour",val);
break;
case 6:
val=(cur*6.242);
printf("\nThe value is %lfe+18 electron volt",val);
break;
default:
printf("\nWrong choice\n");
}
break;

case 2:
printf("Enter the blank value for conversion\n____ kilojoule\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for joule\nenter 2 for gram calorie\nenter 3 for kilocalorie\nenter 4 for watt hour\nenter 5 for kilowatt hour\nenter 6 for electron volt\n");
printf("\nEnter your choice:::1-6\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*1000;
printf("\nThe value is %lf joule",val);
break;
case 2:
val=cur*239.006;
printf("\nThe value is %lf gram calorie",val);
break;
case 3:
val=cur*0.239006;
printf("\nThe value is %lf kilogram calorie",val);
break;
case 4:
val=cur*0.277778;
printf("\nThe value is %lf watt hour",val);
break;
case 5:
val=cur*0.000277778;
printf("\nThe value is %lf kilowatt hour",val);
break;
case 6:
val=cur*6.242;
printf("\nThe value is %lfe+21 electron volt",val);
break;
default:
printf("\nWrong choice\n");
}
break;


case 3:
printf("Enter the blank value for conversion\n____ gram calorie\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for joule\nenter 2 for kilojoule\nenter 3 for kilocalorie\nenter 4 for watt hour\nenter 5 for kilowatt hour\nenter 6 for electron volt\n");
printf("\nEnter your choice:::1-6\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*4.184;
printf("\nThe value is %lf joule",val);
break;
case 2:
val=cur*0.004184;
printf("\nThe value is %lf kilo joule",val);
break;
case 3:
val=cur*0.001;
printf("\nThe value is %lf kilo calorie",val);
break;
case 4:
val=cur*0.00116222;
printf("\nThe value is %lf watt hour ",val);
break;
case 5:
val=(cur*1.1622)/1000000;
printf("\nThe value is %lf kilowatt hour",val);
break;
case 6:
val=cur*2.611;
printf("\nThe value is %lfe+19 electron volt",val);
break;
default:
printf("\nWrong choice\n");
}
break;


case 4:
printf("Enter the blank value for conversion\n____ kilocalorie\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for joule\nenter 2 for kilojoule\nenter 3 for gram calorie\nenter 4 for watt hour\nenter 5 for kilowatt hour\nenter 6 for electron volt\n");
printf("\nEnter your choice:::1-6\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*4184;
printf("\nThe value is %lf joule",val);
break;
case 2:
val=cur*4.184;
printf("\nThe value is %lf kilo joule",val);
break;
case 3:
val=cur*1000;
printf("\nThe value is %lf gram calorie",val);
break;
case 4:
val=cur*1.16222;
printf("\nThe value is %lf watt hour ",val);
break;
case 5:
val=cur*0.00116222;
printf("\nThe value is %lf kilowatt hour",val);
break;
case 6:
val=cur*2.611;
printf("\nThe value is %lfe+22 electron volt",val);
break;
default:
printf("\nWrong choice\n");
}
break;

case 5:
printf("Enter the blank value for conversion\n____ watt hour\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for joule\nenter 2 for kilojoule\nenter 3 for gram calorie\nenter 4 for kilocalorie\nenter 5 for kilowatt hour\nenter 6 for electron volt\n");
printf("\nEnter your choice:::1-6\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*3600;
printf("\nThe value is %lf joule",val);
break;
case 2:
val=cur*3.6;
printf("\nThe value is %lf kilo joule",val);
break;
case 3:
val=cur*860.421;
printf("\nThe value is %lf gram calorie",val);
break;
case 4:
val=cur*0.860421;
printf("\nThe value is %lf kilocalorie",val);
break;
case 5:
val=cur*0.001;
printf("\nThe value is %lf kilowatt hour",val);
break;
case 6:
val=cur*2.247;
printf("\nThe value is %lfe+22 electron volt",val);
break;
default:
printf("\nWrong choice\n");
}
break;
case 6:
printf("Enter the blank value for conversion\n____ kilowatt hour\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for joule\nenter 2 for kilojoule\nenter 3 for gram calorie\nenter 4 for kilocalorie\nenter 5 for watt hour\nenter 6 for electron volt\n");
printf("\nEnter your choice:::1-6\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*3600000;
printf("\nThe value is %lf joule",val);
break;
case 2:
val=cur*3600;
printf("\nThe value is %lf kilo joule",val);
break;
case 3:
val=cur*860421;
printf("\nThe value is %lf gram calorie",val);
break;
case 4:
val=cur*860.421;
printf("\nThe value is %lf kilocalorie",val);
break;
case 5:
val=cur*1000;
printf("\nThe value is %lf watt hour",val);
break;
case 6:
val=cur*2.247;
printf("\nThe value is %lfe+25 electron volt",val);
break;
default:
printf("\nWrong choice\n");
}
break;

case 7:
printf("Enter the blank value for conversion\n____ electronvolt\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for joule\nenter 2 for kilojoule\nenter 3 for gram calorie\nenter 4 for kilocalorie\nenter 5 for watt hour\nenter 6 for kilowatt hour\n");
printf("\nEnter your choice:::1-6\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*1.6022;
printf("\nThe value is %lfe-19 joule",val);
break;
case 2:
val=cur*1.6022;
printf("\nThe value is %lfe-22 kilo joule",val);
break;
case 3:
val=cur*3.8293;
printf("\nThe value is %lfe-20 gram calorie",val);
break;
case 4:
val=cur*3.8293;
printf("\nThe value is %lfe-23 kilocalorie",val);
break;
case 5:
val=cur*4.4505;
printf("\nThe value is %lfe-23 watt hour",val);
break;
case 6:
val=cur*4.4505;
printf("\nThe value is %lfe-26 kilowatt hour",val);
break;
default:
printf("\nWrong choice\n");
}
break;

default:
printf("\nWrong choice\n");
}
}




void weight()
{
printf("\nWhat type of weight you want to convert....????\n");
printf("\nenter 1 for tonne\nenter 2 for kilogram\nenter 3 for gram\nenter 4 for pound\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chh);
switch(chh)
{
case 1:
printf("Enter the blank value for conversion\n____ tonne\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for kilogram\nenter 2 for gram\nenter 3 for pound\n");
printf("\nEnter your choice:::1-3\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*1000;
printf("\nThe value is %lf kilogram",val);
break;
case 2:
val=cur*1000000;
printf("\nThe value is %lf gram",val);
break;
case 3:
val=cur*2204.62;
printf("\nThe value is %lf pound",val);
break;
default:
printf("\nWrong choice\n");
}
break;

case 2:
printf("Enter the blank value for conversion\n____ kilogram\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for tonne\nenter 2 for gram\nenter 3 for pound\n");
printf("\nEnter your choice:::1-3\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*0.001;
printf("\nThe value is %lf tonne",val);
break;
case 2:
val=cur*1000;
printf("\nThe value is %lf gram",val);
break;
case 3:
val=cur*2.20462;
printf("\nThe value is %lf pound",val);
break;
default:
printf("\nWrong choice\n");
}
break;



case 3:
printf("Enter the blank value for conversion\n____ gram\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for tonne\nenter 2 for kilogram\nenter 3 for pound\n");
printf("\nEnter your choice:::1-3\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur/1000000;
printf("\nThe value is %lf tonne",val);
break;
case 2:
val=cur*0.001;
printf("\nThe value is %lf kilogram",val);
break;
case 3:
val=cur*0.00220462;
printf("\nThe value is %lf pound",val);
break;
default:
printf("\nWrong choice\n");
}
break;
case 4:
printf("Enter the blank value for conversion\n____ pound\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for tonne\nenter 2 for kilogram\nenter 3 for gram\n");
printf("\nEnter your choice:::1-3\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*0.000453592;
printf("\nThe value is %lf tonne",val);
break;
case 2:
val=cur*0.453592;
printf("\nThe value is %lf kilogram",val);
break;
case 3:
val=cur*453.592;
printf("\nThe value is %lf gram",val);
break;
default:
printf("\nWrong choice\n");
}
break;
default:
printf("\nWrong choice\n");
}
}






void metric()
{
printf("\nWhat type of length you want to convert....????\n");
printf("\nenter 1 for US kilometre\nenter 2 for metre\nenter 3 for centimetre\nenter 4 for inch\nenter 5 for foot\n");
printf("\nEnter your choice:::1-5\n");
scanf("%d",&chh);
switch(chh)
{
case 1:
printf("Enter the blank value for conversion\n____ kilometre\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for metre\nenter 2 for centimetre\nenter 3 for inch\nenter 4 for foot");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*1000;
printf("\nThe value is %lf metre",val);
break;
case 2:
val=cur*100000;
printf("\nThe value is %lf centimetre",val);
break;
case 3:
val=cur*39370.1;
printf("\nThe value is %lf inch ",val);
break;
case 4:
val=cur*3280.84;
printf("\nThe value is %lf foot",val);
break;
default:
printf("\nWrong choice\n");
}
break;

case 2:
printf("Enter the blank value for conversion\n____ metre\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for kilometre\nenter 2 for centimetre\nenter 3 for inch\nenter 4 for foot");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*0.001;
printf("\nThe value is %lf kilometres",val);
break;
case 2:
val=cur*100;
printf("\nThe value is %lf centimetre",val);
break;
case 3:
val=cur*39.3701;
printf("\nThe value is %lf inch",val);
break;
case 4:
val=cur*3.28084;
printf("\nThe value is %lf foot",val);
break;
default:
printf("\nWrong choice\n");
}
break;



case 3:
printf("Enter the blank value for conversion\n____ centi metre\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for kilometre\nenter 2 for US metre\nenter 3 for inch\nenter 4 for foot\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur/100000;
printf("\nThe value is %lf kilometre",val);
break;
case 2:
val=cur*0.01;
printf("\nThe value is %lf metre",val);
break;
case 3:
val=cur*0.393701;
printf("\nThe value is %lf inch",val);
break;
case 4:
val=cur*0.0328084;
printf("\nThe value is %lf foot",val);
break;
default:
printf("\nWrong choice\n");
}
break;
case 4:
printf("Enter the blank value for conversion\n____ inch\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for kilometre\nenter 2 for metre\nenter 3 for centi metre\nenter 4 for foot\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=(cur*2.54)/100000;
printf("\nThe value is %lf kilometre",val);
break;
case 2:
val=cur*0.0254;
printf("\nThe value is %lf metre",val);
break;
case 3:
val=cur*2.54;
printf("\nThe value is %lf centi metre",val);
break;
case 4:
val=cur*0.08333333;
printf("\nThe value is %lf foot",val);
break;
default:
printf("\nWrong choice\n");
}
break;


case 5:
printf("Enter the blank value for conversion\n____ foot\n");
scanf("%lf",&cur);

printf("\nIn what you want to convert....????\n");
printf("\nenter 1 for kilometres\nenter 2 for metres\nenter 3 for centi metre\nenter 4 for inch\n");
printf("\nEnter your choice:::1-4\n");
scanf("%d",&chhh);

switch(chhh)
{
case 1:
val=cur*0.0003048;
printf("\nThe value is %lf kilometre",val);
break;
case 2:
val=cur*0.3048;
printf("\nThe value is %lf metre",val);
break;
case 3:
val=cur*30.48;
printf("\nThe value is %lf centimetre",val);
break;
case 4:
val=cur*12;
printf("\nThe value is %lf inch",val);
break;

default:
printf("\nWrong choice\n");
}
break;
default:
printf("\nWrong choice\n");
}
}

