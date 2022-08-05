#include<stdio.h>
#define TAM 5


struct stack{
    int stack[TAM];
};
struct stack valor(struct stack s){
    for(int i=0;i<TAM;++i){
        s.stack[i]='\0';
    }
    return s;
};

// -------------------------------------------------------------
int is_empty(int stack[]){
    if(stack[0]=='\0'){
        return 0;
    }else{
        return -1;
    }
}
// ------------------------------------------------------------------
int size(int stack[]){
    int count=0;
    if(is_empty(stack)==0){
        return 0;
    }else{
        for(int i=0; stack[i]!='\0';i++){
            count++;
        }
    }
    
    return count;
}
// --------------------------------------------------------------------
int push(int stack[],int arg){
    if(size(stack)>=TAM){
        printf("\nAlready full\n");
        return 0;
    }else{
        stack[size(stack)]=arg;
    return -1;
    }

}
//-------------------------------------------------------------------------
int pop(int stack[]){
    int element;
    if(is_empty(stack)==0){
        printf("\nStack is empty\n");
    }else{
        element=stack[size(stack)-1];
        stack[size(stack)-1]='\0';
        return element;
    }
}
//------------------------------------------------------------------------------
int peek(int stack[]){
    return stack[size(stack)-1];
}

//---------------------------------------------------------------------------------------------------
int main(){
    int op;
    struct stack fire;
    fire=valor(fire);


    printf("%d ",is_empty(fire.stack));
    push(fire.stack,1);
    push(fire.stack,6);
    push(fire.stack,4);
    pop(fire.stack);
    printf("%d ",is_empty(fire.stack));
    // printf("%d ",pop(fire.stack));
    printf("%d ",size(fire.stack));
    printf("%d ",peek(fire.stack));

    return 0;
}

/* Output 

> 0 -1 2 6

*/