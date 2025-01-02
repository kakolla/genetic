#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include <string>
#include <vector>


class Individual
{
public:
    Individual(int gene_size, std::string target);
    void mutateIndividual();


    void calcFitness();



    void print();


    std::vector<std::string> genes;
    int gene_size_;
    std::string target_;
    int total_fitness_;

};






#endif