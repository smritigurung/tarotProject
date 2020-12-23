#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ROW 15
#define COL 80

void mainMenu();
void tarot();
void love();
void career();
void personality();
void goBackLove();
void goBackCareer();
void goBackPersonality();
void love1();
void love2();
void love3();
void career1();
void career2();
void career3();
void personality1();
void personality2();
void personality3();
void exitMessage();

int main(void){
    mainMenu(); // call mainMenu() function to start the reading
    return 0;
}

void mainMenu(){
    printf("\t\t\t");
    int asterisk = 1;
    while (asterisk <= COL + 1){
        printf("*"); // asterisk border for design
        asterisk++;
    }
    printf("\n");

    int row = 1;
    int actual_rows = 7;
    while (row <= actual_rows){
        if(row == 4){
            printf("%25s%55s%25s\n", "*", "WELCOME TO CS49C TAROT READING", "*");
        }
        else{
            printf("%25s%80s\n", "*", "*");
        }
        row++;
    }
    
    printf("\t\t\t");
    asterisk = 1;
    while (asterisk <= COL + 1){
        printf("*"); // asterisk border for design
        asterisk++;
    }
    printf("\n\n");
    
    printf("Press p or P to Play: \n");
    printf("Press any key to exit: \n");

    char userInput;
    scanf("%c", &userInput);
    if(userInput == 'p' || userInput == 'P'){
        tarot(); // call tarot() function for love, career and personality category
    }
    else{
        exitMessage(); // call exitMessage() function to print exit message
        exit(0);  // successful program termination
    }
}

void goBackLove(){
    printf("To do another love reading, press l or L\n");
    printf("To choose another tarot category, press t or T\n");
    printf("To exit the game, press any character\n");

    char userInput;
    // Space before %c removes any white space i.e. blanks, tabs, or newlines. So, after adding space before %c, we are only reading the char given
    scanf(" %c", &userInput);  // scanning the user input and storing it at the address of the variable 'userInput'
    if(userInput == 'l' || userInput == 'L'){ 
        love(); // call love() function to show love menu
    }
    else if(userInput == 't' || userInput == 'T'){ 
        tarot(); // call tarot() function to show tarot menu
    }
    else{
        exitMessage(); // call exitMessage() to print exit message
        exit(0);   // successful program termination
    }
}

void goBackCareer(){
    printf("To do another career reading, press c or C\n");
    printf("To choose another tarot category, press t or T\n");
    printf("To exit the game, press any character\n");

    char userInput;
    // Space before %c removes any white space i.e. blanks, tabs, or newlines. So, after adding space before %c, we are only reading the char given
    scanf(" %c", &userInput);   // scanning the user input and storing it at the address of the variable 'userInput'
    if(userInput == 'c' || userInput == 'C'){ 
        career(); // call career() function to show career menu
    }
    else if(userInput == 't' || userInput == 'T'){
        tarot();
    }
    else{
        exitMessage();
        exit(0);
    }
}

void goBackPersonality(){
    printf("To do another personality reading, press p or P\n");
    printf("To choose another tarot category, press t or T\n");
    printf("To exit the game, press any character\n");

    char userInput;
    // Space before %c removes any white space i.e. blanks, tabs, or newlines. So, after adding space before %c, we are only reading the char given
    scanf(" %c", &userInput);   // scanning the user input and storing it at the address of the variable 'userInput'
    if(userInput == 'p' || userInput == 'P'){ 
        personality(); // call personality() function to show personality menu
    }
    else if(userInput == 't' || userInput == 'T'){
        tarot();
    }
    else{
        exitMessage();  // call exitMessage() to print exit message
        exit(0);   // successful program termination
    }
}

void exitMessage(){
    printf("Thank you for playing! See you again!!\n\n");
}

void tarot(){
    printf("%67s\n\n", "TAROT READING");
    printf("%70s\n\n", "CHOOSE ANY ONE CARD");

    for(int row = 1; row <= ROW; row++){ // for horizontal draw
        printf("\t\t\t");
        for(int col = 1; col <= COL; col++){ // for vertical draw
            if(row == 1 || row == ROW){
                if(col == 20 || col == 46 || col == 72){
                    while ((col >= 20 && col < 26) || (col >= 46 && col < 52) || (col >= 72 && col < 81)){
                        col++;
                        printf(" ");
                    }
                }
                else{
                    printf("_");
                }
            }

            if(row == 2 || row == 3 || row == 4 || row == 12 || row == 13 || row == 14){
                if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                    printf("|");
                }
                else{
                    printf(" ");
                }
            }

            if(row >= 5 && row <= 11){
                if(row == 5){
                    if(col == 1 || col == 15 || col == 22 || col == 38 || col == 45 || col == 63){
                        printf("|");
                    }
                    else if(col == 6 || col == 9){
                        printf("%3s", "**");
                    }
                    else if(col == 23){
                        printf("___");
                    }
                    else if(col == 51 || col == 56){
                        printf("X");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 6){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if(col == 7 || col == 10 || col == 13){
                        printf("*");
                    }
                    else if(col == 30){
                        printf("|");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 7){
                    if(col == 1 || col == 19 || col == 26 || col == 39 || col == 46 || col == 64){
                        printf("|");
                    }
                    else if(col == 8 || col == 12){
                        printf("*");
                    }
                    else if(col == 27){
                        printf("------");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 8){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if(col == 9 || col == 11){
                        printf("*");
                    }
                    else if(col == 33){
                        printf("|");
                    }
                    else if(col == 56 || col == 63){
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 9){
                    if(col == 1 || col == 19 || col == 26 || col == 35 || col == 42 || col == 60){
                        printf("|");
                    }
                    else if(col == 10){
                        printf("*");
                    }
                    else if(col == 27){
                        printf("----------");
                    }
                    else if(col == 49 || col == 52){
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 10){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if(col == 37){
                        printf("|");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 11){
                    if(col == 1 || col == 19 || col == 26 || col == 34 || col == 41 || col == 59){
                        printf("|");
                    }
                    else if(col == 27){
                        printf("-----------");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    printf("%35s%26s%28s\n\n", "LOVE", "CAREER", "PERSONALITY");

    // Number Instructions for the Readings
    printf("%73s\n", "Press 1 for Love Reading");
    printf("%80s\n", "Press 2 for Career Path Reading");
    printf("%80s\n", "Press 3 for Personality Reading");
    printf("%64s\n\n", "Press 0 to exit");

    char userNum;
    // Space before %c removes any white space i.e. blanks, tabs, or newlines. So, after adding space before %c, we are only reading the char given
    scanf(" %c", &userNum);  // scanning the user input and storing it at the address of the variable 'userNum'
    if(userNum == '1'){
        love(); // call love() function
    }
    else if (userNum == '2'){
        career(); // call career() function
    }
    else if (userNum == '3'){
        personality(); // call personality() function
    }
    else if (userNum == '0'){
        exitMessage(); // call exitMessage() function to print exit message
        exit(0);   // successful program termination
    }
    else{
        printf("Invalid. Please press either 1, 2 or 3\n\n");  // Input validation
        tarot();  // call the tarot function and display the tarot cards page again
    }
}

void love(){
    printf("%67s\n\n", "LOVE READING");
    printf("%70s\n\n", "CHOOSE ANY ONE CARD");

    for(int row = 1; row <= ROW; row++){
        printf("\t\t\t");
        for(int col = 1; col <= COL; col++){
            if(row == 1 || row == ROW){
                if(col == 20 || col == 46 || col == 72){
                    while ((col >= 20 && col < 26) || (col >= 46 && col < 52) || (col >= 72 && col < 81)){
                        col++;
                        printf(" ");
                    }
                }
                else{
                    printf("_");
                }
            }

            if(row == 2 || row == 3 || row == 4 || row == 14){
                if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                    printf("|");
                }
                else{
                    printf(" ");
                }
            }

            // start drawing loves in cards
            if(row >= 5 && row <= 13){
                if(row == 5){
                    if(col == 1 || col == 15 || col == 22 || col == 36 || col == 43 || col == 57){
                        printf("|");
                    }
                    else if(col == 5 || col == 10 || col == 32 || col == 33 || col == 48 || col == 53){
                        printf("%3s", "**");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 6){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if(col == 4 || col == 9 || col == 11 || col == 16 || col == 36 || col == 39 || col == 42 || col == 55 || col == 60 || col == 62 || col == 67){
                        printf("*");
                    }
                    else if((col >= 5 && col <= 8) || (col >=12 && col <= 15)){
                        printf("^");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 7){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if((col >= 4 && col <= 16) || col == 37 || col == 41 || col == 55 || col == 61 || col == 67){
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 8){
                    if(col == 1 || col == 19 || col == 26 || col == 42 || col == 49 || col == 67){
                        printf("|");
                    }
                    else if(col == 5 || col == 15 || col == 37 || col == 54 || col == 64){
                        printf("*");
                    }
                    else if(col >= 6 && col <= 14){
                        printf("^");
                    }
                    else if(col == 29 || col == 31){
                        printf("**");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 9){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if((col >= 6 && col <= 14) || col == 28 || col == 31 || col == 34 || col == 57 || col == 65){
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 10){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if(col == 7 || col == 13 || col == 29 || col == 33 || col == 58 || col == 64){
                        printf("*");
                    }
                    else if(col >= 8 && col <= 12){
                        printf("^");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 11){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if((col >= 8 && col <= 12) || col == 31 || col == 59 || col == 63){
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 12){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if(col == 9 || col == 11 || col == 60 || col == 62){
                        printf("*");
                    }
                    else if(col == 10){
                        printf("^");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 13){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if(col == 10 || col == 61){
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    printf("%34s%25s%25s\n\n", "1", "2", "3");

    // Number Instructions for Love Reading
    printf("%62s\n", "Press 1 for 1");
    printf("%62s\n", "Press 2 for 2");
    printf("%62s\n", "Press 3 for 3");
    printf("%85s\n\n", "Press 4 to go back to the tarot page");

    char userNum;
    // Space before %c removes any white space i.e. blanks, tabs, or newlines. So, after adding space before %c, we are only reading the char given
    scanf(" %c", &userNum);  // scanning the user input and storing it at the address of the variable 'userNum'
    if (userNum == '1'){
        love1(); // call love1() function
    }
    else if (userNum == '2'){
        love2(); // call love2() function
    }
    else if (userNum == '3'){
        love3(); // call love3() function
    }
    else if (userNum == '4'){
        tarot(); // call tarot() function
    }
    else{
        printf("Invalid character. Please press either 1, 2, 3 or, 4\n\n");   // Input validation
        love();   // call the love function and display the love cards page again
    }
}

void love1(){
    for(int row = 1; row <= ROW - 1; row++){
        printf("\t\t\t");
        for(int col = 1; col <= COL; col++){
            if(row == 1 || row == ROW - 1){
                if (col >= 25 && col <= 50){
                    printf("_");
                }
                else {
                    printf(" ");
                }
            }

            if(row == 2 || row == 4 || row == 12 || row == 13){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else{
                    printf(" ");
                }
            }
            if (row == 3){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else if (col == 37){
                    printf("1");
                }
                else{
                    printf(" ");
                }
            }

            // start writing message for love1 in a card
            if(row >= 5 && row <= 11){
                if(row == 5){
                    if(col == 25 || col == 37){
                        printf("|");
                    }
                    else if(col == 30){
                        printf("Your person is");

                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 6){
                    if(col == 25 || col == 33){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("thinking about you");

                    }
                    else
                    {
                        printf(" ");
                    }

                }

                if(row == 7){
                    if(col == 25 || col == 33){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("all day and night.");

                    }
                    else
                    {
                        printf(" ");
                    }

                }

                if(row == 8){
                    if(col == 25 || col == 35){
                        printf("|");
                    }
                    else if(col == 30){
                        printf("Your person will");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 9){
                    if(col == 25 || col == 35){
                        printf("|");
                    }
                    else if(col == 30){
                        printf("reach out to you");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 10){
                    if(col == 25 || col == 35){
                        printf("|");
                    }
                    else if(col == 30){
                        printf("very soon with a");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 11){
                    if(col == 25 || col == 35){
                        printf("|");
                    }
                    else if(col == 30){
                        printf("true confession.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    goBackLove(); // call goBackLove() function
}

void love2(){
    for(int row = 1; row <= ROW - 1; row++){
        printf("\t\t\t");
        for(int col = 1; col <= COL; col++){
            if(row == 1 || row == ROW - 1){
                if (col >= 25 && col <= 50){
                    printf("_");
                }
                else {
                    printf(" ");
                }
            }

            if(row == 2 || row == 4 || row == 12 || row == 13){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else{
                    printf(" ");
                }
            }
            if (row == 3){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else if (col == 37){
                    printf("2");
                }
                else{
                    printf(" ");
                }
            }

            // start writing message for love2 in a card
            if(row >= 5 && row <= 11){
                if(row == 5){
                    if(col == 25 || col == 33){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("You will meet your");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 6){
                    if(col == 25 || col == 32){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("soulmate very soon.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 7){
                    if(col == 25 || col == 39){
                        printf("|");
                    }
                    else if(col == 32){
                        printf("They will be");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 8){
                    if(col == 25 || col == 37){
                        printf("|");
                    }
                    else if(col == 31){
                        printf("everything you");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 9){
                    if(col == 25 || col == 35){
                        printf("|");
                    }
                    else if(col == 30){
                        printf("ever dreamed of.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 10){
                    if(col == 25 || col == 39){
                        printf("|");
                    }
                    else if(col == 31){
                        printf("It will be a");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 11){
                    if(col == 25 || col == 29){
                        printf("|");
                    }
                    else if(col == 27){
                        printf("romance of a lifetime.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    goBackLove(); // call goBackLove() function
}

void love3(){
    for(int row = 1; row <= ROW - 1; row++){
        printf("\t\t\t");
        for(int col = 1; col <= COL; col++){
            if(row == 1 || row == ROW - 1){
                if (col >= 25 && col <= 50){
                    printf("_");
                }
                else {
                    printf(" ");
                }
            }

            if(row == 2 || row == 4 || row == 12 || row == 13){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else{
                    printf(" ");
                }
            }
            if (row == 3){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else if (col == 37){
                    printf("3");
                }
                else{
                    printf(" ");
                }
            }

            // start writing message for love3 in a card
            if(row >= 5 && row <= 11){
                if(row == 5){
                    if(col == 25 || col == 33){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("Love and Blessings");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 6){
                    if(col == 25 || col == 37){
                        printf("|");
                    }
                    else if(col == 31){
                        printf("are on the way");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 7){
                    if(col == 25 || col == 33){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("to fill your life.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 8){
                    if(col == 25 || col == 33){
                        printf("|");
                    }
                    else if(col == 30){
                        printf("Trust the process.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 9){
                    if(col == 25 || col == 34){
                        printf("|");
                    }
                    else if(col == 30){
                        printf("There's a happily");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 10){
                    if(col == 25 || col == 33){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("ever after waiting");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 11){
                    if(col == 25 || col == 43){
                        printf("|");
                    }
                    else if(col == 34){
                        printf("for you.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    goBackLove(); // call goBackLove() function
}

void career(){
    printf("%67s\n\n", "CAREER READING");
    printf("%70s\n\n", "CHOOSE ANY ONE CARD");

    for(int row = 1; row <= ROW - 1; row++){
        printf("\t\t\t");
        for(int col = 1; col <= COL; col++){
            if(row == 1 || row == ROW - 1){
                if(col == 20 || col == 46 || col == 72){
                    while ((col >= 20 && col < 26) || (col >= 46 && col < 52) || (col >= 72 && col < 81)){
                        col++;
                        printf(" ");
                    }
                }
                else{
                    printf("_");
                }
            }

            if(row == 2 || row == 3 || row == 13){
                if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                    printf("|");
                }
                else{
                    printf(" ");
                }
            }

            // start drawing career choices in cards
            if(row >= 4 && row <= 12){
                if(row == 4){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if (col == 35){
                        printf("$");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                if(row == 5){
                    if(col == 1 || col == 11 || col == 18 || col == 34 || col == 41 || col == 57){
                        printf("|");
                    }
                    else if(col == 6){
                        printf("%3s", "_________");
                    }
                    else if (col == 26){
                        printf("$$$");
                    }
                    else if (col == 48){
                        printf("***");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 6){
                    if(col == 1 || col == 6 || col == 8 || col == 10 || col == 15 || col == 22 || col == 40 || col == 47 || col == 65){
                        printf("|");
                    }
                    else if (col == 7 || col == 9){
                        printf("...");
                    }
                    else if (col == 28 || col == 31 || col == 34){
                        printf("$");
                    }
                    else if (col == 52 || col == 58){
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }

                }

                if(row == 7){
                    if(col == 1 || col == 6 || col == 8 || col == 10 || col == 15 || col == 22 || col == 40 || col == 47 || col == 65){
                        printf("|");
                    }
                    else if (col == 7 || col == 9){
                        printf("...");
                    }
                    else if (col == 28 || col == 31){
                        printf("$");
                    }
                    else if(col == 52 || col == 58){
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 8){
                    if(col == 1 || col == 6 || col == 8 || col == 10 || col == 15 || col == 22 || col == 40 || col == 47 || col == 65){
                        printf("|");
                    }
                    else if (col == 7 || col == 9){
                        printf("...");
                    }
                    else if (col == 29 || col == 31 || col == 33){
                        printf("$");
                    }
                    else if(col == 57){
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 9){
                    if(col == 1 || col == 11 || col == 18 || col == 36 || col == 43 || col == 61){
                        printf("|");
                    }
                    else if (col == 6){
                        printf("---------");
                    }
                    else if (col == 27 || col == 30){
                        printf("$");
                    }
                    else if(col == 51){
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 10){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if (col == 32 || col == 35 || col == 38){
                        printf("$");
                    }
                    else if(col == 59){
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 11){
                    if(col == 1 || col == 19 || col == 26 || col == 42 || col == 49 || col == 67){
                        printf("|");
                    }
                    else if (col == 34){
                        printf("$$$");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 12){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if (col == 35){
                        printf("$");
                    }
                    else if(col == 59){
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    printf("%34s%25s%25s\n\n", "1", "2", "3");

    // Number Instructions for the Readings
    printf("%62s\n", "Press 1 for 1");
    printf("%62s\n", "Press 2 for 2");
    printf("%62s\n", "Press 3 for 3");
    printf("%85s\n\n", "Press 4 to go back to the tarot page");

    char userNum;
    // Space before %c removes any white space i.e. blanks, tabs, or newlines. So, after adding space before %c, we are only reading the given char
    scanf(" %c", &userNum);  // scanning the user input and storing it at the address of the variable 'userNum'
    if (userNum == '1'){
        career1(); // call career1() function
    }
    else if (userNum == '2'){
        career2(); // call career2() function
    }
    else if (userNum == '3'){
        career3(); // call career3() function
    }
    else if (userNum == '4'){
        tarot(); // call tarot() function
    }
    else{
        printf("Invalid character. Please press either 1, 2, 3 or, 4\n\n");  // Input validation
        career();
    }
}

void career1(){
    for(int row = 1; row <= ROW - 1; row++){
        printf("\t\t\t");
        for(int col = 1; col <= COL; col++){
            if(row == 1 || row == ROW - 1){
                if (col >= 25 && col <= 50){
                    printf("_");
                }
                else {
                    printf(" ");
                }
            }

            if(row == 2 || row == 4 || row == 12 || row == 13){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else{
                    printf(" ");
                }
            }
            if (row == 3){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else if (col == 37){
                    printf("1");
                }
                else{
                    printf(" ");
                }
            }

            // start writing message for career1 in a card
            if(row >= 5 && row <= 11){
                if(row == 5){
                    if(col == 25 || col == 29){
                        printf("|");
                    }
                    else if(col == 27){
                        printf("Keep pushing yourself.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 6){
                    if(col == 25 || col == 37){
                        printf("|");
                    }
                    else if(col == 31){
                        printf("Don't give up.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 7){
                    if(col == 25 || col == 33){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("That promotion/job");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 8){
                    if(col == 25 || col == 35){
                        printf("|");
                    }
                    else if(col == 30){
                        printf("offer is heading");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 9){
                    if(col == 25 || col == 37){
                        printf("|");
                    }
                    else if(col == 31){
                        printf("your way. Just");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 10){
                    if(col == 25 || col == 38){
                        printf("|");
                    }
                    else if(col == 31){
                        printf("be a bit more");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 11){
                    if(col == 25 || col == 43){
                        printf("|");
                    }
                    else if(col == 35){
                        printf("patient.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    goBackCareer(); // call goBackCareer() function
}

void career2(){
    for(int row = 1; row <= ROW - 1; row++){
        printf("\t\t\t");
        for(int col = 1; col <= COL; col++){
            if(row == 1 || row == ROW - 1){
                if (col >= 25 && col <= 50){
                    printf("_");
                }
                else {
                    printf(" ");
                }
            }

            if(row == 2 || row == 4 || row == 12 || row == 13){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else{
                    printf(" ");
                }
            }
            if (row == 3){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else if (col == 37){
                    printf("2");
                }
                else{
                    printf(" ");
                }
            }

            // start writing message for career1 in a card
            if(row >= 5 && row <= 11){
                if(row == 5){
                    if(col == 25 || col == 35){
                        printf("|");
                    }
                    else if(col == 31){
                        printf("Be very careful.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 6){
                    if(col == 25 || col == 34){
                        printf("|");
                    }
                    else if(col == 30){
                        printf("Your colleague in");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 7){
                    if(col == 25 || col == 37){
                        printf("|");
                    }
                    else if(col == 32){
                        printf("your workplace");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 8){
                    if(col == 25 || col == 35){
                        printf("|");
                    }
                    else if(col == 30){
                        printf("may try to steal");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 9){
                    if(col == 25 || col == 37){
                        printf("|");
                    }
                    else if(col == 31){
                        printf("your shine and");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 10){
                    if(col == 25 || col == 30){
                        printf("|");
                    }
                    else if(col == 28){
                        printf("ruin your reputation.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 11){
                    if(col == 25 || col == 39){
                        printf("|");
                    }
                    else if(col == 32){
                        printf("Watch out!!!");

                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    goBackCareer(); // call goBackCareer() function
}

void career3(){
    for(int row = 1; row <= ROW - 1; row++){
        printf("\t\t\t");
        for(int col = 1; col <= COL; col++){
            if(row == 1 || row == ROW - 1){
                if (col >= 25 && col <= 50){
                    printf("_");
                }
                else {
                    printf(" ");
                }
            }

            if(row == 2 || row == 4 || row == 12 || row == 13){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else{
                    printf(" ");
                }
            }
            if (row == 3){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else if (col == 37){
                    printf("3");
                }
                else{
                    printf(" ");
                }
            }

            // start writing message for career1 in a card
            if(row >= 5 && row <= 11){
                if(row == 5){
                    if(col == 25 || col == 31){
                        printf("|");
                    }
                    else if(col == 28){
                        printf("This is a good month");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 6){
                    if(col == 25 || col == 31){
                        printf("|");
                    }
                    else if(col == 27){
                        printf("for investment. It's");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 7){
                    if(col == 25 || col == 32){
                        printf("|");
                    }
                    else if(col == 28){
                        printf("time to invest your");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 8){
                    if(col == 25 || col == 27){
                        printf("|");
                    }
                    else if(col == 26){
                        printf("saved up money in stocks");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 9){
                    if(col == 25 || col == 32){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("or business you are");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 10){
                    if(col == 25 || col == 31){
                        printf("|");
                    }
                    else if(col == 28){
                        printf("interested in. Grasp");

                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 11){
                    if(col == 25 || col == 31){
                        printf("|");
                    }
                    else if(col == 27){
                        printf("the opportunities!!!");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    goBackCareer(); // call goBackCareer() function
}

void personality(){
    printf("%70s\n\n", "PERSONALITY READING");
    printf("%70s\n\n", "CHOOSE ANY ONE CARD");

    for(int row = 1; row <= ROW; row++){
        printf("\t\t\t");
        for(int col = 1; col <= COL; col++){
            if(row == 1 || row == ROW){
                if(col == 20 || col == 46 || col == 72){
                    while ((col >= 20 && col < 26) || (col >= 46 && col < 52) || (col >= 72 && col < 81)){
                        col++;
                        printf(" ");
                    }
                }
                else{
                    printf("_");
                }
            }

            if(row == 2 || row == 3 || row == 4){
                if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                    printf("|");
                }
                else{
                    printf(" ");
                }
            }

            // start drawing personality pics in cards
            if(row >= 5 && row <= ROW - 1){
                if(row == 5){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if((col >= 9 && col <= 11) || col == 35 ){
                        printf("*");
                    }
                    else if (col >= 55 && col <= 65){
                        printf("_");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 6){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if(col == 7 || col == 13 || (col >= 34 && col <= 36)){
                        printf("*");
                    }
                    else if(col == 54 || col == 58){
                        printf("/");
                    }
                    else if(col == 62 || col == 66){
                        printf("\\");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 7){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if(col == 6 || col == 14 || (col >= 33 && col <= 37)){
                        printf("*");
                    }
                    else if(col >= 54 && col <= 66){
                        printf("-");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 8){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if(col == 6 || col == 14 || (col >= 29 && col <= 41)){
                        printf("*");
                    }
                    else if(col == 54 || col == 57){
                        printf("\\");
                    }
                    else if(col == 63 || col == 66){
                        printf("/");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 9){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if((col >= 5 && col <= 15) || (col >= 31 && col <= 39)){
                        printf("*");
                    }
                    else if(col == 55 || col == 58){
                        printf("\\");
                    }
                    else if(col == 62 || col == 65){
                        printf("/");
                    }
                    else
                    {
                        printf(" ");
                    }
                }


                if(row == 10){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if((col >= 6 && col <= 14) || (col >= 30 && col <= 33) || (col >= 37 && col <= 40)){
                        printf("*");
                    }
                    else if(col == 56 || col == 59){
                        printf("\\");
                    }
                    else if(col == 61 || col == 64){
                        printf("/");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 11){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if((col >= 7 && col <= 13) || col == 29 || col == 30 || col == 40 || col == 41){
                        printf("*");
                    }
                    else if(col == 57 || col == 60){
                        printf("\\");
                    }
                    else if(col == 60 || col == 63){
                        printf("/");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 12){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if((col >= 8 && col <= 12) || col == 28 || col == 42){
                        printf("*");
                    }
                    else if(col == 58 || col == 61){
                        printf("\\");
                    }
                    else if(col == 59 || col == 62){
                        printf("/");
                    }
                    else if(col >= 60 && col <= 61){
                        printf("_");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 13){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if((col >= 9 && col <= 11)){
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == ROW - 1){
                    if(col == 1 || col == 19 || col == 26 || col == 44 || col == 51 || col == 69){
                        printf("|");
                    }
                    else if(col == 10){
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");

    }
    printf("%34s%25s%25s\n\n", "1", "2", "3");

    printf("%62s\n", "Press 1 for 1");
    printf("%62s\n", "Press 2 for 2");
    printf("%62s\n", "Press 3 for 3");
    printf("%85s\n\n", "Press 4 to go back to the tarot page");

    char userNum;
    // Space before %c removes any white space i.e. blanks, tabs, or newlines. So, after adding space before %c, we are only reading the given char
    scanf(" %c", &userNum);  // scanning the user input and storing it at the address of the variable 'userNum'
    if (userNum == '1'){
        personality1(); // call personality1() function
    }
    else if (userNum == '2'){
        personality2(); // call personality2() function
    }
    else if (userNum == '3'){
        personality3(); // call personality3() function
    }
    else if (userNum == '4'){
        tarot();
    }
    else{
        printf("Invalid character. Please press either 1, 2, 3 or, 4\n\n");  // Checking Input validation
        personality();  // call the personality function and display the personality cards page again
    }

}

void personality1(){
    for(int row = 1; row <= ROW - 1; row++){
        printf("\t\t\t");
        for(int col = 1; col <= COL; col++){
            if(row == 1 || row == ROW - 1){
                if (col >= 25 && col <= 50){
                    printf("_");
                }
                else {
                    printf(" ");
                }
            }

            if(row == 2 || row == 4 || row == 12 || row == 13){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else{
                    printf(" ");
                }
            }
            if (row == 3){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else if (col == 37){
                    printf("1");
                }
                else{
                    printf(" ");
                }
            }

            // start writing message for personality1 in a card
            if(row >= 5 && row <= 11){
                if(row == 5){
                    if(col == 25 || col == 31){
                        printf("|");
                    }
                    else if(col == 28){
                        printf("You are responsible,");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 6){
                    if(col == 25 || col == 32){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("sincere and caring.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 7){
                    if(col == 25 || col == 34){
                        printf("|");
                    }
                    else if(col == 30){
                        printf("You are a natural");
                    }
                    else
                    {
                        printf(" ");
                    }

                }

                if(row == 8){
                    if(col == 25 || col == 34){
                        printf("|");
                    }
                    else if(col == 30){
                        printf("leader, ambitious");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 9){
                    if(col == 25 || col == 34){
                        printf("|");
                    }
                    else if(col == 30){
                        printf("and hard working.");

                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 10){
                    if(col == 25 || col == 31){
                        printf("|");
                    }
                    else if(col == 28){
                        printf("You like the company");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 11){
                    if(col == 25 || col == 29){
                        printf("|");
                    }
                    else if(col == 27){
                        printf("of like-minded people.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    goBackPersonality(); // call goBackPersonality() function
}

void personality2(){
    for(int row = 1; row <= ROW - 1; row++){
        printf("\t\t\t");
        for(int col = 1; col <= COL; col++){
            if(row == 1 || row == ROW - 1){
                if (col >= 25 && col <= 50){
                    printf("_");
                }
                else {
                    printf(" ");
                }
            }

            if(row == 2 || row == 4 || row == 13){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else{
                    printf(" ");
                }
            }
            if (row == 3){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else if (col == 37){
                    printf("2");
                }
                else{
                    printf(" ");
                }
            }

            // start writing message for personality2 in a card
            if(row >= 5 && row <= 12){
                if(row == 5){
                    if(col == 25 || col == 32){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("You are little shy,");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 6){
                    if(col == 25 || col == 33){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("kind and generous.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 7){
                    if(col == 25 || col == 34){
                        printf("|");
                    }
                    else if(col == 30){
                        printf("You are soft, and");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 8){
                    if(col == 25 || col == 33){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("easily get hurt by");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 9){
                    if(col == 25 || col == 33){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("the words of other");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 10){
                    if(col == 25 || col == 29){
                        printf("|");
                    }
                    else if(col == 27){
                        printf("people. You are naive,");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 11){
                    if(col == 25 || col == 30){
                        printf("|");
                    }
                    else if(col == 27){
                        printf("so, people may try to");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                if(row == 12){
                    if(col == 25 || col == 29){
                        printf("|");
                    }
                    else if(col == 27){
                        printf("take advantage of you.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    goBackPersonality(); // call goBackPersonality() function
}

void personality3(){
    for(int row = 1; row <= ROW - 1; row++){
        printf("\t\t\t");
        for(int col = 1; col <= COL; col++){
            if(row == 1 || row == ROW - 1){
                if (col >= 25 && col <= 50){
                    printf("_");
                }
                else {
                    printf(" ");
                }
            }

            if(row == 2 || row == 4 || row == 13){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else{
                    printf(" ");
                }
            }
            if (row == 3){
                if(col == 25 || col == 50){
                    printf("|");
                }
                else if (col == 37){
                    printf("3");
                }
                else{
                    printf(" ");
                }
            }

            // start writing message for personality3 in a card
            if(row >= 5 && row <= 12){
                if(row == 5){
                    if(col == 25 || col == 31){
                        printf("|");
                    }
                    else if(col == 28){
                        printf("You are intelligent,");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 6){
                    if(col == 25 || col == 29){
                        printf("|");
                    }
                    else if(col == 27){
                        printf("perfectionist and love");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 7){
                    if(col == 25 || col == 31){
                        printf("|");
                    }
                    else if(col == 28){
                        printf("challenges. You like");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 8){
                    if(col == 25 || col == 32){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("exploring new ideas");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 9){
                    if(col == 25 || col == 28){
                        printf("|");
                    }
                    else if(col == 27){
                        printf("and meeting new people.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 10){
                    if(col == 25 || col == 34){
                        printf("|");
                    }
                    else if(col == 31){
                        printf("You are reliable,");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                if(row == 11){
                    if(col == 25 || col == 31){
                        printf("|");
                    }
                    else if(col == 28){
                        printf("trustworthy and good");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                if(row == 12){
                    if(col == 25 || col == 32){
                        printf("|");
                    }
                    else if(col == 29){
                        printf("at keeping secrets.");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    goBackPersonality(); // call goBackPersonality() function
}