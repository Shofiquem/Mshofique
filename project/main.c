#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct flightRec_struct
{
char flightNum[100];
char originAirport[100];
char destAirport[100];
char timeStamp[100];
} flightRec;
int main()
{
/*struct flightRec;
struct flightNum;
struct timeStamp;*/

flightRec data[100];
char pacman;
char weekday[4];
char month[4];
char day[3];
char time[9];
char year[5];
char temp[100];


FILE* fp =0;
int i = 0;

fp = fopen("C:/Users/Mohammed/Desktop/acars.bin", "rb");
if (!fp)
{

printf("***data cant be opened.\n");
return -1;
}
int j=0;
while (feof(fp))
{

fscanf(fp, "%s", data[j].flightNum);
fscanf(fp, "%s", data[j].originAirport);
fscanf(fp, "%s", data[j].destAirport);
fscanf(fp, "%s%c%s%c%s%c%s%c%s",weekday,&pacman,month,&pacman,day,&pacman,time,&pacman,year);
strcpy(temp,weekday);
strcat(temp, " ");
strcat(temp, month);
strcat(temp, " ");
strcat(temp, day);
strcat(temp, " ");
strcat(temp, time);
strcat(temp, " ");
strcat(temp, month);
strcat(temp, year);
strcpy(data[j].timeStamp,temp);
j++;
}
printf ( "Done reading data\n") ;
int k;
for(k=0; k<j; k++) printf ("%s %s %s %s", data[k].flightNum, data[k].originAirport, data[i].destAirport, data[k].timeStamp);

    /*

    printf ( "\nSorted by name\n") ;
    qsort ( ( void * ) flightRec, i - 1, sizeof ( typedef ), compareNames ) ;

        for ( j = 0 ; j < i ; j++)
    {
        printf ( "%s\t%d\n", testScores[j].name, testScores[j].score) ;
    }
    */
fclose ( fp ) ;

    printf ( "Program Done\n") ;
    return 0;
}
