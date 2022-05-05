
#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	carrent::LoginForm loginForm;

	loginForm.ShowDialog();
	User^ user = loginForm.user;

	if (user != nullptr) {
		//carrent::MainForm mainForm(user);
		//Application::Run(% mainForm)
		MessageBox::Show("Authentication Succssful",
			"Program.cpp", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Authentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}
}
