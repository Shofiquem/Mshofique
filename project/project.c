#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct flightRec_struct
{
char flightNum[5];
char originAirport[5];
char destAirport[7];
int timeStamp;

}
FlightRec;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
FlightRec flightRec;
FILE* fp = 0;
int lineNum =0;
struct tm* tmPtr =0;
int count =0;
int i = 0;
int j = 0;
char currCode [5];
char nextCode [5];

fp = fopen("C:/Users/mohammed/Desktop/acars.bin", "rb");
if (!fp)
{
printf("data not found.\n");
}
else
{
while (!feof(fp))
{
fread(&flightRec, sizeof(FlightRec), 1, fp);
 lineNum++;

}
FlightRec *record;
record = (FlightRec*)malloc(lineNum);
while (!feof(fp))
{
fread(&flightRec, sizeof(FlightRec), 1, fp);
//record[i].flightNum = flightRec.flightNum;
//record[i].originAirport = flightRec.originAirport;
//record[i].destAirport = flightRec.destAirport;
//record[i].timeStamp = flightRec.timeStamp;
}
printf ( "\nSorted by name\n") ;
fclose (fp);
qsort ( flightRec,lineNum, sizeof ( FlightRec ), compare ) ;
fpout = fopen("output.txt", "w");
for (j = 0; j<i; j++)

{
tmPtr = localtime ( &FlightRec[j].date);
fprintf("%s, %s, %s, %d\n", flightRec.flightNum, flightRec.originAirport, flightRec.destAirport, flightRec.timeStamp);
}
count =0;
fprintf(fpout, "counts\n");
strcpy(currCode, FlightRec[0].destAirport);
for (j =1; j<i; j++)
{
    strcpy(nextCode, FlightRec[j].destAirport);
    if (strcmp(nextCode, currCode)==0){
        count++;
    }
    else {
        fprintf(fpout, "%s %d\n", currCode, count+1);
        strcpy(currCode, nextCode);
        count==0;
    }
    }
}
fclose(fpout);
return 0;
}
