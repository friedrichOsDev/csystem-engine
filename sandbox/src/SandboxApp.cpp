#include <Csystem.h>

class ExampleLayer : public Csystem::Layer {
public:
	ExampleLayer() : Layer("Example") {}
	
	void OnUpdate() override {
		CS_INFO("ExampleLayer::Update");
	}

	void OnEvent(Csystem::Event& event) override {
		CS_TRACE(event.ToString());
	}
};

class Sandbox : public Csystem::Application {
public:
	Sandbox() {
		PushLayer(new ExampleLayer());
	}

	~Sandbox() {

	}
};

Csystem::Application* Csystem::CreateApplication() {
	return new Sandbox();
}