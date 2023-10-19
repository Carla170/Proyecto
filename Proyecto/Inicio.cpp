#include "Inicio.h"

using namespace Proyecto;

[STAThreadAttribute]
int main(array<System::String^>^ Args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Inicio());
	return 0;
}
