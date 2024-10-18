#include <gtest/gtest.h>

#include <Dionysen.h>
#include <EntryPoint.h>

TEST(TestSuite, TestName)
{
    EXPECT_EQ(1, 1);
}

namespace Dionysen
{
    class TestSuite : public Application
    {
      public:
        TestSuite(const ApplicationSpecification& specification)
            : Dionysen::Application(specification)
        {
        }
        ~TestSuite()
        {
        }
    };
    Application* CreateApplication(ApplicationCommandLineArgs args)
    {
        ApplicationSpecification spec;
        spec.Name             = "Test";
        spec.WorkingDirectory = ".";
        spec.CommandLineArgs  = args;
        spec.RunTests         = true;
        return new TestSuite(spec);
    }
}  // namespace Dionysen