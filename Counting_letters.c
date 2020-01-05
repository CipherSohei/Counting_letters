#include <stdio.h>
#include <string>
#include <conio.h>

int massive[27] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

//Print array:
void print(){
    int i;
    printf("--------------------------------\n");
    printf("Total: %d\n", massive[0]);
    for(i = 1; i < 27; i++){
        printf("%c: %d\n", 64+i, massive[i]);
    }
}

void func(char letter){
    massive[0]++;
    switch(letter){
        case 'A':
            massive[1]++;
            break;
        case 'a':
            massive[1]++;
            break;

        case 'B':
            massive[2]++;
            break;
        case 'b':
            massive[2]++;
            break;

        case 'C':
            massive[3]++;
            break;
        case 'c':
            massive[3]++;
            break;

        case 'D':
            massive[4]++;
            break;
        case 'd':
            massive[4]++;
            break;

        case 'E':
            massive[5]++;
            break;
        case 'e':
            massive[5]++;
            break;

        case 'F':
            massive[6]++;
            break;
        case 'f':
            massive[6]++;
            break;

        case 'G':
            massive[7]++;
            break;
        case 'g':
            massive[7]++;
            break;

        case 'H':
            massive[8]++;
            break;
        case 'h':
            massive[8]++;
            break;

        case 'I':
            massive[9]++;
            break;
        case 'i':
            massive[9]++;
            break;

        case 'J':
            massive[10]++;
            break;
        case 'j':
            massive[10]++;
            break;

        case 'K':
            massive[11]++;
            break;
        case 'k':
            massive[11]++;
            break;

        case 'L':
            massive[12]++;
            break;
        case 'l':
            massive[12]++;
            break;

        case 'M':
            massive[13]++;
            break;
        case 'm':
            massive[13]++;
            break;

        case 'N':
            massive[14]++;
            break;
        case 'n':
            massive[14]++;
            break;

        case 'O':
            massive[15]++;
            break;
        case 'o':
            massive[15]++;
            break;

        case 'P':
            massive[16]++;
            break;
        case 'p':
            massive[16]++;
            break;

        case 'Q':
            massive[17]++;
            break;
        case 'q':
            massive[17]++;
            break;

        case 'R':
            massive[18]++;
            break;
        case 'r':
            massive[18]++;
            break;

        case 'S':
            massive[19]++;
            break;
        case 's':
            massive[19]++;
            break;

        case 'T':
            massive[20]++;
            break;
        case 't':
            massive[20]++;
            break;

        case 'U':
            massive[21]++;
            break;
        case 'u':
            massive[21]++;
            break;

        case 'V':
            massive[22]++;
            break;
        case 'v':
            massive[22]++;
            break;

        case 'W':
            massive[23]++;
            break;
        case 'w':
            massive[23]++;
            break;

        case 'X':
            massive[24]++;
            break;
        case 'x':
            massive[24]++;
            break;

        case 'Y':
            massive[25]++;
            break;
        case 'y':
            massive[25]++;
            break;
            
        case 'Z':
            massive[26]++;
            break;
        case 'z':
            massive[26]++;
            break;
    }
}

int main(int argc, char* argv[])
{
    char symbol, filename[100];
    FILE *fp;

	printf("Input filename:");
    gets(filename);

    if((fp = fopen(filename, "r")) == NULL){
        printf("ERROR!\n");
        getch();
        exit(1);
    }

    do{
       symbol = getc(fp);
       if((('A' <= symbol)&&(symbol <= 'Z')) || (('a' <= symbol)&&(symbol <= 'z')))
           func(symbol);
    }while(symbol!=EOF);

    print();
    fclose(fp);
    getch();
    return 0;
}

