#include <Csystem.h>

class Sandbox : public Csystem::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Csystem::Application* Csystem::CreateApplication() {
	return new Sandbox();
}