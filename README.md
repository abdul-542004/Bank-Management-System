# Bank Management System (GUI)

## Problem Statement
Efficiently managing bank accounts, transactions, and customer data is a crucial operation for financial institutions. To address this need, we have developed a **Bank Management System** that prioritizes security, efficiency, and user-friendliness. Built using **C++ with WinForms**, the system offers a graphical user interface (GUI) designed to provide an intuitive experience for both bank staff and customers.

The primary objectives of this system are to:
- Simplify customer account management.
- Ensure robust data handling.
- Support features like sorting, searching, and managing financial transactions.

The system incorporates a **modular design** with multiple forms, each dedicated to specific tasks such as account creation, customer detail viewing, and transaction management. This approach enhances usability, promotes smooth workflows, and optimizes banking operations.

---

## Distinguishing Features of the Project

### User-Friendly Interface
The project features a **graphical user interface (GUI)** that provides a seamless experience for both administrators and customers. Key highlights include:
- Intuitive design for effortless navigation through options like account creation, deletion, transactions, and viewing account details.
- Dropdown menus, input validation, and dynamically updated data tables for ease of use.
- Error messages to guide users during invalid operations.

---

### Account Management
Efficient data handling is achieved using an **AVL Tree** as the backbone for account management. This **self-balancing binary search tree** structure enables the following:

1. **Account Creation**  
   - Each customer account is assigned a unique account number and inserted into the AVL tree.  
   - The tree ensures that accounts remain sorted for fast retrieval.

2. **Account Deletion**  
   - Accounts can be deleted without compromising the tree's balance, ensuring that subsequent operations remain efficient.

3. **Searching**  
   - The AVL tree provides **O(log n)** search efficiency, allowing quick access to customer details using their account numbers.

Additionally, the **QuickSort algorithm** is employed for sorting accounts based on user preferences (e.g., Account ID, Name, or Balance).  
- Sorted results are displayed dynamically in the GUI using a **Dynamic Array**, enhancing data visualization without altering the tree structure.

---

### Transaction Management
Each customer's transaction history is maintained using a **Linked List**, ensuring dynamic and efficient storage of financial activities.  

- **Withdrawal and Deposit Operations**  
  - Customer balances, stored in the AVL tree, are updated for each transaction.  
  - The linked list logs a detailed transaction history for accountability and transparency.

- **Collaboration Between AVL Tree and Linked List**  
  - The AVL tree quickly identifies the account, while the linked list appends transaction details.  
  - This seamless collaboration ensures consistent data updates and accurate record-keeping.

---

### ATM Services
The project also includes a **simulation of ATM services** to replicate real-world banking scenarios:

1. **Withdraw Funds**  
   - Customers securely withdraw money by entering their PIN.  
   - The system validates the PIN, ensures sufficient balance, and updates both the AVL tree and transaction history upon successful withdrawal.

2. **Check Balance**  
   - The current balance is retrieved in real time from the AVL tree and displayed on the interface, keeping customers informed of their financial status.

3. **Fund Transfers**  
   - Customers can transfer funds between accounts.  
   - The system validates both accounts, updates the AVL tree for both accounts, and logs transaction details in their respective linked lists.

---  

## How to Access This Project

To get started with the **Bank Management System**, follow these steps:

### Steps to Access
1. Clone the repository to your local machine:
   ```bash
   git clone https://github.com/abdul-542004/Bank-Management-System.git
   ```
2. Navigate to the project directory and open the `.sln` file using **Microsoft Visual Studio**.

---

### Prerequisites
Before running the project, ensure your Visual Studio setup includes **C++/CLI support**:

1. Open the **Visual Studio Installer**:
   - Search for "Visual Studio Installer" in the Windows Start menu.  
2. Click the **Modify** button next to your installed version of Visual Studio.  
3. Go to the **Individual components** tab.  
4. Scroll down to the **Compilers, build tools, and runtimes** section.  
5. Select **C++/CLI support for v143 build tools (Latest)**.  
6. Click **Modify** to download and install the necessary files.

Once the setup is complete, you'll be ready to build and run the project!
---

