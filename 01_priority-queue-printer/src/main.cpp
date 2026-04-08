// ADS Praktikum 1.1 Printer
// Name: Malek Bouaziz
#include "job.hpp"
#include "printer.h"

int main()
{

    Printer Druker(10);
    Job john{"John", 10};
    Job jerry{"Jerry", 4};
    Job jimmy{"Jimmy", 5};
    Job george{"George", 2};
    Job bill{"Bill", 11};
    Job kenny{"Kenny", 10};

    Druker.addNewJob(john);
    Druker.addNewJob(jerry);
    Druker.addNewJob(jimmy);
    Druker.addNewJob(george);
    Druker.addNewJob(bill);
    Druker.addNewJob(kenny);

    Druker.startPrinting();


system("pause");
return 0;
}
