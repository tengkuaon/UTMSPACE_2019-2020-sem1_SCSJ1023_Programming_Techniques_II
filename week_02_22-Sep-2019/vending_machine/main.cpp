#include <iostream>
#include <iomanip>
#include "dvd.hpp"
#include "vending_machine.hpp"

using namespace std;
using namespace SCSJ1023;

int main (int argc, char *argv[])
{
    const int DVD_COUNT = 8;

    Dvd harry_porter("HARRY PORTER", 20);
    Dvd ink_heart("INK HEART", 23);
    Dvd transformer_2("TRANSFORMER II", 10);
    Dvd bedtime_stories("BEDTIME STORIES", 20);
    Dvd megaman_x("MEGAMAN X", 50.56);
    Dvd spelunky("SPELUNKY", 20.55);
    Dvd monster_hunter_world("MONSTER HUNTER: WORLD", 200.55);
    Dvd necrodancer("CRYPT OF THE NECRODANCER", 30);

    Dvd dvds[DVD_COUNT] = {
        harry_porter,
        ink_heart,
        transformer_2,
        bedtime_stories,
        megaman_x,
        spelunky,
        monster_hunter_world,
        necrodancer
    };    

    if (argc > 1)
    {
        if (argv[1][0] == '-')
        {   
            char *first_arg = argv[1];
            switch(first_arg[1])
            {
                case 'H':                
                case 'h':
                    std::cout << "Usage: " << argv[0] << " [OPTION]" << std::endl;
                    std::cout << "Fun little program. Pretends to sell you DVDs." << std::endl;                    
                    std::cout << "Provide no arguments to start the vending machine." << std::endl << std::endl;
                    std::cout << "Optional arguments:" << std::endl;
                    std::cout << "  -h, -H\t\t display this help" << std::endl;
                    std::cout << "  -i, -I\t\t about this program and license" << std::endl;
                    std::cout << "  -c, -C\t\t show the number of DVDs" << std::endl;
                    std::cout << "  -l, -L\t\t list the DVDs for sale" << std::endl;
                    std::cout << "      -lp, -lP, -Lp, -LP\t also show the prices of the DVDs for sale" << std::endl;
                    break;

                case 'I':
                case 'i':
                    std::cout << "DVDs VENDING MACHINE (IMAGINARY)\n\n";
                    std::cout << "This was made for fun and also for the course SCSJ1023 Programming Techniques II\n";
                    std::cout << "at UTMSPACE, Kuala Lumpur in Semester 1 during the 2019-2020 session.\n\n";
                    std::cout << "Written By:\n";
                    std::cout << "Randy Tan Shaoxian\n";
                    std::cout << "Website: http://oneseedfruit.net\n";
                    std::cout << "ID: SX180357CSJS04\n\n";
                    std::cout << "Charlene Ng Andrew\n";
                    std::cout << "Website: http://charleneandrew.com\n";
                    std::cout << "ID: SX180355CSJS04\n\n\n";
                    std::cout << "Lecturer (SCSJ1023 Programming Techniques II):\n";
                    std::cout << "Ajune Wanis Ismail\n";
                    std::cout << "Website: https://people.utm.my/ajune/scsj1023-19/\n";
                    std::cout << "\n\n\n\n";
                    std::cout << "2019. Randy Tan Shaoxian and Charlene Ng Andrew. No rights reserved.\n\n";
                    std::cout << "MIT License\n\n";
                    std::cout << "Permission is hereby granted, free of charge, to any person obtaining a copy\n";
                    std::cout << "of this software and associated documentation files (the \"Software\"), to deal\n";
                    std::cout << "in the Software without restriction, including without limitation the rights\n";
                    std::cout << "to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\n";
                    std::cout << "copies of the Software, and to permit persons to whom the Software is\n";
                    std::cout << "furnished to do so, subject to the following conditions:\n";
                    std::cout << "\n";
                    std::cout << "The above copyright notice and this permission notice shall be included in all\n";
                    std::cout << "copies or substantial portions of the Software.\n";
                    std::cout << "\n";
                    std::cout << "THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n";
                    std::cout << "IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n";
                    std::cout << "FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\n";
                    std::cout << "AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n";
                    std::cout << "LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n";
                    std::cout << "OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE\n";
                    std::cout << "SOFTWARE.\n\n";
                    break;

                case 'C':
                case 'c':
                    std::cout << "This vending machine has " << DVD_COUNT << " DVDs for sale! Yoohoo!!" << std::endl;                    
                    break;
                
                case 'L':
                case 'l':
                    bool show_price = first_arg[2] == 'p' || first_arg[2] == 'P';

                    if (show_price)
                    {
                        std::cout << std::setprecision(2) << std::fixed;
                    }
                    
                    std::cout << "Curious about what we're selling? Here's a list!" << std::endl;                    

                    for (int i = 0; i < DVD_COUNT; ++i)
                    {
                        std::cout << "    - " << dvds[i].getTitle();
                        if (show_price)
                        {                            
                            std::cout << " selling at RM" << dvds[i].getPrice() << "! ";
                        }
                        std::cout << std::endl;
                    }
                    break;
            }
        }

        return 0;
    }
    
    VendingMachine vending_machine(dvds, DVD_COUNT);
    vending_machine.showMenu();

    return 0;
}