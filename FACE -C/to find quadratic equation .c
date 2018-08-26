#include<stdio.h>
#include<math.h>
 
int main(){
  float a,b,c;
  float d,root1,root2;  
  scanf("%f%f%f",&a,&b,&c);
   
  d = b * b - 4 * a * c;
  
  if(d < 0)
  {
    printf("root1 = %.2f + %.2fi  root2 = %.2f + %.2fi",-b/(2*a),sqrt(-d)/(2*a),-b/(2*a),-sqrt(-d)/(2*a));
  
    return 0; 
  }
  else if(d==0){
 
   root1 = -b /(2* a);
   printf("root1 = %.2f  root2 = %.2f",root1,root1);
 
   return 0;
  }
  else{
  
   root1 = ( -b + sqrt(d)) / (2* a);
   root2 = ( -b - sqrt(d)) / (2* a);
   printf("root1 = %.2f  root2 = %.2f",root1,root2);
  }
 
  return 0;
}
