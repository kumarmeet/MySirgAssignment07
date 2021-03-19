#include <stdio.h>
#include <stdlib.h>

int main()
{
//    star_pattern01();
//    star_pattern02();
//    star_pattern03();
//    star_pattern04();
//    star_pattern05();
//    star_pattern06();
    return 0;
}

void star_diamond_pattern()
{
  int i, j;

    for(i = 4; i >= 1; i--)
    {
//        k++;
        for(j = 1; j <= 8 - i; j++)
        {
//            if(j >= i && j <= k)
                if(j >= i && j <= i + j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for(i = 1; i <= 4; i++)
    {
      // for(j = 1; j <= 7; j++)
        for(j = 1; j <= 8 - i; j++)
        {
          // if(j >= i && j <= 8 - i)
            if(j >= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return;
}

void star_pattern07()
{
  //below comment line works also with k variable
  int i, j;

    for(i = 4; i >= 1; i--)
    {
        // k++;
        for(j = 1; j <= 8 - i; j++)
        // for(j = 1; j <= 7; j++)
        {
            // if(j >= i && j <= k)
               if(j >= i && j <= i + j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
  return;
}

void star_pattern06()
{
  //below comment line works also
    int i, j;

    for(i = 1; i <= 4; i++)
    {
      // for(j = 1; j <= 7; j++)
        for(j = 1; j <= 8 - i; j++)
        {
          // if(j >= i && j <= 8 - i)
            if(j >= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}

void star_pattern05()
{
    int i, j;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 4; j++)
        {
          if(j <= i)
            printf("%d", j);
          else
            printf(" ");
        }
        printf("\n");
    }
}

void star_pattern04()
{
    int i, j;

    for(i = 4; i >= 1; i--)
    {
        for(j = 1; j <= 4; j++)
        {
          if(j >= i)
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
    }
}

void star_pattern03()
{
    int i, j;

    for(i = 4; i >= 1; i--)
    {
        for(j = 1; j <= 4; j++)
        {
          if(j <= i)
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
    }
}

void star_pattern02()
{
    int i, j;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 4; j++)
        {
          if(j >= i)
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
    }
}

void star_pattern01()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
          if(j <= i)
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
    }
}
