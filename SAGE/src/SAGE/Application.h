#pragma once

#include "Core.h"

namespace SAGE {
	class SAGE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// Client-defined
	Application* CreateApplication();
}
