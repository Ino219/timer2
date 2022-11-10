#include "MyForm.h"

using namespace timer2;

[STAThreadAttribute]

int main(){
	Application::Run(gcnew MyForm());
	return 0;

}