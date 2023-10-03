
#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/EditContext.h>
#include <AzCore/Serialization/EditContextConstants.inl>

#include "Protect_The_Moon_RMX23SystemComponent.h"

namespace Protect_The_Moon_RMX23
{
    void Protect_The_Moon_RMX23SystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (AZ::SerializeContext* serialize = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serialize->Class<Protect_The_Moon_RMX23SystemComponent, AZ::Component>()
                ->Version(0)
                ;

            if (AZ::EditContext* ec = serialize->GetEditContext())
            {
                ec->Class<Protect_The_Moon_RMX23SystemComponent>("Protect_The_Moon_RMX23", "[Description of functionality provided by this System Component]")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                        ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ;
            }
        }
    }

    void Protect_The_Moon_RMX23SystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC("Protect_The_Moon_RMX23Service"));
    }

    void Protect_The_Moon_RMX23SystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC("Protect_The_Moon_RMX23Service"));
    }

    void Protect_The_Moon_RMX23SystemComponent::GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required)
    {
        AZ_UNUSED(required);
    }

    void Protect_The_Moon_RMX23SystemComponent::GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
        AZ_UNUSED(dependent);
    }
    
    Protect_The_Moon_RMX23SystemComponent::Protect_The_Moon_RMX23SystemComponent()
    {
        if (Protect_The_Moon_RMX23Interface::Get() == nullptr)
        {
            Protect_The_Moon_RMX23Interface::Register(this);
        }
    }

    Protect_The_Moon_RMX23SystemComponent::~Protect_The_Moon_RMX23SystemComponent()
    {
        if (Protect_The_Moon_RMX23Interface::Get() == this)
        {
            Protect_The_Moon_RMX23Interface::Unregister(this);
        }
    }

    void Protect_The_Moon_RMX23SystemComponent::Init()
    {
    }

    void Protect_The_Moon_RMX23SystemComponent::Activate()
    {
        Protect_The_Moon_RMX23RequestBus::Handler::BusConnect();
    }

    void Protect_The_Moon_RMX23SystemComponent::Deactivate()
    {
        Protect_The_Moon_RMX23RequestBus::Handler::BusDisconnect();
    }
}
