#include <stdio.h>
#include <colors.h>

#define true 1
#define false 0

int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
char *months[]={
	" ",
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

int input_year(){
	int year;
	printf("Enter the year (Example : 2002) : ");
	scanf("%d",&year);
	return year;
}

int leap_year(int year){
	if(year%4==false && year%100!=false || year%400==false){
		days_in_month[2]=29;
		return true;
	}
	else{
		days_in_month[2]=28;
		return false;
	}
}

int day_code(int year){
	int daycode;
	int d1,d2,d3;

	d1=(year-1)/4.0;
	d2=(year-1)/100;
	d3=(year-1)/400;
	daycode=(year+d1-d2+d3)%7;
	return daycode;
}

void calender(int year,int daycode){
	int month,day;
	for(month=1;month<=12;month++){
		textcolor("BLUE");
		printf("\n\n\t\t\t\t%s",months[month]);
		textcolor("AQUA");
		printf("\n\n\t\tSun  Mon  Tue  Wed  Thu  Fri  Sat\n\t\t");
		for(day=1;day<=1+daycode*5;day++){
			printf(" ");
		}
		for(day=1;day<=days_in_month[month];day++){
			textcolor("YELLOW");
			printf("%2d  ",day);
			if((day+daycode)%7>0)
				printf(" ");
			else
				printf("\n\t\t ");
		}
		daycode=(daycode+days_in_month[month])%7;
	}
}

int main(){
	int year,daycode,leapyear;
	year=input_year();
	daycode=day_code(year);
	leap_year(year);
	calender(year,daycode);
	printf("\n");
	textcolor("WHITE");
}
