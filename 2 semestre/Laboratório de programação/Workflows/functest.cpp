#include<stdio.h>
void func(int *a, int *b);
int main(){
int x = 2147483650;
int y = 5;
func(&x,&y);
printf("%i,%i",x,y);

}
void func(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}