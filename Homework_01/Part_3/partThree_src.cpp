#include <iostream>
#include <chrono>
#include <unistd.h>
#include <vector>
#include <stdlib.h>
#include <ctime>

int main(int ac, char *av[]){
    srand(static_cast<long int>(time(0)));
    long long num = 0;

    std::vector<unsigned long long> vect;
    
    if(ac <= 1){
        std::cout<<"No input entered. Exitting program."<<std::endl;
        return -1;
    }else{
        num = std::atoi(av[1]);      
    }

    std::cout<<"Entered num is: " << num << std::endl;

    //Store number in Vector
    for(int i = 0; i < num; i++){
        long int randNum = rand()%num;
        //std::cout<<"randNum: " << randNum << std::endl;
        vect.push_back(randNum);
    }

    long long ptr = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();

    long long sum = 0;

    for(int i = 0; i < num; i++){
        sum+=vect[ptr];
        ptr = vect[ptr];

    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end_time - start_time;
    std::cout<<"elapsed time is: " << elapsed.count() <<std::endl;


    return 0;
}