#include<stdio.h>

int main()
{
    int n;
    int a;
    int m;
    int exit;
    int e;
    int num;
    printf("****WELCOME TO THE PERIODIC TABLE****");
    printf("\n\nEnter 1 to know about 1-50 elements");
    printf("\n\nEnter 2 to close the periodic table");
    printf("\n\nEnter your choice");
    scanf("%d",&n);
    if(n==1)
    {
        // printf("\n\nWelcome To The Periodic Table");
        //printf("\n\t\tLet's learn");
        // printf("\n\nEnter 3 to search the element by atomic number");
        printf("\n Enter the number of elements to search");
        scanf("%d",&num);
        for(int i=1; i<=num; i++) {
            printf("\n\nEnter the Atomic number of the element to search");
            scanf("%d",&a);

            if(a==1)
            {
                printf("Name - Hydrogen\n");
                printf("Symbol - H\n");
                printf("Atomic number - 1\n");
                printf("Atomic weight - 1.01\n");
                printf("\nElectronic configuration - 1s^1");
                printf("\nDiscovered by- Henry Cavendish");

            }
            else if(a==2)
            {
                printf("\n Name - Helium");
                printf("\n Symbol - He");
                printf("\n Atomic number - 2");
                printf("\n Atomic weight - 4.00");
            }
            else if(a==3)
            {
                printf("\n Name - Lithium");
                printf("\n Symbol - Li");
                printf("\n Atomic number - 3");
                printf("\n Atomic weight - 4.00");

            }
            else if(a==4)
            {

                printf("\n Name - Beryllium");
                printf("\n Symbol - Be");
                printf("\n Atomic number - 4");
                printf("\n Atomic weight - 9.01");

            }
            else if(a==5)

            {
                printf("\n Name - Boron");
                printf("\n Symbol - B");
                printf("\n Atomic number - 5");
                printf("\n Atomic weight - 10.81");

            }
            else if(a==6)
            {

                printf("\n Name - Carbon ");
                printf("\n Symbol - C");
                printf("\n Atomic number - 6");
                printf("\n Atomic weight - 12.01");

            }
            else if(a==7)
            {

                printf("\n Name - Nitrogen");
                printf("\n Symbol - N");
                printf("\n Atomic number - 7");
                printf("\n Atomic weight - 14.01");

            }
            else if(a==8)
            {

                printf("\n Name - Oxygen ");
                printf("\n Symbol - O");
                printf("\n Atomic number - 8");
                printf("\n Atomic weight - 16.00");

            }
            else if(a==9)
            {

                printf("\n Name - Fluorine");
                printf("\n Symbol - F");
                printf("\n Atomic number - 9");
                printf("\n Atomic weight - 19.00");

            }

            else if(a==10)
            {

                printf("\n Name - Neon ");
                printf("\n Symbol - Ne");
                printf("\n Atomic number - 10");
                printf("\n Atomic weight - 20.18");

            }
            else if(a==11)
            {

                printf("\n Name - Sodium");
                printf("\n Symbol - Na");
                printf("\n Atomic number - 11");
                printf("\n Atomic weight - 22.99");

            }
            else if(a==12)
            {

                printf("\n Name - Magnesium");
                printf("\n Symbol - Mg");
                printf("\n Atomic number - 12");
                printf("\n Atomic weight - 24.31");

            }
            else if(a==13)
            {

                printf("\n Name - Aluminium");
                printf("\n Symbol - Al");
                printf("\n Atomic number - 13");
                printf("\n Atomic weight - 26.98");

            }
            else if(a==14)
            {

                printf("\n Name - Silicon ");
                printf("\n Symbol - si");
                printf("\n Atomic number - 14");
                printf("\n Atomic weight - 28.09");

            }
            else if(a==15)
            {

                printf("\n Name - Phosphorous ");
                printf("\n Symbol - P");
                printf("\n Atomic number - 15");
                printf("\n Atomic weight - 30.97");

            }
            else if(a==16)
            {

                printf("\n Name - Sulphur");
                printf("\n Symbol - S");
                printf("\n Atomic number - 16");
                printf("\n Atomic weight - 32.06");

            }
            else if(a==17)
            {

                printf("\n Name - Chlorine ");
                printf("\n Symbol - Cl");
                printf("\n Atomic number - 17");
                printf("\n Atomic weight - 35.45");

            }
            else if(a==18)
            {

                printf("\n Name - Argon ");
                printf("\n Symbol - Ar");
                printf("\n Atomic number - 18");
                printf("\n Atomic weight - 39.95");

            }
            else if(a==19)
            {

                printf("\n Name - Potassium ");
                printf("\n Symbol - K");
                printf("\n Atomic number - 19");
                printf("\n Atomic weight - 39.10");

            }
            else if(a==20)
            {

                printf("\n Name - Calcium ");
                printf("\n Symbol - Ca");
                printf("\n Atomic number - 20");
                printf("\n Atomic weight - 40.08");

            }
            else if(a==21)
            {

                printf("\n Name - Scandium ");
                printf("\n Symbol - Sc");
                printf("\n Atomic number - 21");
                printf("\n Atomic weight - 44.96");

            }
            else if(a==22)
            {

                printf("\n Name - Titanium ");
                printf("\n Symbol - Ti");
                printf("\n Atomic number - 22");
                printf("\n Atomic weight - 47.88");

            }
            else if(a==23)
            {

                printf("\n Name - Vanadium");
                printf("\n Symbol - V");
                printf("\n Atomic number - 23");
                printf("\n Atomic weight - 50.94");

            }
            else if(a==24)
            {

                printf("\n Name - Chromium");
                printf("\n Symbol - Cr");
                printf("\n Atomic number - 24");
                printf("\n Atomic weight - 52.00");

            }
            else if(a==25)
            {

                printf("\n Name - Manganese ");
                printf("\n Symbol - Mn");
                printf("\n Atomic number - 25");
                printf("\n Atomic weight - 54.94");

            }
            else if(a==26)
            {

                printf("\n Name - Iron ");
                printf("\n Symbol - Fe");
                printf("\n Atomic number - 26");
                printf("\n Atomic weight - 55.85");

            }
            else if(a==27)
            {

                printf("\n Name - Cobalt ");
                printf("\n Symbol - Co");
                printf("\n Atomic number - 27");
                printf("\n Atomic weight - 58.93");

            }
            else if(a==28)
            {

                printf("\n Name - Nickel");
                printf("\n Symbol - Ni");
                printf("\n Atomic number - 28");
                printf("\n Atomic weight - 58.69");

            }
            else if(a==29)
            {

                printf("\n Name - Copper ");
                printf("\n Symbol - Cu");
                printf("\n Atomic number - 29");
                printf("\n Atomic weight - 63.55");

            }
            else if(a==30)
            {

                printf("\n Name - Zinc");
                printf("\n Symbol - Zn");
                printf("\n Atomic number - 30");
                printf("\n Atomic weight - 65.39");

            }
            else if(a==31)
            {

                printf("\n Name - Gallium ");
                printf("\n Symbol - Ga");
                printf("\n Atomic number - 31");
                printf("\n Atomic weight - 69.72");

            }
            else if(a==32)
            {

                printf("\n Name - Germanium");
                printf("\n Symbol - Ge");
                printf("\n Atomic number - 32");
                printf("\n Atomic weight - 72.61");

            }
            else if(a==33)
            {

                printf("\n Name - Arsenic ");
                printf("\n Symbol - As");
                printf("\n Atomic number - 33");
                printf("\n Atomic weight - 74.92");

            }
            else if(a==34)
            {

                printf("\n Name - Selenium");
                printf("\n Symbol - Se");
                printf("\n Atomic number - 34");
                printf("\n Atomic weight - 78.96");

            }
            else if(a==35)
            {

                printf("\n Name - Bromine ");
                printf("\n Symbol - Br");
                printf("\n Atomic number - 35");
                printf("\n Atomic weight - 79.90");

            }

            else if(a==36)
            {

                printf("\n Name - Krypton");
                printf("\n Symbol - Kr");
                printf("\n Atomic number - 36");
                printf("\n Atomic weight - 83.80");

            }
            else if(a==37)
            {

                printf("\n Name - Rubidium ");
                printf("\n Symbol - Rb");
                printf("\n Atomic number - 37");
                printf("\n Atomic weight - 85.47");


            }
            else if(a==38)
            {

                printf("\n Name - Strontium");
                printf("\n Symbol - Sr");
                printf("\n Atomic number - 38");
                printf("\n Atomic weight - 87.62");


            }
            else if(a==39)
            {

                printf("\n Name - Yttrium");
                printf("\n Symbol - Y");
                printf("\n Atomic number - 39");
                printf("\n Atomic weight - 88.91");


            }
            else if(a==40)
            {

                printf("\n Name - Zirconium ");
                printf("\n Symbol - Zr");
                printf("\n Atomic number - 40");
                printf("\n Atomic weight - 91.22");

            }
            else if(a==41)
            {

                printf("\n Name - Niobium ");
                printf("\n Symbol - Nb");
                printf("\n Atomic number - 41");
                printf("\n Atomic weight - 92.91");

            }
            else if(a==42)
            {

                printf("\n Name - Molybdenum ");
                printf("\n Symbol - Mo");
                printf("\n Atomic number - 42");
                printf("\n Atomic weight - 95.94");


            }
            else if(a==43)
            {

                printf("\n Name - Technetium ");
                printf("\n Symbol - Tc");
                printf("\n Atomic number - 43");
                printf("\n Atomic weight - 98.00");


            }
            else if(a==44)
            {

                printf("\n Name - Ruthenium");
                printf("\n Symbol - Ru");
                printf("\n Atomic number - 44");
                printf("\n Atomic weight - 101.07");


            }
            else if(a==45)
            {

                printf("\n Name - Rhodium ");
                printf("\n Symbol - Rh");
                printf("\n Atomic number - 45");
                printf("\n Atomic weight - 102.91");


            }
            else if(a==46)
            {

                printf("\n Name - Palladium ");
                printf("\n Symbol - Pd");
                printf("\n Atomic number - 46");
                printf("\n Atomic weight - 106.42");


            }
            else if(a==47)
            {

                printf("\n Name - Silver ");
                printf("\n Symbol - Ag");
                printf("\n Atomic number - 47");
                printf("\n Atomic weight - 107.87");


            }
            else if(a==48)
            {

                printf("\n Name - Cadmium ");
                printf("\n Symbol - Cd");
                printf("\n Atomic number - 48");
                printf("\n Atomic weight - 112.41");


            }
            else if(a==49)
            {

                printf("\n Name - Indium");
                printf("\n Symbol - In");
                printf("\n Atomic number - 49");
                printf("\n Atomic weight - 114.82");


            }
            else if(a==50)
            {

                printf("\n Name - Tin");
                printf("\n Symbol - Sn");
                printf("\n Atomic number - 50");
                printf("\n Atomic weight - 118.71");


            }

        }
    }
    else
    {
        printf("Do you want to close the periodic table?\n");
        printf("If Yes~~ PRESS 0\n");
        // printf("IF No ~~PRESS 3\n");
        printf("Enter\n");
        scanf("%d",&exit);
        if(exit==0)

        {
            printf("Your periodic table is closed\n");
        }
        /*else
        {
            printf("\n your periodic table is not closed");
            printf("\nenter the Atomic number to search");
            scanf("%d",&a);
        }*/
    }
}