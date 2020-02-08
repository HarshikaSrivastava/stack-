#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX_STACK  10
#define NIL -1

   typedef struct stacktype
   {
     int a[MAX_STACK];
     int top;
   }stack;

   void main()
   {
    int item,choice,n,x;
    stack s1;
    s1.top=NIL;
    void push(stack *,int);//function declaration for push operation
    int pop(stack *);//function declaration for pop operation
    int isoverflow(stack *);//function declaration for ovrflow functon
    int isunderflow(stack *);//function declaration for underflow function
    int peep(stack *);//function declaration for peep operation

   while(1)
   {
    clrscr();
    printf("1 for PUSH\n");
    printf("2 for POP\n");
    printf("3 for PEEP\n");
    printf("4 for EXIT\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);

    switch(choice)
    {
     case 1:x=isoverflow(&s1);
	   if(x==1)
	   {
	    printf("OVERFLOW\n");

	   }
	   else
	   {
	    printf("item to be pushed\n");
	    scanf("%d",&item);
	    push(&s1,item);
	    printf("done\n");
	   }
	   break;

     case 2:x=isunderflow(&s1);
	   if(x==1)
	   {
	    printf("UNDERFLOW");

	   }
	   else
	   {
	    item=pop(&s1);
	    printf("poped item is %d",item);
	   }
	   break;

    case 3: x=isunderflow(&s1);
	   if(x==1)
	   {
	    printf("UNDERFLOW");
	   }
	   else
	   {
	    item=peep(&s1);
	    printf("poped item is %d",item);
	   }
	   break;

    case 4: exit(1);

     default:
	printf("error");
     }

	getch();
     }
     }

       int isoverflow(stack *p)//function definition for overflow
	{
	 if(p->top==MAX_STACK)
	 return 1;
	 else
	 return 0;
	}

      int isunderflow(stack *p)//function definition for underflow
	{
	 if(p->top==NIL)
	 return 1;
	 else
	 return 0;
	}

      void push(stack *p,int item)//function definition for push
	{
	 p->top=p->top+1;
	 p->a[p->top]=item;
	}

      int pop(stack *p)
	{
	 int item;
	 item=p->a[p->top];
	 p->top=p->top-1;
	 return item;
	}

      int peep(stack *p)
       {
	int item;
	item=p->a[p->top];
	return item;
       }
