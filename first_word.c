#include <unistd.h>
int main(int ac, char **argv)
{
    int i;

    i = 0;
    if (ac == 2)
    {
        while(argv[1][i] == 32 || argv[1][i] == '\t')
            i++;
        while(argv[1][i])
        {
            write(1,&argv[1][i],1);
            if(argv[1][i] == 32 || argv[1][i] == '\t')
                return(0);
            i++;
        } 
    }
}


"  lorem,ipsum caca "



