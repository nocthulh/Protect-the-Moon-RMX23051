
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include "Protect_The_Moon_RMX23SystemComponent.h"

namespace Protect_The_Moon_RMX23
{
    class Protect_The_Moon_RMX23Module
        : public AZ::Module
    {
    public:
        AZ_RTTI(Protect_The_Moon_RMX23Module, "{D0753019-48BD-4C33-A811-87B926FE77AC}", AZ::Module);
        AZ_CLASS_ALLOCATOR(Protect_The_Moon_RMX23Module, AZ::SystemAllocator, 0);

        Protect_The_Moon_RMX23Module()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                Protect_The_Moon_RMX23SystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<Protect_The_Moon_RMX23SystemComponent>(),
            };
        }
    };
}// namespace Protect_The_Moon_RMX23

AZ_DECLARE_MODULE_CLASS(Gem_Protect_The_Moon_RMX23, Protect_The_Moon_RMX23::Protect_The_Moon_RMX23Module)
