#include<stdio.h>
#include<stdlib.h>
struct Stack
{
    int size;
    int top;
    int *S;
};


void create(struct Stack *st)
{
    printf("Enter size ");
    scanf("%d",&st->size);
    st->top=-1; 
    st->S=(int *)malloc(st->size*sizeof(int));
}


void push(struct Stack *st,int a)
{
    int x=0;
    if (st->top==st->size-1)
    {
        printf("\nStack is overflow");
    }

    else
    {
        st->top++;
        x=st->S[st->top]=a;
    }   
    
}


void display(struct Stack st)
{
    for (int i = st.top; i >=0 ; i-- )
    {
        printf("\n%d",st.S[i]);
    }

    
    
}


void pop(struct Stack *st)
{
    int b=0;
    if (st->top==-1)
    {
        printf("\nStack is underflow ");
        
    }
    else
    {
       b=  st->S[st->top--];
    }
    
}


int peek(struct Stack *st,int position)
{
    int x=0;
    if (st->top-position+1 < 0)
    {
        printf("\nInvalid try again");
    }
    
    else
    {
        x=(st->S[st->top-position+1]);
        return x;
    }
}



int isEmpty(struct Stack *st)
{
    if (st->top==-1)
    {
        printf("\nStack is empty ");
    }
    else printf("\nStack is not empty you can push the item ");
    
}

int isFull(struct Stack *st)
{
    if (st->top == st->size-1)
    {
        printf("\nStack is full");
    }
    else printf("\nStack is not full you can push the item ");

    
}


void stackTop(struct Stack *st)
{
    int x;
    printf("\nTop element in the stack is : %d",st->S[st->top]);
}



int main()
{
    struct Stack st;
    
    int n,x;
    create(&st);


    // Push
    for (int i = 0; i < st.size; i++)
    {
        printf("\nEnter your number :");
        scanf("%d",&x);
        push(&st,x);
    }
    


    // Pop
    // printf("\nHow many numbers do you want ot pop ? ");
    // scanf("%d",&n);

    // for (int i = 0; i < n; i++)
    // {
    //     pop(&st);
    // }



    // //peek
    // int d;
    // printf("\nEnter at which position you want to find value ");
    // scanf("%d",&d);

    // printf("\nNumber at position %d is :- %d ", d,peek(&st,d));



    // isEmpty
    // isEmpty(&st);
    
    // isFull(&st);



    stackTop(&st);
    display(st);
 
}

