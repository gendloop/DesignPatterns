/**
 * @file	chain_of_responsibility.cpp
 * @brief	责任链模式
 * @note    - PassNotes
 * @author  gendloop
 */

// local
#include "chain_of_responsibility.h"

void PassNotes::passNotes(const std::string & content)
{
    std::shared_ptr<Beauty> b1 = std::make_shared<Beauty1>();
    std::shared_ptr<Beauty> b2 = std::make_shared<Beauty2>();
    std::shared_ptr<Beauty> b3 = std::make_shared<Beauty3>();
    std::shared_ptr<Beauty> b4 = std::make_shared<Beauty4>();
    b1
        ->passTo(b2)
        ->passTo(b3)
        ->passTo(b4);

    Request req(content);
    b1->pass(req, res_);
}
