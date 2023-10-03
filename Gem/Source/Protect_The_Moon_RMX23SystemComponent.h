
#pragma once

#include <AzCore/Component/Component.h>

#include <Protect_The_Moon_RMX23/Protect_The_Moon_RMX23Bus.h>

namespace Protect_The_Moon_RMX23
{
    class Protect_The_Moon_RMX23SystemComponent
        : public AZ::Component
        , protected Protect_The_Moon_RMX23RequestBus::Handler
    {
    public:
        AZ_COMPONENT(Protect_The_Moon_RMX23SystemComponent, "{BA1E94F4-FE34-4498-8612-03264E2B2061}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        Protect_The_Moon_RMX23SystemComponent();
        ~Protect_The_Moon_RMX23SystemComponent();

    protected:
        ////////////////////////////////////////////////////////////////////////
        // Protect_The_Moon_RMX23RequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
