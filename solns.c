/* Enter your solutions in this file */
#include <stdio.h>


 int max(int a[], int s){

        int maximum = a[0];
        for(int i = 1; i < s; i++)
        {
            if(maximum < a[i])
                maximum = a[i];
        }

        return maximum;
    }


int min(int a[], int s){

    int  mini = a[0];

    for(int i = 1; i < s; i++)
    {
        if(mini > a[i])
            mini = a[i];
    }
    
    return mini;
}

float average(int a[], int s)
{
   
    int sum = 0;

    for(int i = 0; i < s; i++)
    {
        sum += a[i];
    }

    return (float)(sum)/s;
}



int mode(int a[], int s)
{
    int max = a[0], ans;

  for(int i = 0; i < s; i++)
  {
      if(max < a[i])
        max = a[i];
  }


  int size = max + 1;
  int count[size];
  
  for(int i = 0; i < size; i++)
  {
      count[i] = 0;
  }

  for(int i = 0; i < s; i++)
    count[a[i]]++;

   max = count[0];

    for(int i = 1; i < size; i++)
    {
        if(max < count[i])
            {
                max = count[i];
                ans = i;
            }
    }
  
    return ans;

}



int factors(int num, int a[])
{
  int c = 0;
  int primes[num] ;
 
  for(int i = 0; i < num; i++)
  {
      primes[i] = 0;
  }

 int i = 2;
while(i <= num)
{
  while(num % i == 0)
  {
      num = num / i;
      primes[c] = i;
       c++;
  }

   if(i == 2)
        i++;

    else
    {
        i++;
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
                i++;
        }
    }
  
}


for(int i = 0; i < c; i++)
{
    a[i] = primes[i];
}

return c;
}

