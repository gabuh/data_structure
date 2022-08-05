#include <stdio.h>
#define TAM 5


struct queue{
    int queue[TAM];
};
struct queue valor(struct queue s){
    for(int i=0;i<TAM;++i){
        s.queue[i]='\0';
    }
    return s;
};

// --------------------------------------------------------------------

int is_empty(int queue[]){
    if(queue[0]=='\0'){
        return 0;
    }else{
        return -1;
    }
}

// --------------------------------------------------------------------

int size(int queue[]){
    int count=0;
    if(is_empty(queue)==0){
        return 0;
    }else{
        for(int i=0; queue[i]!='\0';++i){
            count++;
        }
    }
    if (count>=TAM){
        return TAM;
    }else{
    return count;
    }
}

// --------------------------------------------------------------------


int enqueue(int queue[],int element){
    if(size(queue)==TAM){
        printf("\nalready full\n");
        return 0;
    }else{
        queue[size(queue)]=element;
    
    }

}

// --------------------------------------------------------------------

int dequeue(int queue[]){
    int element,temp;
    if(is_empty(queue)==0){
        printf("It is empty");
    }else{
        element=queue[0];
        queue[0]='\0';
        for (int i=0;i<TAM-1;i++){
            temp=queue[i];
            queue[i]=queue[i+1];
            queue[i+1]=temp;
             
        }
    }
    return element;
}

// --------------------------------------------------------------------


int show(int queue[]){
    printf("\n");
    for (int i=0;i<TAM;i++){
    printf("%d ",queue[i]);
    }
    printf("\n");
}

// --------------------------------------------------------------------


int main(){
   struct queue fire;
   fire=valor(fire);
   
printf("%d ",is_empty(fire.queue));   
enqueue(fire.queue,20);
show(fire.queue);
printf("%d ",is_empty(fire.queue));   
enqueue(fire.queue,20);
enqueue(fire.queue,20);
enqueue(fire.queue,20);
enqueue(fire.queue,20);
enqueue(fire.queue,20);
show(fire.queue);
printf("%d ",is_empty(fire.queue));  
printf("\nSize: %d \n",size(fire.queue));
printf("dequeue: %d \n",dequeue(fire.queue));
printf("\nSize: %d \n",size(fire.queue));


show(fire.queue);



    return 0;
}
/*OUTPUT
0
20 0 0 0 0
-1
already full

20 20 20 20 20
-1
Size: 5
dequeue: 20

Size: 4

20 20 20 20 0

*/