struct date
{
  int d,m,y;
};
struct date input();
void validate(struct date);
void print(struct date);
void main()
{
   struct date d1;
   clrscr();
   d1=input();
   validate(d1);
   getch();
}

struct date input()
{
   struct date d1;
   printf("\nenter the date month and year seperated by /");
   scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
   return(d1);
}

void validate(struct date d1)
{
   if((1<=d1.m && d1.m<=12) && (d1.d>=1 && d1.d<=31) && (1000<=d1.y && d1.y<=9999))
      {
	 if(d1.m==4 || d1.m==6 || d1.m==9 || d1.m==11)
	 {
	       if(d1.d<=30)
	       {
		  printf("\nvalid date");
		  print(d1);
	       }
	       else
		  printf("\ninvalid date");
	 }
	 else if(d1.m==1 || d1.m==3 || d1.m==5 || d1.m==7 || d1.m==8 || d1.m==10 || d1.m==12)
	 {
	      if(d1.d<=31)
	      {
		 printf("\nvalid date");
		 print(d1);
	      }
	      else
		 printf("\ninvalid date");
	 }
	 else if(d1.m==2)
	 {
	      if((d1.y%4==0 || d1.y%100==0) && (d1.y%400!=0))
	      {
		 if(d1.d<=29)
		 {
		    printf("\nvalid date");
		    print(d1);
		 }
		 else
		    printf("\ninvalid date");
	      }
	      else
	      {
		 if(d1.d<=28)
		 {
		    printf("\nvalid date");
		    print(d1);
		 }
		 else
		    printf("\ninvalid date");
	      }
	 }

      }
   else
      printf("\ninvalid date");
}

void print(struct date d1)
{
   int j, i;
   char month[12][10]={"Jan","Feb","March","April","May","June","July","Aug","Sept","Oct","Nov","Dec" };
   j=d1.m-1;
   for(i=0;i<=11;i++)
   {
      if (i==j)
	 printf("\n%s",month[i]);
   }
   printf(" %d, %d",d1.d,d1.y);
}
