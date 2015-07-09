#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* inputFile = NULL;

    char buffer[100];
    int counter = 0;
    int blank = 0;
    int comments = 0;
    int ints = 0;
    int longs = 0;
    int floats = 0;
    int doubles = 0;
    int chars = 0;
    int ifs = 0;
    int elses = 0;
    int fors = 0;
    int switchs = 0;
    int semicolons = 0;
    int structs = 0;
    int arrays = 0;
    int blocks = 0;


 printf("Opening file BLOWUP.C\n");

 inputFile = fopen ("BLOWUP.C", "r");
    if (inputFile == NULL){

        printf("*** data could not be opened.\n");

        return -1;
    }
        fscanf(inputFile, "%s", &buffer);
    while(!feof(inputFile)){

        counter++;

        fgets (buffer, 100, inputFile);
        if(strlen(buffer)== 1){
            blank++;
        }
        if(strstr(buffer,"//") != NULL || strstr(buffer, "*/") != NULL ){
            comments++;
        }
        if(strstr(buffer, "int")){
           ints++;

        }
        if(strstr(buffer, "long")){
            longs++;

            }
        if(strstr(buffer, "float")){
            floats++;

        }
        if(strstr(buffer, "double")){
            doubles++;
        }
        if(strstr(buffer, "char")){
            chars++;
        }
        if(strstr(buffer, "if")){
            ifs++;
        }
        if(strstr(buffer, "elses")){
            elses++;
        }
        if(strstr(buffer, "for")){
            fors++;
        }
        if(strstr(buffer, "switch")){
            switchs++;
        }
        if(strstr(buffer, "semicolon")){
            semicolons++;
        }
        if(strstr(buffer, "struct")){
            structs++;
        }
        if(strstr(buffer, "array")){
            arrays++;
        }
        if(strstr(buffer, "block")){
            blocks++;
        }
        //printf("%s\n", buffer);
    }
    fclose (inputFile);
    printf("number of total lines: %d\n", counter);

    printf("number of blank lines: %d percentage: %lf\n", blank, (double)blank/counter * 100);
    printf("number of comments: %d percentage: %lf\n", comments, (double)comments/counter * 100);
    printf("number of ints: %d percentage: %lf\n", ints, (double)ints/counter * 100);
    printf("numbers of longs: %d percentage: %lf\n", longs, (double)longs/counter * 100);
    printf("number of floats: %d percentage: %lf\n", floats, (double)floats/counter * 100);
    printf("number of doubles: %d percentage: %lf\n", doubles, (double)doubles/counter * 100);
    printf("number of chars: %d percentage: %lf\n", chars, (double)chars/counter * 100);
    printf("number of ifs: %d percentage: %lf\n", ifs, (double)ifs/counter * 100);
    printf("number of elses: %d percentage: %lf\n", elses, (double)elses/counter * 100);
    printf("number of fors: %d percentage: %lf\n", fors, (double) fors/counter * 100);
    printf("number of switchs: %d percentage: %lf\n", switchs, (double) switchs/counter * 100);
    printf("number of semicolons: %d percentage: %lf\n", semicolons, (double) semicolons/counter * 100);
    printf("number of structs: %d percentage: %lf\n", structs, (double) structs/counter * 100);
    printf("number of arrays: %d percentage: %lf\n", arrays, (double) arrays/counter * 100);
    printf("number of blocks: %d percentage: %lf\n", blocks, (double) blocks/counter * 100);

    return 0;
}
