int main(int argc, char *argv[]) {
   
   char c;
   int count=0;
   
   printf("���ڿ��� �Է��ϼ���:");

   while((c=getchar())!='\n'){
      /*scanf("%c",&c);*/
      if('0'<=c && c >='9'){
         count+=1;
      }
   }
   printf("the number of digits is %i",count);
   return 0;
}
 
