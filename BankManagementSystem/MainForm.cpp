#include "MainForm.h"
#include "BankCustomer.h"
#include "AVLNode.h"
#include "AVLTree.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BankManagementSystem::MainForm form;
	Application::Run(% form);

	
}