#pragma once
// GlobalData

#include "AVLTree.h"

namespace BankManagementSystem {
    public ref class Storage
    {
    public:
        static AVLTree^ storageTree = gcnew AVLTree(); // Global AVLTree instance

        
    };

    
}



