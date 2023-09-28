#pragma once

#include <iostream>

class	Brain
{
    protected :

    std::string _ideas[100];

    public :

    Brain();
    Brain(Brain const &);
    virtual ~Brain();
    std::string getIdea(int const &) const;
    void setIdea(std::string const &);
    Brain &operator=(Brain const &);
};
