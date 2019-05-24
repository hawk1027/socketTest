
#include "Io.h"
#include "logger.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int menuChoice;
    mkSetting();
    ckDirExist();
    printf(" \n");
    PrintMOTD();
    mkLogFile();
    prgStrLg();
        
    while (menuChoice != 3)
    {
        printMenu();
        menuChoice = getMenuChoice();

        if(menuChoice == 1)
        {
            printf(" \n");
            printf("Printing fileshare directory...\n");
            listDirectory();
            drLstLg();
            printf("\n");
        }
        if(menuChoice == 2)
        { 
            printf(" \n");
            outputFile(); 
            flOtptLg();
        }
        if(menuChoice == 4)
        {
            apology();

        }
    }
    printf(" \n");
    printf("Program Exited...\n");
    printf(" \n");
    prgExtLg(); 
    return 0;
}



