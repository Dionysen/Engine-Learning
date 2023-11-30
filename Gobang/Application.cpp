#include "Application.h"
#include "Dionysen.h"
#include "Log.h"

class Gobang : public Dionysen::Application
{
  public:
    Gobang()
    {
        DION_CLIENT_TRACE("Create Gobang");
        m_appName = "Gobang";
    }
    ~Gobang() {}
};

Dionysen::Application* Dionysen::CreateApplication()
{
    DION_CLIENT_TRACE("This is Gobang!");
    return new Gobang();
}
