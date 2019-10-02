#ifndef SALE_H
#define SALE_H

class Sale
{
    private:
        double itemCost;
        double disRate;
    
    public:
        Sale (double cost, double discount = 0.05)
        {
            itemCost = cost;
            disRate = discount;
        }

        double getItemCost () const
        {
            return itemCost;
        }

        double getDisRate () const
        {
            return disRate;
        }

        double getDis () const
        {
            return (itemCost * disRate);
        }

        double getTotal () const
        {
            return (itemCost - getDis());
        }
};

#endif