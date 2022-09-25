Q 1 print hello
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    printf("Hello, World! \n");
    printf("%s",s);   
    return 0;
}
Q2 playing with character
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

   char c;
   scanf("%c",&c);
   char str[50];
   scanf("%s \n",str);
   printf("%c \n",c);
   printf("%s \n",str);
   char sen[200];
    scanf("%[^\n]s",sen);
    printf("%s",sen);
   
   
   
   
    return 0;
}
Q3 sum and difference of two number 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    printf("%d %d \n",a+b,a-b);
    printf("%0.1f %0.1f\n",c+d,c-d);
    
    
    return 0;
}
Q4function 
#include <stdio.h>
int max_of_four(int a,int b,int c,int d) 
{
int r1,r2;
return (r1=a>b?a:b)>(r2=c>d?c:d)?r1:r2;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
Q5conditional statement
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n; 
    scanf("%d",&n);
    if (n == 1) {
        printf("one\n");
    } else if (n == 2) {
        printf("two\n");
    } else if (n == 3) {
        printf("three\n");
    } else if (n == 4) {
        printf("four\n");
    } else if (n == 5) {
        printf("five\n");
    } else if (n == 6) {
        printf("six\n");
    } else if (n == 7) {
        printf("seven\n");
    } else if (n == 8) {
        printf("eight\n");
    } else if (n == 9) {
        printf("nine\n");
    } else {
        printf("Greater than 9\n");
    }
     
    
    return 0;
}
Q6 poinetrs 
#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) {
    *a=*a+*b;
   *b=abs(*a -2*(*b));     
}


int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
Q7 for loop
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  for(int i=a;i<=b;i++){
      if(i>=1&&9>=i){
          if(i==1){
             printf("one \n");
          }
          else if(i==2){
             printf("two\n");
          }
          else if(i==3){
             printf("three \n");
          }
          else if(i==4){
             printf("four \n");
          }
          else if(i==5){
             printf("five\n");
          }
          else if(i==6){
             printf("six\n");
          }
          else if(i==7){
             printf("seven\n");
          }
          else if(i==8){
             printf("eight\n");
          }
          else {
             printf("nine\n");
          }
      }else{
          if(i%2==0){
              printf("even \n");
          }
          else {
          printf("odd\n");
          }
      }
  }
    return 0;
}

Q8sum of five digit num
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int r,sum=0;
    
    while(n!=0){
        r=n%10;
        n=n/10;
        sum+=r;
    }
    printf("%d",sum);
    return 0;
}
Q91 D array
#include <stdio.h>
#include <stdlib.h>

int main()
{
  
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
         sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
  



