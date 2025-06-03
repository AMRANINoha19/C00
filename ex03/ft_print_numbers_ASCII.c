#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void ft_numbers(){
    char c = 48; 
    while(c<=57){
        ft_putchar(c);
        c++;
    }
    write(1,"\n",1); 
}

int main(){
    ft_numbers();
    return 0;
}