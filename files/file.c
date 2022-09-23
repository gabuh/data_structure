#include<stdio.h>
#include<stdlib.h>
struct Students{
  int idStudent;
  char name[100];
};

// void addStudent();



int main(){
  FILE *myFile;
int firstTime=0;
struct Students student;



myFile = fopen("files_T.csv","a+");
  myFile==NULL?firstTime++:printf("\ndata file found\n");;
  if(myFile==NULL){
   myFile = fopen("files_T.csv","w");
   fclose(myFile);
   myFile = fopen("files_T.csv","a+");
  }
   if(firstTime==1){
   fprintf(myFile,"Name, Student ID\n");
   }
   printf("%d",firstTime);
  printf("Please type  name:");
  scanf("%s",student.name);  
  student.idStudent=rand()%100;
    
  fprintf(myFile,"%s, %d\n",student.name,student.idStudent);

  fclose(myFile);
  
  return 0;
}


// void addStudent(){
//   printf("Please type  name:");
//   scanf("%s",student.name);  
//   student.idStudent=buff;
//   buff++;
// }