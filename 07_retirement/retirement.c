#include<stdio.h>
#include<stdlib.h>
typedef struct _retire_info
{
  int months;
  double contribution;
  double rate_of_return;
} retire_info ;


double balance(double bal,retire_info  stat)
{

  bal = bal*stat.rate_of_return + bal;
  bal = bal + stat.contribution;
  return bal;
}

void print (int months,double bal)
{
  printf("Age %3d month %2d you have $%.2lf\n", months / 12, months % 12, bal);
  return ;

}

void retire( int startAge, double initial, retire_info working, retire_info retired)
{
  double b = initial;
  int t_month= startAge;
  for (int i=0; i < working.months ;i++)
    {
      print(t_month,b);
      b =  balance(b, working);
      t_month +=1;
    }
  for (int j=0; j < retired.months ;j++)
    {
      print(t_month,b);
      b =  balance(b, retired);
      t_month +=1;
          
  
}
  return ;
}

int main ()
{
  retire_info working;
  working.months = 489;
  working.contribution =1000;
  working.rate_of_return = 0.045/12;

  retire_info retired;
  retired.months = 384;
  retired.contribution =-4000;
  retired.rate_of_return = 0.01/12;

  retire(327,21345,working,retired);
  return 0;
}



  
