#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void ft_print_alphabet(){
    char c = 'a';
    while(c<='z'){ 
        ft_putchar(c);
        c++;
    }
    write(1,"\n",1);
}

int main(){
    ft_print_alphabet();
    return 0;
}