#include<stdio.h>

int main()
{

 int state;

 state = 1;
 int i=0;

 char input[1000]="aab";
 scanf("%s",input);

 char b;

 while((b = input[i++]) != '\0')
 {
     //printf("state = %d, char = %c\n",state,b);
     switch(state)
     {

     case 0: //dead state
        input[i+1]='\0';
        break;

     case 1:

        if(b=='a')
            state =2;
        else if(b=='b')
            state =5;
        break;


     case 2:
        if(b=='a')
            state =3;
        else if(b=='b')
            state =8;
        break;


     case 3:
        if(b=='a')
            state =3;
        else if(b=='b')
            state =4;
        break;


     case 4:
        if(b=='a')
            state =0;
        else if(b=='b')
            state =0;
        break;


     case 5:
        if(b=='a')
            state =6;
        else if(b=='b')
            state =7;
        break;



     case 6:
        if(b=='a')
            state =0;
        else if(b=='b')
            state =0;
        break;



     case 7:
        if(b=='a')
            state =6;
        else if(b=='b')
            state =7;
        break;


     case 8:
        if(b=='a')
            state = 0;
        else if(b=='b')
            state = 9;
        break;


     case 9:
        if(b=='a')
            state =0;
        else if(b=='b')
            state =0;
        break;


     }
 }

 //printf("state = %d, pos = %d\n",state,i);
 if(state == 0)
    printf("Not in language");
 else if(state == 4 || state == 5 || state == 6 ||state == 8 || state == 9)
    printf("Accepted!");
 else
    printf("Not in language");

 return 0;

}
