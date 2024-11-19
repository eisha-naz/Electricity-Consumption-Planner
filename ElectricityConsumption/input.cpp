#include "input.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace ElectricityConsumption;  // Add the correct namespace for your project

[STAThread]  // Attribute indicating that the application runs with single-threaded apartment model
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    input form;  // Create the form object

    Application::Run(% form);  // Run the application with the form
}
