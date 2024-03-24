// B писки по классам.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <set>

int main()

{
    std::string fam;
    int num;
    int num_2;
    std::vector <std::string> fams_9;
    std::vector <std::string> fams_10;
    std::vector <std::string> fams_11;

    while (std::getline(std::cin, fam) && fam.size() != 0) {
       

            //getline(std::cin, fam);
            num = (fam.front() - '0');
            num_2 = (fam[1] - '0');
            
            if (num == 9) {
                fam.erase(fam.begin());
                fam.erase(fam.begin());
                fams_9.push_back(fam);

            }
            else if (num == 1 && num_2 == 0) {
                
                fam.erase(fam.begin());
                fam.erase(fam.begin());
                fam.erase(fam.begin());
                fams_10.push_back(fam);
            }
            else if (num == 1 && num_2 == 1) {
                fam.erase(fam.begin());
                fam.erase(fam.begin());
                fam.erase(fam.begin());
                fams_11.push_back(fam);

            }

    }
    

    for (int i = 0; i < fams_9.size(); i++) {
        std::cout << "9 " << fams_9[i];
        std::cout << std::endl;
    }
    
    for (int i = 0; i < fams_10.size(); i++) {
        std::cout << "10 " << fams_10[i];
        std::cout << std::endl;
    }
    
    for (int i = 0; i < fams_11.size(); i++) {
        std::cout << "11 " << fams_11[i];
        std::cout << std::endl;
    }
        


}

