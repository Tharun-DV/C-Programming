
#include<stdio.h>
int main()
{
    char expression[50];
    int x=0, i=0;
    printf("\nEnter the Expression: ");
    scanf("%s", expression);

 while(expression[i]!= '\0')
    {

     if(expression[i]=='{')
        {x++;}
     if(expression[i]=='(')
        {x++;}
     if(expression[i]=='[')
        {x++;}


     else if(expression[i]=='}')
        {   x--;
            if(x<0)
            break;
        }
      else if(expression[i]==')')
        {   x--;
            if(x<0)
            break;
        }
       else if(expression[i]==']')
        {   x--;
            if(x<0)
            break;
        }

    i++;
    }

    if(x==0)
    {
        printf("The Enterd Expression %s is balanced",expression);
    }

    else
    {
        printf("The Entred Expression %s is unbalanced ", expression);
    }
    return 0;
}


