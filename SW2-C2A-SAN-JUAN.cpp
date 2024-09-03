#include <iostream>
#include <algorithm>
using namespace std;

class Lin
{
private:
    int numOfFloors;
    int houseFloorArea;
    int numOfBedrooms;
    int numOfBathrooms;
    int numOfPainters;
    int numOfFloorers;
    int bedroomSizes[4];
    double paintingCost[4];
    double flooringCost;
    double paintingLaborCost;
    double flooringLaborCost;
    int paintingDays;
    int flooringDays;

public:
    Lin() : numOfFloors(1), houseFloorArea(180), numOfBedrooms(0), numOfBathrooms(0), numOfPainters(0), numOfFloorers(0) {}
    Lin(int bedrooms, int bathrooms, int painters, int floorers)
    {
        numOfBedrooms = bedrooms;
        numOfBathrooms = bathrooms;
        numOfPainters = painters;
        numOfFloorers = floorers;
    }

    void setBedroomSizes(int sizes[])
    {
        for (int i = 0; i < numOfBedrooms; i++)
        {
            bedroomSizes[i] = sizes[i];
        }
    }

    void setCostsAndDays(double pCost[], double fCost, double pLaborCost, double fLaborCost, int pDays, int fDays)
    {
        for (int i = 0; i < numOfBedrooms; i++)
        {
            paintingCost[i] = pCost[i];
        }
        flooringCost = fCost;
        paintingLaborCost = pLaborCost;
        flooringLaborCost = fLaborCost;
        paintingDays = pDays;
        flooringDays = fDays;
    }

    void display(int hn, double paintingCost, double flooringCost, double paintingLaborCost, double flooringLaborCost, int paintingDays, int flooringDays)
    {

        double totalOverallCost = paintingCost + flooringCost + paintingLaborCost + flooringLaborCost;

        cout << "Total Cost for House #" << hn + 1 << ": " << endl;
        cout << "Painting Cost: P" << paintingCost << endl;
        cout << "Flooring Cost: P" << flooringCost << endl;
        cout << "Painting Labor Cost: P" << paintingLaborCost << endl;
        cout << "Flooring Labor Cost: P" << flooringLaborCost << endl;
        cout << "Total Overall Cost: P" << totalOverallCost << endl;
        cout << "Total Days: " << paintingDays + flooringDays << " days" << endl;
    }
};

class Lan
{
private:
    int numOfFloors;
    int houseFloorArea;
    int numOfBedrooms;
    int numOfBathrooms;
    int numOfPainters;
    int numOfFloorers;
    int bedroomSizes[5];
    double paintingCost[5];
    double flooringCost;
    double paintingLaborCost;
    double flooringLaborCost;
    int paintingDays;
    int flooringDays;

public:
    Lan() : numOfFloors(1), houseFloorArea(180), numOfBedrooms(0), numOfBathrooms(0), numOfPainters(0), numOfFloorers(0) {}
    Lan(int bedrooms, int bathrooms, int painters, int floorers)
    {
        numOfBedrooms = bedrooms;
        numOfBathrooms = bathrooms;
        numOfPainters = painters;
        numOfFloorers = floorers;
    }

    void setBedroomSizes(int sizes[])
    {
        for (int i = 0; i < numOfBedrooms; i++)
        {
            bedroomSizes[i] = sizes[i];
        }
    }

    void setCostsAndDays(double pCost[], double fCost, double pLaborCost, double fLaborCost, int pDays, int fDays)
    {
        for (int i = 0; i < numOfBedrooms; i++)
        {
            paintingCost[i] = pCost[i];
        }
        flooringCost = fCost;
        paintingLaborCost = pLaborCost;
        flooringLaborCost = fLaborCost;
        paintingDays = pDays;
        flooringDays = fDays;
    }

    void display(int hn, double paintingCost, double flooringCost, double paintingLaborCost, double flooringLaborCost, int paintingDays, int flooringDays)
    {

        double totalOverallCost = paintingCost + flooringCost + paintingLaborCost + flooringLaborCost;

        cout << "Total Cost for House #" << hn + 1 << ": " << endl;
        cout << "Painting Cost: P" << paintingCost << endl;
        cout << "Flooring Cost: P" << flooringCost << endl;
        cout << "Painting Labor Cost: P" << paintingLaborCost << endl;
        cout << "Flooring Labor Cost: P" << flooringLaborCost << endl;
        cout << "Total Overall Cost: P" << totalOverallCost << endl;
        cout << "Total Days: " << paintingDays + flooringDays << " days" << endl;
    }

    int getNumberOfBedrooms(const string &houseType)
    {
        int numOfBedrooms;

        do
        {
            cout << endl
                 << "Enter the number of bedrooms: ";
            cin >> numOfBedrooms;

            if ((numOfBedrooms < 1 || numOfBedrooms > 4 && houseType == "LIN") || (numOfBedrooms < 1 || numOfBedrooms > 5 && houseType == "LAN"))
            {
                cout << "Number of bedrooms is 1-4 for Lin and 1-5 for Lan." << endl;
            }
        } while ((numOfBedrooms < 1 || numOfBedrooms > 4 && houseType == "LIN") || (numOfBedrooms < 1 || numOfBedrooms > 5 && houseType == "LAN"));

        while (true)
        {
            cout << endl
                 << "Enter the number of bedrooms: ";
            cin >> numOfBedrooms;

            if ((houseType == "LIN" && numOfBedrooms >= 1 && numOfBedrooms <= 4) ||
                (houseType == "LAN" && numOfBedrooms >= 1 && numOfBedrooms <= 5))
            {
                break;
            }
            else
            {
                cout << "Lin can have a maximum of 4 bedrooms and Lan can have a maximum of 5 bedrooms." << endl;
            }
        }

        return numOfBedrooms;
    }
};

int getNumberOfBedrooms(const string &houseType)
{
    int numOfBedrooms;

    while (true)
    {
        cout << endl
             << "Enter the number of bedrooms: ";
        cin >> numOfBedrooms;

        if ((houseType == "LIN" && numOfBedrooms >= 1 && numOfBedrooms <= 4) ||
            (houseType == "LAN" && numOfBedrooms >= 1 && numOfBedrooms <= 5))
        {
            break;
        }
        else
        {
            cout << "Lin can have a maximum of 4 bedrooms and Lan can have a maximum of 5 bedrooms." << endl;
        }
    }

    return numOfBedrooms;
}

int main()
{

    string houseType;
    Lin lin;
    Lan lan;
    Lin linHouses[5];
    Lan lanHouses[5];
    int linCount = 0;
    int lanCount = 0;
    int houseCount = 0;
    int numOfBedrooms = 0;
    int numOfBathrooms = 0;
    int numOfPainters = 0;
    int numOfFloorers = 0;
    int paintingDays = 0;
    int flooringDays = 0;
    int sizeOfKitchen = 0;
    int totalDays = 0;
    int finalTotalDays = 0;
    int sizeOfBedroom[5];
    double paintingCost[5];
    double flooringCost = 0.0;
    double paintingLaborCost = 0.0;
    double flooringLaborCost = 0.0;
    double paintingCostTally = 0.0;
    double totalPaintingCost = 0.0;
    double totalFlooringCost = 0.0;
    double totalLaborCost = 0.0;
    char choice;

    do
    {
        cout << "Enter the Number of Houses (1-5): ";
        cin >> houseCount;

        while (houseCount < 1 || houseCount > 5)
        {
            cout << "Number of houses ranges from 1-5 only." << endl;
            cout << "Enter the Number of Houses (1-5): ";
            cin >> houseCount;
        }

        for (int i = 0; i < houseCount; i++)
        {

            paintingCostTally = 0.0;
            totalDays = 0;

            cout << "Enter Details for House " << i + 1 << ":" << endl;

            do
            {
                cout << endl
                     << "Choose the House Type (Lin/Lan): ";
                cin >> houseType;

                transform(houseType.begin(), houseType.end(), houseType.begin(), ::toupper);

                if (houseType != "LIN" && houseType != "LAN")
                {
                    cout << endl
                         << "Invalid house type! Please enter either 'Lin' or 'Lan': ";
                }
            } while (houseType != "LIN" && houseType != "LAN");

            do
            {
                cout << endl
                     << "Enter the number of bedrooms: ";
                cin >> numOfBedrooms;

                if (houseType == "LIN")
                {
                    if (numOfBedrooms < 1 || numOfBedrooms > 4)
                    {
                        cout << "Number of bedrooms for Lin is 1-4." << endl;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    if (numOfBedrooms < 1 || numOfBedrooms > 5)
                    {
                        cout << "Number of bedrooms for Lan is 1-5." << endl;
                    }
                    else
                    {
                        break;
                    }
                }
            } while ((numOfBedrooms < 1 || numOfBedrooms > 4 && houseType == "LIN") || (numOfBedrooms < 1 || numOfBedrooms > 5 && houseType == "LAN"));

            for (int j = 0; j < numOfBedrooms; j++)
            {
                cout << "Enter the size of bedroom " << j + 1 << " in sqm: ";
                cin >> sizeOfBedroom[j];
            }

            cout << endl
                 << "Enter the size of the kitchen in sqm: ";
            cin >> sizeOfKitchen;

            do
            {
                cout << endl
                     << "Enter the number of bathrooms: ";
                cin >> numOfBathrooms;

                if ((numOfBathrooms > 2 && houseType == "LIN") || (numOfBathrooms > 3 && houseType == "LAN"))
                {
                    cout << "Maximum number of bathrooms is 2 for Lin and 3 for Lan." << endl;
                }
            } while ((numOfBathrooms > 2 && houseType == "LIN") || (numOfBathrooms > 3 && houseType == "LAN"));

            do
            {
                cout << endl
                     << "Enter number of workers for painting: ";
                cin >> numOfPainters;

                if ((numOfPainters < 5 || numOfPainters > 10 && houseType == "LIN") || (numOfPainters < 10 || numOfPainters > 15 && houseType == "LAN"))
                {
                    cout << "Number of painters should be between 5 and 10 for Lin and between 10 and 15 for Lan." << endl;
                }
            } while ((numOfPainters < 5 || numOfPainters > 10 && houseType == "LIN") || (numOfPainters < 10 || numOfPainters > 15 && houseType == "LAN"));

            do
            {
                cout << "Enter number of days for painting: ";
                cin >> paintingDays;
                if ((houseType == "LIN" && (paintingDays < 5 || paintingDays > 10)) || (houseType == "LAN" && (paintingDays < 7 || paintingDays > 14)))
                {
                    cout << "Number of days should be between 5 and 10 for Lin and between 7 and 14 for Lan." << endl;
                }
            } while ((houseType == "LIN" && (paintingDays < 5 || paintingDays > 10)) || (houseType == "LAN" && (paintingDays < 7 || paintingDays > 14)));

            do
            {
                cout << endl
                     << "Enter number of workers for flooring: ";
                cin >> numOfFloorers;

                if (numOfFloorers < 10 || numOfFloorers > 15)
                {
                    cout << "Number of floorers should be between 10 and 15." << endl;
                }
            } while (numOfFloorers < 10 || numOfFloorers > 15);

            do
            {
                cout << "Enter number of days for flooring: ";
                cin >> flooringDays;
                if (flooringDays < 7 || flooringDays > 15)
                {
                    cout << "Incorrect input. Please enter a number between 7 and 15." << endl;
                }
            } while (flooringDays < 7 || flooringDays > 15);

            for (int j = 0; j < numOfBedrooms; j++)
            {
                if (sizeOfBedroom[j] < 30)
                {
                    paintingCost[j] = sizeOfBedroom[j] * 125.00;
                }
                else if (sizeOfBedroom[j] < 41)
                {
                    paintingCost[j] = sizeOfBedroom[j] * 175.25;
                }
                else
                {
                    paintingCost[j] = sizeOfBedroom[j] * 205.50;
                }
                paintingCostTally += paintingCost[j];
            }

            if (sizeOfKitchen <= 50)
            {
                paintingCostTally += 12500.00;
            }
            else
            {
                paintingCostTally += 12500.00 + (sizeOfKitchen - 50) * 75.45;
            }

            paintingCostTally += numOfBathrooms * 6550.00;

            if (houseType == "LIN")
            {
                double extraBedroomCost = 0.0;
                if (numOfBedrooms > 2)
                {
                    extraBedroomCost = (numOfBedrooms - 2) * 8500.00;
                }

                double extraBathroomCost = 0.0;
                if (numOfBathrooms > 1)
                {
                    extraBathroomCost = (numOfBathrooms - 1) * 4750.00;
                }

                flooringCost = 123450.00 + extraBedroomCost + extraBathroomCost;
                paintingLaborCost = numOfPainters * paintingDays * 650.00;
                flooringLaborCost = numOfFloorers * flooringDays * 550.00;
                totalDays = paintingDays + flooringDays;

                linHouses[linCount] = Lin(numOfBedrooms, numOfBathrooms, numOfPainters, numOfFloorers);
                linHouses[linCount].setBedroomSizes(sizeOfBedroom);
                linHouses[linCount].setCostsAndDays(paintingCost, flooringCost, paintingLaborCost, flooringLaborCost, paintingDays, flooringDays);
                linCount++;
            }
            else if (houseType == "LAN")
            {
                double extraBedroomCost = 0.0;
                if (numOfBedrooms > 2)
                {
                    extraBedroomCost = (numOfBedrooms - 2) * 8500.00;
                }

                double extraBathroomCost = 0.0;
                if (numOfBathrooms > 1)
                {
                    extraBathroomCost = (numOfBathrooms - 1) * 4750.00;
                }

                flooringCost = 180500.00 + extraBedroomCost + extraBathroomCost;

                paintingLaborCost = numOfPainters * paintingDays * 650.00;
                flooringLaborCost = numOfFloorers * flooringDays * 550.00;
                totalDays = paintingDays + flooringDays;

                lanHouses[lanCount] = Lan(numOfBedrooms, numOfBathrooms, numOfPainters, numOfFloorers);
                lanHouses[lanCount].setBedroomSizes(sizeOfBedroom);
                lanHouses[lanCount].setCostsAndDays(paintingCost, flooringCost, paintingLaborCost, flooringLaborCost, paintingDays, flooringDays);
                lanCount++;
            }

            totalPaintingCost += paintingCostTally;
            totalFlooringCost += flooringCost;
            totalLaborCost += paintingLaborCost + flooringLaborCost;
            finalTotalDays += paintingDays + flooringDays;

            cout << endl;

            if (houseType == "LIN")
            {
                lan.display(i, paintingCostTally, flooringCost, paintingLaborCost, flooringLaborCost, paintingDays, flooringDays);
                cout << endl;
            }
            else
            {
                lan.display(i, paintingCostTally, flooringCost, paintingLaborCost, flooringLaborCost, paintingDays, flooringDays);
                cout << endl;
            }
        }

        cout << "Overall Projected Expenses:" << endl;
        cout << "Total Painting Cost: P" << totalPaintingCost << endl;
        cout << "Total Flooring Cost: P" << totalFlooringCost << endl;
        cout << "Total Labor Cost: P" << totalLaborCost << endl;
        cout << "Total Expenses: P" << totalPaintingCost + totalFlooringCost + totalLaborCost << endl;
        cout << "Total Number of Days: " << finalTotalDays << " days" << endl;

        cout << endl
             << "Try again? (Y/N): ";
        cin >> choice;

        totalPaintingCost = 0.0;
        totalFlooringCost = 0.0;
        totalLaborCost = 0.0;
        totalDays = 0;

    } while (toupper(choice) == 'Y');

    return 0;
}