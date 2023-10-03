
#pragma once

#include <AzCore/EBus/EBus.h>
#include <AzCore/Interface/Interface.h>

namespace Protect_The_Moon_RMX23
{
    class Protect_The_Moon_RMX23Requests
    {
    public:
        AZ_RTTI(Protect_The_Moon_RMX23Requests, "54FF6C8D-7080-4803-A07E-F266DE0F95A9");
        virtual ~Protect_The_Moon_RMX23Requests() = default;
        // Put your public methods here
    };
    
    class Protect_The_Moon_RMX23BusTraits
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static constexpr AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static constexpr AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////
    };

    using Protect_The_Moon_RMX23RequestBus = AZ::EBus<Protect_The_Moon_RMX23Requests, Protect_The_Moon_RMX23BusTraits>;
    using Protect_The_Moon_RMX23Interface = AZ::Interface<Protect_The_Moon_RMX23Requests>;

} // namespace Protect_The_Moon_RMX23
