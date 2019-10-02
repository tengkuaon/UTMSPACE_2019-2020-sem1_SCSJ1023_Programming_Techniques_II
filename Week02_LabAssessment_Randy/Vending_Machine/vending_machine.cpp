#include <iostream>
#include <iomanip>
#include <string>
#include "vending_machine.hpp"

namespace SCSJ1023
{
    bool VendingMachine::checkInvalidInput () const
    {            
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(9999999, '\n');
            return true;
        }
        return false;
    }

    VendingMachine::VendingMachine ()
    {
        dvd_count = 0;
        all_dvds = nullptr;
    }

    VendingMachine::VendingMachine (Dvd dvds[], int count)    
    {   
        all_dvds = dvds;
        dvd_count = count;        
    }

    int VendingMachine::getDvdCount () const
    {
        return dvd_count;
    }

    Dvd *VendingMachine::getAllDvds () const
    {
        return all_dvds;
    }

    void VendingMachine::showMenu ()
    {
        const std::string LEFT_SPACE =  "*         ";
        std::cout << "########################################" << std::endl;
        std::cout << LEFT_SPACE << "DVDs VENDING MACHINE" << std::endl;
        std::cout << LEFT_SPACE << "--------------------" << std::endl;
        int i;
        for (i = 0; i < getDvdCount(); ++i)
        {
            std::cout << LEFT_SPACE << "[" << i + 1 << "] " << getAllDvds()[i].getTitle() << std::endl;
        }
        std::cout << LEFT_SPACE << "[" << i + 1 << "] No thank you! " << std::endl;
        std::cout << "########################################" << std::endl << std::endl;

        float payment = promptToSell();
        promptToSell(payment);
    }

    float VendingMachine::promptToSell () const
    {        
        const int LAST_OPTION = getDvdCount() + 1;

        bool is_invalid = false;
        int choice = 0;
        float total_cost = 0;

        std::cout << std::setprecision(2) << std::fixed;

        while (choice != LAST_OPTION)
        {
            std::cout << "Please enter your choice [1-" << LAST_OPTION << "]: ";
            if (std::cin >> choice)
            {
                is_invalid = choice <= 0 || choice > LAST_OPTION;
                if (choice < LAST_OPTION && !is_invalid)
                {
                    Dvd selected_dvd = getAllDvds()[choice - 1];
                    std::cout << selected_dvd.getTitle() << " Price RM";
                    std::cout << selected_dvd.getPrice() << std::endl;
                    total_cost += selected_dvd.getPrice();                  
                }
            }            
            is_invalid = checkInvalidInput();
            is_invalid = choice <= 0 || choice > LAST_OPTION;

            std::cout << (choice == LAST_OPTION ? "No thank you!\n" : is_invalid ? "Invalid option!\n" : "");
            std::cout << std::endl;

            if (choice == LAST_OPTION && total_cost > 0)
            {
                std::cout << "Total is RM" << total_cost << std::endl << std::endl;
            }
        }

        return total_cost;
    }

    void VendingMachine::promptToSell (float total_cost)
    {
        if (total_cost > 0)
        {
            bool is_enough = false;
            bool is_invalid = false;
            float payment = 0, balance = 0;

            std::cout << std::setprecision(2) << std::fixed;
            
            while (!is_enough || is_invalid)
            {
                std::cout << "Please enter ";
                std::cout << (balance == 0 || (balance > 0 && is_enough) ? "your payment: " : "more money: ");
                std::cout << "RM";

                if (std::cin >> payment)
                {                
                    if (payment > 0) 
                    {
                        balance += payment;                        
                        is_enough = balance >= total_cost;
                    }
                }

                is_invalid = checkInvalidInput() || payment < 0;
                
                if (is_invalid)
                {
                    std::cout << std::endl << "Invalid input! Please try again!" << std::endl << std::endl;
                }
                else if (!is_enough)
                {
                    std::cout << "Sorry, payment is not enough.." << std::endl;
                    std::cout << "You need to pay RM" << total_cost - balance << " more!" << std::endl;
                }
                else
                {
                    float change = balance - total_cost;

                    if (change > 0)
                    {
                        std::cout << "Please take your balance: RM" << balance - total_cost << std::endl;
                    }
                    std::cout << "Thank you.." << std::endl << std::endl;
                }
            }
        }
    }

    VendingMachine::~VendingMachine ()
    {
        std::cout << "DVDs VENDING MACHINE IS DONE!" << std::endl;
    }
}