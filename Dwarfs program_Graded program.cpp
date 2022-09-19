/******************************************************************************
Eric Zhang
Comp Sci 6
May 21, 2020
Seven dwarfs program:graded program
*******************************************************************************/


#include <iostream>


using namespace std;


int main()
{
    int i;
    int pass;
    int count;
    char temp[8];
    const int N=7;
    char dwarf[7] [8] = {{"Sneezy"}, {"Happy"}, {"Grumpy"}, {"Dopey"}, {"Sleepy"}, {"Bashful"}, {"Doc"}};
    //input all the names
    cout <<"The 7 dwarfs are:\n";
   for (i = 0; i <= 6; i++)
    {
        if (i % 2 == 1)
        {
            cout << "\t" << dwarf[i];
        }
        else
        {
            cout << endl << dwarf[i];
        }
    }
    // output the names out of order
    for (pass=1;pass<=N-1;pass++)
    {
        for (i=0;i<= N-(pass+1);i++)
        {
            if (int(dwarf[i][0])> int(dwarf[i+1][0]))
            {
                
                for(count=0;count<=7;count++)
                {
                    temp[count]=dwarf[i][count];
                    //holds incorrect array in temp
                    dwarf[i][count]=dwarf[i+1][count];
                    //swap
                    dwarf[i+1][count]=temp[count];
                    //puts back into array
                    }
                    
            }
            
            else if (int(dwarf[i][0]) == int(dwarf[i+1][0]))
            {
                if (int (dwarf [i][1]) > int (dwarf [i+1][1]))
                {
                    for(count=0;count<=7;count++)
                    {
                        temp[count]=dwarf[i][count];
                        //holds incorrect array in temp
                        dwarf[i][count]=dwarf[i+1][count];
                        //swap
                        dwarf[i+1][count]=temp[count];
                        //puts back into array
                    }
                }
                
                else if (int (dwarf [i][1]) == int (dwarf [i+1][1]))
                {
                    if (int (dwarf [i][2]) > int (dwarf [i+1][2]))
                    {
                        for(count=0;count<=7;count++)
                        {
                            temp[count]=dwarf[i][count];
                            //holds incorrect array in temp
                            dwarf[i][count]=dwarf[i+1][count];
                            //swap
                            dwarf[i+1][count]=temp[count];
                            //puts back into array  
                        }
                    
                    }
                }
            }


        }


    }
    cout<<"\n\nThe 7 dwarfs in alphabetical order are:\n";
    for (i = 0; i <= 6; i++)
    {
        if (i % 2 == 1)
        {
            cout << "\t" << dwarf[i];
        }
        else
        {
            cout << endl << dwarf[i];
        }
    }
//this bubble sort ran N-1 times or in this case 6 times because N is 7; This sort was very inefficient but it worked i'm sure i could make a more efficient sort; the sort would need to run N-1 times
}