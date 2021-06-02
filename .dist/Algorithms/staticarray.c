#include <stdio.h>

//storing a list of numbers in an array
int main(){
    int numOfNumbers;
    int numArray[1000];
    int i;
     
    scanf("%d", &numOfNumbers);

    for (i = 0; i < numOfNumbers; i++){
        scanf("%d", &numArray[i]);
    }
}