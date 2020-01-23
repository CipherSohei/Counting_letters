#include <stdio.h>

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
        case 'a':
            massive[1]++;
            break;

        case 'B':
        case 'b':
            massive[2]++;
            break;

        case 'C':
        case 'c':
            massive[3]++;
            break;

        case 'D':
        case 'd':
            massive[4]++;
            break;

        case 'E':
        case 'e':
            massive[5]++;
            break;

        case 'F':
        case 'f':
            massive[6]++;
            break;

        case 'G':
        case 'g':
            massive[7]++;
            break;

        case 'H':
        case 'h':
            massive[8]++;
            break;

        case 'I':
        case 'i':
            massive[9]++;
            break;

        case 'J':
        case 'j':
            massive[10]++;
            break;

        case 'K':
        case 'k':
            massive[11]++;
            break;

        case 'L':
        case 'l':
            massive[12]++;
            break;

        case 'M':
        case 'm':
            massive[13]++;
            break;

        case 'N':
        case 'n':
            massive[14]++;
            break;

        case 'O':
        case 'o':
            massive[15]++;
            break;

        case 'P':
        case 'p':
            massive[16]++;
            break;

        case 'Q':
        case 'q':
            massive[17]++;
            break;

        case 'R':
        case 'r':
            massive[18]++;
            break;

        case 'S':
        case 's':
            massive[19]++;
            break;

        case 'T':
        case 't':
            massive[20]++;
            break;

        case 'U':
        case 'u':
            massive[21]++;
            break;

        case 'V':
        case 'v':
            massive[22]++;
            break;

        case 'W':
        case 'w':
            massive[23]++;
            break;

        case 'X':
        case 'x':
            massive[24]++;
            break;

        case 'Y':
        case 'y':
            massive[25]++;
            break;

        case 'Z':
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
    scanf("%s", &filename);
    while((fp = fopen(filename, "r")) == NULL){
	printf("ERROR!\nRepeat:");
	scanf("%s", &filename);
    };

    do{
       symbol = getc(fp);
       if((('A' <= symbol)&&(symbol <= 'Z')) || (('a' <= symbol)&&(symbol <= 'z')))
           func(symbol);
    }while(symbol!=EOF);

    print();
    fclose(fp);
    return 0;
}
