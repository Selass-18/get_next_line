#include <stdio.h>
void ft_sounter(void){
    static int counter ;
    counter++;
    printf("%d\n", counter);
}
int main (){
    ft_sounter();
}