#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int compare(char you,char computer)
{
  if(you==computer)
      {printf("Tie the gAME");
     return 0;
    }
  else  if(you =='s' && computer=='p')
{  printf("YOU won the game");
     return -1;
}
   else if(you=='p' && computer=='s')
    {printf("you won the gAME");
     return 1;
    }
   else if(you=='s' && computer=='z')
    {printf("you won the gAME");
     return 1;
    }
    else if(you=='z' && computer=='s')
    {printf("you lost the gAME");
     return -1;
    }
    
    else if(you=='p' && computer=='z')
    {printf("you lost the gAME");
     return -1;
    }
    else if(you=='z' && computer=='p')
    {printf("you won the gAME");
     return 1;
    }
    else if(you=='p' && computer=='z')
    {printf("you won the gAME");
     return 1;
    }
    else 
     {
      printf("your choice is invalid");
     }

}
int main()
{  int n;
  char you; char computer;
  printf("ENTER YOUR CHOICE S OR P OR Z \n");
  scanf("%c",&you);
  srand(time(NULL));
   n=rand()%100;
   if(n<33)
   computer='s';
   else if(n>=33 && n<50)
   computer='p';
   else if(n>=50 && n<=100)
   computer='z';
   compare(you,computer);
   return 0;
}


