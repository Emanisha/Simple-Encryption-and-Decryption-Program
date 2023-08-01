#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int min, int max) {
    static int initialized = 0;
    if (!initialized) {
        srand(time(NULL));
        initialized = 1;
    }

    int num = rand() % (max - min + 1) + min;
    return num;
}
int circle(int A,int B,int data[]){
int d=0;
for(int i=0; i<A; i++){
if(data[i]==B){
    return d;

}
d++;

}

}

int encryption (){
char Endata[1000];
char SAVE[1000];
int KEY[1000];
printf("*****NOTE*****\n****For the SPACE  use DOT(.) Key****\n");
printf("Enter Data  \n");
scanf("%s",&Endata);
FILE* Tdata;
FILE* TKEY;
Tdata=fopen("encryption.txt","w");
TKEY=fopen("KEY","w");


int Ld=strlen(Endata);
    int minRange=0,maxRange=(Ld-1);
    int numOfNumbers = maxRange - minRange + 1;
    int *numbers = malloc(numOfNumbers * sizeof(int));
    int i, randomNumber;

    // Initialize the numbers array
    for (i = 0; i < numOfNumbers; i++) {
        numbers[i] = minRange + i;
    }

    // Generate and print random numbers
    for (i = 0; i < numOfNumbers; i++) {
        int randomIndex = generateRandomNumber(i, numOfNumbers - 1);
        int temp = numbers[i];
        numbers[i] = numbers[randomIndex];
        numbers[randomIndex] = temp;

        randomNumber = numbers[i];
        SAVE[i]=Endata[randomNumber];
        KEY[i]=randomNumber;
        fprintf(TKEY, "%d\n",randomNumber );


    }

    free(numbers);
    fprintf(Tdata,SAVE);
  printf("GO TO YOUR FOLDER AND CHECK THE ENCRYPTION FILE!\n");
     fclose(TKEY);
     fclose(Tdata);

}

void dencryption() {
    FILE* Tdata;
    FILE* TKEY;
    int num;
    int n = 0;
    int data[100];
    char Rdata[100];
    TKEY = fopen("KEY", "rb");
    Tdata = fopen("encryption.txt", "r");

  if (Tdata == NULL) {
        printf("NOT FOUNTD ENCRYPTION FILE n");
        return 1;
    }
    else if(TKEY == NULL ){
      printf("NOT FOUNTD KEY\n");
    return 1;

    }
    else{
    while (fread(&num, sizeof(int), 1, TKEY) == 1) {
        data[n] = num;
        n++;
    }

    // Read the encrypted message
    while (fgets(Rdata, sizeof(Rdata), Tdata)) {
    }

    // Decrypt and print the message
    for (int i = 0; i < n; i++) {
        int index = circle(n, i, data);
        if (index != -1) {
            printf("%c", Rdata[index]);
        }
    }

    fclose(TKEY);
    fclose(Tdata);
}
}

    int main(){
int save;
printf("___________________Press 1 if you want to encrypt and press any other key if you want to decrypt________________________ \n");
scanf("%d",&save);
if(save==1){
encryption();
}
else{
dencryption();
}


    return 0;
    }

