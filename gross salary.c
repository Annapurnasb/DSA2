#include<stdio.h>
#include<stdlib.h>
main()
{
   int level,perk,job_no;
  float gs,ns,bs;
    printf("enter the value of bs,level");
    scanf("%d%d",&bs,&level);
    switch(level)
    {
        case 1:perk=1000+500;
        break ;
        case 2:perk=750+200;
        break;
        case 3:perk=500+100;
        break;
        case 4: perk=250;
        break;
        default:printf("invalid input\n");
        exit(0);
        }
        gs=bs+0.25*bs+perk;
        printf("gs=%f\n",gs);


{
    if(gs<=2000)

    ns=gs;
else if (gs>2000&&gs<=4000)
    ns=gs+0.03*gs;
else if (gs<4000&&gs<=5000)
ns=gs+0.05*gs;
 else if (gs>5000)
    ns=gs+0.08*gs;
    printf("ns=%f\n",ns);
}

}
